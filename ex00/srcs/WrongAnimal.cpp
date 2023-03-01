#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal default constructor called" << std::endl;
    this->type = "WrongAnimal";
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal default destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& src)
:type(src.type)
{
    std::cout << "WrongAnimal default copy constructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator= (const WrongAnimal& src)
{
    this->type = src.type;
    std::cout << "WrongAnimal default copy assignment called" << std::endl;
    return (*this);
}

std::string    WrongAnimal::getType() const
{
    return (this->type);
}

void    WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal makes sound" << std::endl;
}