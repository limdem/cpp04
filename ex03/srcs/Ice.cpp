#include "../includes/Ice.hpp"
#include "../includes/AMateria.hpp"
#include <iostream>

Ice::Ice():AMateria("ice")
{
    std::cout << "Ice default constructor called" << std::endl;
}

Ice::~Ice()
{
    std::cout << "Ice default destructor called" << std::endl;
}

Ice::Ice(const Ice& src)
:AMateria()
{
    std::cout << "Ice copy constructor called" << std::endl;
    this->_type = src._type;
}

Ice& Ice::operator= (const Ice& src)
{
    std::cout << "Ice copy assignment called" << std::endl;
    this->_type = src._type;
    return (*this);
}

AMateria* Ice::clone() const
{
    
    AMateria*   clone;

    clone = new (std::nothrow)Ice;
    if (!clone)
        return (NULL);
    return (clone);
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}