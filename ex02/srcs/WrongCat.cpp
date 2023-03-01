#include "../includes/WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat default constructor called" << std::endl;
    this->type = "WrongCat";
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat default destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& src)
:WrongAnimal()
{
    std::cout << "WrongCat default copy constructor called" << std::endl;
    this->type = src.type;
}

WrongCat& WrongCat::operator= (const WrongCat& src)
{
    std::cout << "WrongCat default copy assignment called" << std::endl;
    this->type = src.type;
    return (*this);
}

void    WrongCat::makeSound() const
{
    std::cout << "WrongCat meows" << std::endl;
}