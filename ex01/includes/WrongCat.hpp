#ifndef WRONGCAT_H
# define WRONGCAT_H
# include "WrongAnimal.hpp"
# include <iostream>

class   WrongCat: public WrongAnimal
{
    public:
        WrongCat();
        ~WrongCat();
        WrongCat(const WrongCat&);
        WrongCat& operator= (const WrongCat&);
        void    makeSound() const;
};
#endif