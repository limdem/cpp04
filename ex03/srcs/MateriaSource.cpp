#include "../includes/MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource()
{
    int i;

    i = 0;
    while (i < 4)
    {
        this->_mat_src[i] = NULL;
        i++;
    }
    std::cout << "MateriaSource default constructor called" << std::endl;
}

MateriaSource::~MateriaSource()
{
    int i;

    i = 0;
    while (i < 4)
    {
        if (this->_mat_src[i])
            delete _mat_src[i];
        i++;
    }
    std::cout << "MateriaSource default destructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& src)
{
    int i;

    i = 0;
    while (i < 4)
    {
        this->_mat_src[i] = src._mat_src[i];
        i++;
    }
    std::cout << "MateriaSource default copy constructor called" << std::endl;   
}

MateriaSource& MateriaSource::operator= (const MateriaSource& src)
{
    int i;

    i = 0;
    while (i < 4)
    {
        this->_mat_src[i] = src._mat_src[i];
        i++;
    }
    std::cout << "MateriaSource default copy assignment called" << std::endl;
    return (*this);     
}

void    MateriaSource::learnMateria(AMateria* m)
{
    int i;

    i = 0;
    while (i < 4)
    {
        if (!this->_mat_src[i])
        {
            this->_mat_src[i] = m;
            return ;
        }
        i++;
    }
}

AMateria*   MateriaSource::createMateria(std::string const & type)
{
    AMateria    *ptr;
    int i;

    i = 0;
    while (i < 4)
    {
        if (this->_mat_src[i] && !this->_mat_src[i]->getType().compare(type))
        {
            ptr = this->_mat_src[i]->clone();
            return (ptr);
        }
        i++;
    }
    return (NULL);
}