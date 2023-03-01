#ifndef INTERFACERECAP_H
# define INTERFACERECAP_H

# include "AMateria.hpp"

typedef struct s_unequip_list
{
    AMateria    *ptr;
    struct s_unequip_list   *prev;
    struct s_unequip_list   *next;
}   t_unequip_list;

#endif