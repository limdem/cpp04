#ifndef CAT_H
# define CAT_H
# include "Animal.hpp"
# include <iostream>

class   Cat: public Animal
{
    private:
        Brain   *brain;
    public:
        Cat();
        virtual ~Cat();
        Cat(const Cat&);
        Cat& operator= (const Cat&);
        void    makeSound() const;
        Brain   *getBrain();
};
#endif