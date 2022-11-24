/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msosnova <msosnova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 02:06:12 by msosnova          #+#    #+#             */
/*   Updated: 2022/11/24 02:06:17 by msosnova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
