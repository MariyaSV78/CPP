/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msosnova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 21:14:57 by msosnova          #+#    #+#             */
/*   Updated: 2022/07/07 21:15:00 by msosnova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()

{
    {
        std::cout << "----------SUJET-----------" << std::endl;
        Span sp = Span(5);
        try
        {
            sp.addNumber(6);
            sp.addNumber(3);
            sp.addNumber(17);
            sp.addNumber(9);
            sp.addNumber(11);
        }
        catch (std::exception & e) {std::cout << e.what() << std::endl;}
        try
        {
            std::cout << "shortest span: " << sp.shortestSpan() << std::endl;
            std::cout << "longest span:" <<sp.longestSpan() << std::endl;
        }
        catch (std::exception & e) {std::cout << e.what() << std::endl;}
    }

    {
        std::cout << "----------EXEMPLE-1-----------" << std::endl;
        Span sp = Span(10);
        
        try
        {
            sp.addNumber(1);
            sp.addNumber(2);
            sp.addNumber(3);
            sp.addNumber(91);
            sp.addNumber(110);
            sp.addNumber(60);
            sp.addNumber(3);
            sp.addNumber(17);
            sp.addNumber(19);
            sp.addNumber(1);
        }
        catch (std::exception & e) {std::cout << e.what() << std::endl;}
        try
        {
            std::cout << "shortest span: " << sp.shortestSpan() << std::endl;
            std::cout << "longest span:" <<sp.longestSpan() << std::endl;
        }
        catch (std::exception & e) {std::cout << e.what() << std::endl;}
    }

   {
        std::cout << "----------EXEMPLE-2-MULTI----------" << std::endl;
  
        Span sp = Span(100);
        try
        {
            sp.addNumberMulti(25);
        }
        catch (std::exception & e) {std::cout << e.what() << std::endl;}
        try
        {
            std::cout << "shortest span: " << sp.shortestSpan() << std::endl;
            std::cout << "longest span:" <<sp.longestSpan() << std::endl;
        }
        catch (std::exception & e) {std::cout << e.what() << std::endl;}
    }


    return 0;
}
