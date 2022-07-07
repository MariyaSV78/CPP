/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msosnova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 21:15:35 by msosnova          #+#    #+#             */
/*   Updated: 2022/07/07 21:15:37 by msosnova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <exception>
# include <string>
# include <algorithm>


class Span 

{
    private:
        unsigned int        _N;
        std::vector<int>    _v;

    public:
        Span();
        Span(unsigned int N);
        ~Span();

        Span(Span const& src);
        Span& operator=(Span const& rhs);

        void    addNumber(int nbr);
        int     shortestSpan();
        int     longestSpan();
        void    addNumberMulti(unsigned int N);    


        class maxN: public std::exception
        {
            const char *what() const throw()
            {
                return ("Max size of conteiner is riched");
            }
        };

        class noNbr: public std::exception
        {
            const char *what() const throw()
            {
                return "There is one or any Nbr";
            }
        };

};



#endif
