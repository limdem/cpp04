#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"
#include "interfacerecap.h"
# include <string>

class   AMateria;

class   Character: public ICharacter
{
    private:
        std::string _name;
        AMateria*    _inv[4];
        t_unequip_list    *uList;
        int                 unequipNbr;
    public:
        Character();
        Character(std::string);
        ~Character();
        Character(const Character&);
        Character& operator= (const Character&);
        std::string const & getName() const;
        void    equip(AMateria* m);
        void    unequip(int idx);
        void    use(int idx, ICharacter& target);
        class CharacterMemoryException: public std::exception
        {
            virtual const char* what() const throw();
        };
};
#endif