#include "../includes/AMateria.hpp"
#include "../includes/ICharacter.hpp"
#include <string>
#include <iostream>

AMateria::AMateria()
{
    std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type)
{
    std::cout << "AMateria constructor called" << std::endl;
    setType(type);
}

AMateria::~AMateria()
{
    std::cout << "AMateria default destructor called" << std::endl;
}

AMateria::AMateria(const AMateria& src)
{
    std::cout << "AMateria copy constructor called" << std::endl;
    this->_type = src._type;
}

AMateria& AMateria::operator= (const AMateria& src)
{
    std::cout << "AMateria copy assignment called" << std::endl;
    this->_type = src._type;
    return (*this);
}

std::string const & AMateria::getType() const
{
    return (this->_type);
}

void    AMateria::setType(std::string const & type)
{
    this->_type = type;
}

void    AMateria::use(ICharacter& target)
{
    (void)target;
}
