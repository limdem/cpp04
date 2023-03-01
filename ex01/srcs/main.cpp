#include "../includes/Animal.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"
#include <iostream>

#define NBR 10

int main()
{
    Animal  **animals;
    int i;

    animals = new (std::nothrow) Animal*[NBR];
    if (!animals)
        return (1);
    i = 0;
    while (i < NBR)
    {
        try
        {
            if (i < NBR / 2)
                animals[i] = new Dog;
            else
                animals[i] = new Cat;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
            i--;
            while (i >= 0)
            {
                delete animals[i];
                i--;
            }
            delete[] animals;
            return (1);
        }
        i++;      
    }
    i = 0;
    while (i < NBR)
    {
        delete animals[i];
        i++;
    }
    delete[] animals;
    return (0);
}