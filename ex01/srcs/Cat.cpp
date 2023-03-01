#include "../includes/Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat default constructor called" << std::endl;
    this->type = "Cat";
    this->brain = createBrain();
}

Cat::~Cat()
{
    std::cout << "Cat default destructor called" << std::endl;
    destroyBrain(this->brain);
}

Cat::Cat(const Cat& src)
:Animal()
{
    std::cout << "Cat default copy constructor called" << std::endl;
    this->type = src.type;
    this->brain = createBrain();
}

Cat& Cat::operator= (const Cat& src)
{
    std::cout << "Cat default copy assignment called" << std::endl;
    Cat tmp(src);
    std::swap(*this->getBrain(), *tmp.getBrain());
    std::swap(this->type, tmp.type);
    return (*this);
}

void    Cat::makeSound() const
{
    std::cout << "Cat meows" << std::endl;
}

Brain   *Cat::getBrain()
{
    return (this->brain);
}