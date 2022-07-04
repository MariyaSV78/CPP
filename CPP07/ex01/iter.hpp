#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>

template<typename T>
void    iter(T* tab, unsigned int len, void (ft)(T const& t) )
{
    for(unsigned int i = 0; i < len; i++)
        ft(tab[i]); 
}

#endif