#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>

class   ICharacter;

class   AMateria
{
    protected:
        std::string _type;
    public:
        AMateria();
        AMateria(std::string const & type);
        virtual ~AMateria();
        AMateria(const AMateria&);
        AMateria& operator= (const AMateria&);
        std::string const & getType() const;
        void    setType(std::string const &);

        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};
#endif