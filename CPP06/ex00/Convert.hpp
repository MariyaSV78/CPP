/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msosnova <msosnova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 01:58:05 by msosnova          #+#    #+#             */
/*   Updated: 2022/11/24 01:58:10 by msosnova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <exception>
# include <cmath>

class Convert 
{
    private:
        std::string     _input;
        double          _d;

    public:
        Convert();
        Convert(std::string str);
        Convert(Convert const& ClassCopy);
        ~Convert();

        Convert& operator=(Convert const& rhs);

        void      toChar();
        void      toInt();
        void      toDouble();
        void      toFloat();
        
        
    class IsBadArguments: public std::exception
    {
        public:
            IsBadArguments();
            virtual ~IsBadArguments(void) throw();
            virtual const char    *what() const throw();
    };

    class IsImpossibleExept: public std::exception
    {
        public:
            IsImpossibleExept();
            virtual ~IsImpossibleExept(void) throw();
            virtual const char    *what() const throw();
    };

    class IsNotDisplay: public std::exception
    {
        public:
            IsNotDisplay();
            virtual ~IsNotDisplay(void) throw();
            virtual const char    *what() const throw();
    };
};

#endif
