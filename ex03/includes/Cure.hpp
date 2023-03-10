#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"
# include <string>

class   Cure: public AMateria
{
    public:
        Cure();
        virtual ~Cure();
        Cure(const Cure&);
        Cure& operator= (const Cure&);
        AMateria* clone() const;
        void    use(ICharacter& target);
};
#endif