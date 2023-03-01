#include "../includes/Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain default destructor called" << std::endl;
}

Brain::Brain(const Brain& src)
{
    int i;

    i = 0;
    while (i < 100)
    {
        this->ideas[i] = src.ideas[i];
        i++;
    }    
}

Brain& Brain::operator= (const Brain& src)
{
    int i;

    i = 0;
    while (i < 100)
    {
        this->ideas[i] = src.ideas[i];
        i++;
    }
    return (*this);
}