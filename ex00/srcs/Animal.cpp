#include "../includes/Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal default constructor called" << std::endl;
    this->type = "Animal";
}

Animal::~Animal()
{
    std::cout << "Animal default destructor called" << std::endl;
}

Animal::Animal(const Animal& src)
:type(src.type)
{
    std::cout << "Animal default copy constructor called" << std::endl;
}

Animal& Animal::operator= (const Animal& src)
{
    this->type = src.type;
    std::cout << "Animal default copy assignment called" << std::endl;
    return (*this);
}

std::string    Animal::getType() const
{
    return (this->type);
}

void    Animal::makeSound() const
{
    std::cout << "Animal makes sound" << std::endl;
}