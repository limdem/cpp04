#include "../includes/Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog default constructor called" << std::endl;
    this->type = "Dog";
    this->brain = createBrain();
}

Dog::~Dog()
{
    std::cout << "Dog default destructor called" << std::endl;
    destroyBrain(this->brain);
}

Dog::Dog(const Dog& src)
:Animal()
{
    std::cout << "Dog default copy constructor called" << std::endl;
    this->type = src.type;
    this->brain = createBrain();
}

Dog& Dog::operator= (const Dog& src)
{
    std::cout << "Dog default copy assignment called" << std::endl;
    Dog tmp(src);
    std::swap(*this->getBrain(), *tmp.getBrain());
    std::swap(this->type, tmp.type);
    return (*this);
}

void    Dog::makeSound() const
{
    std::cout << "Dog barks" << std::endl;
}

Brain   *Dog::getBrain()
{
    return (this->brain);
}

void    Dog::setBrain(Brain *brain)
{
    this->brain = brain;
}
