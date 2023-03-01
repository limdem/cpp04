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
    std::cout << "Animal copy constructor called" << std::endl;
}

Animal& Animal::operator= (const Animal& src)
{
    std::cout << "Animal copy assignment called" << std::endl;
    this->type = src.type;
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

Brain*  Animal::createBrain()
{
    Brain   *brain;
    brain = new (std::nothrow)Brain;
    if (!brain)
        throw BrainCreationException();
    return (brain);
}

void    Animal::destroyBrain(Brain *brain)
{
    delete brain;
}

const char* Animal::BrainCreationException::what() const throw()
{
    return ("AnimalException: brain creation failed");
}