#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include "Brain.hpp"
# include <iostream>
# include <string>

class   Animal
{
    protected:
        std::string  type;
    public:
        Animal();
        virtual ~Animal();
        Animal(const Animal&);
        Animal& operator= (const Animal&);
        std::string    getType() const;
        virtual void    makeSound() const = 0;
        static Brain  *createBrain();
        static void    destroyBrain(Brain *);
        class BrainCreationException: public std::exception
        {
            virtual const char* what() const throw();
        };       
};
#endif