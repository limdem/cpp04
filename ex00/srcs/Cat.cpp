#include "../includes/Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat default constructor called" << std::endl;
    this->type = "Cat";
}

Cat::~Cat()
{
    std::cout << "Cat default destructor called" << std::endl;
}

Cat::Cat(const Cat& src)
:Animal()
{
    std::cout << "Cat default copy constructor called" << std::endl;
    this->type = src.type;
}

Cat& Cat::operator= (const Cat& src)
{
    std::cout << "Cat default copy assignment called" << std::endl;
    this->type = src.type;
    return (*this);
}

void    Cat::makeSound() const
{
    std::cout << "Cat meows" << std::endl;
}