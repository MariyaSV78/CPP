/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msosnova <msosnova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 01:46:17 by msosnova          #+#    #+#             */
/*   Updated: 2022/11/24 01:46:20 by msosnova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
        Bureaucrat  Tom("Tom", 10);
        Bureaucrat  Bob("Bob", 1);
    
    try
    {
        Form    form_2("form_2", 20, 25);

        std::cout << Tom << std::endl;
        std::cout << form_2 << std::endl;
        form_2.beSigned(Tom);
        Tom.signForm(form_2);
        std::cout << form_2 << std::endl;
    }
    catch (std::exception const& e)
    {
        std::cerr << e.what() << std::endl;
    }
  
    try
    {
        std::cout << std::endl;
        Form    form_1("form_1", 2, 15);

        std::cout << Bob << std::endl;
        std::cout << form_1 << std::endl;
        form_1.beSigned(Bob);
        Bob.signForm(form_1);
        std::cout << form_1 << std::endl;
    }
    catch (std::exception const& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    try
    {
        std::cout << std::endl;
        Form    form_3("form_3", 1, 15);

        std::cout << form_3 << std::endl;
        form_3.beSigned(Tom);
        Tom.signForm(form_3);
        std::cout << form_3 << std::endl;
    }
    catch (std::exception const& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    try
    {
        std::cout << std::endl;
        Form    form_4("form_3", 154, 15);

        std::cout << form_4 << std::endl;
        form_4.beSigned(Tom);
        Tom.signForm(form_4);
        std::cout << form_4 << std::endl;
    }
    catch (std::exception const& e)
    {
        std::cerr << e.what() << std::endl;
    }

    try
    {
        std::cout << std::endl;
        Form    form_5("form_5", 150, 15);
        Bureaucrat  Bill("Bill", 150);

        std::cout << form_5 << std::endl;
        form_5.beSigned(Bill);
        Bill.signForm(form_5);
        std::cout << form_5 << std::endl;
        Bill.incrementGrade();
    }
    catch (std::exception const& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    return 0;
}
