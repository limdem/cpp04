#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"
# include <iostream>

class   Dog: public Animal
{
    private:
        Brain   *brain;
    public:
        Dog();
        virtual ~Dog();
        Dog(const Dog&);
        Dog& operator= (const Dog&);
        void    makeSound() const;
        Brain   *getBrain();
};
#endif