#include "../includes/Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog default constructor called" << std::endl;
    this->type = "Dog";
}

Dog::~Dog()
{
    std::cout << "Dog default destructor called" << std::endl;
}

Dog::Dog(const Dog& src)
:Animal()
{
    std::cout << "Dog default copy constructor called" << std::endl;
    this->type = src.type;
}

Dog& Dog::operator= (const Dog& src)
{
    std::cout << "Dog default copy assignment called" << std::endl;    
    this->type = src.type;
    return (*this);
}

void    Dog::makeSound() const
{
    std::cout << "Dog barks" << std::endl;
}