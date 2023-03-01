#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class   MateriaSource: public IMateriaSource
{
    private:
        AMateria*    _mat_src[4];
    public:
        MateriaSource();
        virtual ~MateriaSource();
        MateriaSource(const MateriaSource&);
        MateriaSource& operator= (const MateriaSource&);
        void    learnMateria(AMateria*);
        virtual AMateria*   createMateria(std::string const & type);
};
#endif