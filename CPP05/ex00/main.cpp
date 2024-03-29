/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msosnova <msosnova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 01:44:52 by msosnova          #+#    #+#             */
/*   Updated: 2022/11/24 01:44:55 by msosnova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat  Tom("Tom", 150);
    Bureaucrat  Bob("Bob", 1);

    try
    {
        std::cout << Tom << std::endl;
        Tom.decrementGrade();
        std::cout << Tom << std::endl;
        Tom.incrementGrade();
        std::cout << Tom << std::endl;
        Tom.incrementGrade();
        std::cout << Tom << std::endl;
    }
    catch (std::exception const& e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        std::cout << Bob << std::endl;
        Bob.incrementGrade();
        std::cout << Bob << std::endl;
        Bob.decrementGrade();
        Bob.decrementGrade();
        std::cout << Bob << std::endl;
    }
    catch (std::exception const& e)
    {
        std::cerr << e.what() << std::endl;
    }
}
