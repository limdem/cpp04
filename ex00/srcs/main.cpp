#include "../includes/Animal.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"
#include <iostream>

int main()
{
    
    const Animal*   meta = new Animal();
    const Animal*   j = new Dog();
    const Animal*   i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();

    delete  meta;
    delete  j;
    delete  i;
    
    const WrongAnimal*  wrongMeta = new WrongAnimal();
    const WrongAnimal*  wrongAnimalCat = new WrongCat();
    WrongCat   *wrongCat;

    wrongCat = new WrongCat;
    std::cout << wrongMeta->getType() << " " << std::endl;
    std::cout << wrongAnimalCat->getType() << " " << std::endl;
    wrongMeta->makeSound();
    wrongAnimalCat->makeSound();
    wrongCat->makeSound();
    delete wrongMeta;
    delete wrongAnimalCat;
    delete wrongCat;
    /*
    const WrongAnimal*   meta = new WrongAnimal();
    const Animal*   j = new Dog();
    const WrongAnimal*   i = new WrongCat();

    std::cout << meta->getType() << " " << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();
    
    delete meta;
    delete j;
    delete i;
    */
    /*
    Animal  animal1;
    animal1.makeSound();
    Animal  animal2(animal1);
    animal2.makeSound();
    animal1 = animal2;
    animal1.makeSound();
    */
    /*
    Cat  cat1;
    cat1.makeSound();
    Cat  cat2(cat1);
    cat2.makeSound();
    cat1 = cat2;
    cat1.makeSound();
    */
    /*
    Dog  dog1;
    dog1.makeSound();
    Dog  dog2(dog1);
    dog2.makeSound();
    dog1 = dog2;
    dog1.makeSound();
    */
    /*
    WrongAnimal  wronganimal1;
    wronganimal1.makeSound();
    WrongAnimal  wronganimal2(wronganimal1);
    wronganimal2.makeSound();
    wronganimal1 = wronganimal2;
    wronganimal1.makeSound();
    */
    /*
    WrongCat  wrongcat1;
    wrongcat1.makeSound();
    WrongCat  wrongcat2(wrongcat1);
    wrongcat2.makeSound();
    wrongcat1 = wrongcat2;
    wrongcat1.makeSound();
    */   
    return (0);
}