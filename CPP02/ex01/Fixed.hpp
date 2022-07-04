/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msosnova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 18:36:34 by msosnova          #+#    #+#             */
/*   Updated: 2022/05/26 18:36:40 by msosnova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>


class Fixed
{
    private:
        int                 _Nbr;
        static int const    _bit = 8;
    
    public:
        Fixed();
        Fixed(const int i);
        Fixed(const float j);
        Fixed(const Fixed& n);
        ~Fixed();
        Fixed & operator=(Fixed const& rhs);
        
        int     getRawBits() const;
        void    setRawBits(int const raw);
        float   toFloat() const;
        int     toInt() const;
};
std::ostream&  operator<<(std::ostream& stream, Fixed const& rhs);

#endif


