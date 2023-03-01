#include "../includes/Character.hpp"
#include "../includes/AMateria.hpp"
#include "../includes/Ice.hpp"
#include "../includes/Cure.hpp"
#include "../includes/interfacerecap.h"
#include <iostream>
#include <string>
#include <stdio.h>

Character::Character()
{
    std::cout << "Character default constructor called" << std::endl;
}

Character::Character(std::string name)
{
    int i;

    std::cout << "Character constructor called" << std::endl;
    _name = name;
    i = 0;
    while (i < 4)
    {
        this->_inv[i] = NULL;
        i++;
    }
    this->uList = new (std::nothrow)t_unequip_list;
    if (!this->uList)
        throw CharacterMemoryException();
    this->uList->ptr = NULL;
    this->unequipNbr = 0;
}

Character::~Character()
{
    t_unequip_list  *tmp;
    t_unequip_list  *save;
    int i;

    std::cout << "Character default destructor called" << std::endl;
    i = 0;
    while (i < 4)
    {
        if (this->_inv[i])
            delete this->_inv[i];
        i++;
    }
    i = 0;
    tmp = this->uList;
    while (i < this->unequipNbr)
    {
        save = tmp;
        (tmp) = (tmp)->next;
        delete save->ptr;
        delete save;
        i++;
    }
    if (!i)
        delete tmp;
}

Character::Character(const Character& src)
{
    int i;

    std::cout << "Character copy constructor called" << std::endl;
    _name = src._name;
    i = 0;
    while (i < 4)
    {
        if (src._inv[i])
        {
            if (dynamic_cast<Ice *>(src._inv[i]))
                this->_inv[i] = new (std::nothrow) Ice;
            if (dynamic_cast<Cure *>(src._inv[i]))
                this->_inv[i] = new (std::nothrow) Cure;
            if (this->_inv[i])
                throw CharacterMemoryException();
        }
        else
            this->_inv[i] = NULL;
        i++;
    }
    this->uList = new (std::nothrow) t_unequip_list;
    if (!this->uList)
        throw CharacterMemoryException();
    this->uList->ptr = NULL;
    this->unequipNbr = src.unequipNbr;
}

Character& Character::operator= (const Character& src)
{
    int i;

    std::cout << "Character copy assignment called" << std::endl;
    _name = src._name;
    i = 0;
    while (i < 4)
    {
        if (this->_inv[i])
            delete this->_inv[i];
        if (src._inv[i])
        {
            if (dynamic_cast<Ice *>(src._inv[i]))
                this->_inv[i] = new (std::nothrow) Ice;
            if (dynamic_cast<Cure *>(src._inv[i]))
                this->_inv[i] = new (std::nothrow) Cure;
            if (this->_inv[i])
                throw CharacterMemoryException();
        }
        else
            this->_inv[i] = NULL;
        i++;
    }
    delete this->uList;
    this->uList = new (std::nothrow) t_unequip_list;
    if (!this->uList)
        throw CharacterMemoryException();
    this->uList->ptr = NULL;
    this->unequipNbr = src.unequipNbr;
    return (*this);
}

std::string const & Character::getName() const
{
    return (this->_name);
}

void    Character::equip(AMateria* m)
{
    AMateria    *ptr;
    int i;

    i = 0;
    if (!m) 
        return ;
    while (i < 4)
    {
        if (!this->_inv[i])
        {
            if (dynamic_cast<Ice *>(m))
                ptr = new (std::nothrow) Ice;
            if (dynamic_cast<Cure *>(m))
                ptr = new (std::nothrow) Cure;
            if (!ptr)
                throw CharacterMemoryException();
            this->_inv[i] = ptr;
            delete m;
            break ;
        }
        i++;
    }
}

void    Character::unequip(int idx)
{
    t_unequip_list  *tmp;
    int i;

    if (!(idx >= 0 && idx <= 3) || !this->_inv[idx])
        return ;
    i = 0;
    tmp = this->uList;
    while (i < this->unequipNbr)
    {
        this->uList->next = new (std::nothrow) t_unequip_list;
        if (!this->uList->next)
            throw CharacterMemoryException();
        this->uList = this->uList->next;
        i++;
    }
    this->uList->ptr = this->_inv[idx];
    this->unequipNbr++;
    this->_inv[idx] = NULL;
    this->uList = tmp;
}

void    Character::use(int idx, ICharacter& target)
{
    if (!(idx >= 0 && idx <= 3))
        return ;
    if (this->_inv[idx])
        this->_inv[idx]->use(target);
}

const char* Character::CharacterMemoryException::what() const throw()
{
    return ("CharacterMemoryException: allocation failed");
}