#include "../includes/Cure.hpp"
#include "../includes/AMateria.hpp"
#include <iostream>

Cure::Cure():AMateria("cure")
{
    std::cout << "Cure default constructor called" << std::endl;
}

Cure::~Cure()
{
    std::cout << "Cure default destructor called" << std::endl;
}

Cure::Cure(const Cure& src)
:AMateria()
{
    std::cout << "Cure copy constructor called" << std::endl;
    this->_type = src._type;
}

Cure& Cure::operator= (const Cure& src)
{
    std::cout << "Cure copy assignment called" << std::endl;
    this->_type = src._type;
    return (*this);
}

AMateria* Cure::clone() const
{
    
    AMateria*   clone;

    clone = new (std::nothrow)Cure;
    if (!clone)
        return (NULL);
    return (clone);
}

void    Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}