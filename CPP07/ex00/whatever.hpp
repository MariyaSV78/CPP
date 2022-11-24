/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msosnova <msosnova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 02:05:28 by msosnova          #+#    #+#             */
/*   Updated: 2022/11/24 02:05:34 by msosnova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>
# include <string>

template <typename T>
void    swap(T& a, T& b)
{
    T   tmp;

    tmp = a;
    a = b;
    b = tmp;
}

template <typename T>
T const&  min(T const& a, T const& b)
{
    return((a < b) ? a : b);
}

template <typename T>
T const&  max(T const& a, T const& b)
{
    return((a > b) ? a : b);
}
#endif
