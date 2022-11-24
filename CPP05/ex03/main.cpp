/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msosnova <msosnova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 01:53:11 by msosnova          #+#    #+#             */
/*   Updated: 2022/11/24 01:53:14 by msosnova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
        Bureaucrat  Tom("Tom", 10);
        Bureaucrat  Bob("Bob", 1);

        Intern      intern;


        Form* scf = NULL;
    try
    {
        std::cout << Tom << std::endl;
        scf = intern.makeForm("shrubbery creation", "scf_1");
        std::cout << *scf << std::endl;
        Tom.signForm(*scf);
        scf->beSigned(Tom);
        Tom.executeForm(*scf);
        scf->execute(Tom);
        std::cout << *scf << std::endl;
        delete scf;
    }
    catch (std::exception const& e)
    {
        delete scf;
        std::cerr << e.what() << std::endl;
    }
  
    Form* rrf = NULL;
    try
    {
        std::cout << std::endl;
        std::cout << Bob << std::endl;
        rrf = intern.makeForm("robotomy request", "rrf_1");
        std::cout << *rrf << std::endl;
        Bob.signForm(*rrf);
        rrf->beSigned(Bob);
        Bob.executeForm(*rrf);
        std::cout << *rrf << std::endl;
        delete rrf;
    }
    catch (std::exception const& e)
    {
        delete rrf;
        std::cerr << e.what() << std::endl;
    }
    

    Form* null = NULL;

    try
    {
        std::cout << std::endl;
        std::cout << Bob << std::endl;
        rrf = intern.makeForm("pardon", "null_1");
        std::cout << *null << std::endl;
        Tom.executeForm(*null);
        std::cout << *null << std::endl;
        Tom.executeForm(*null);
        std::cout << *null << std::endl;
        delete null;
    }
    catch (std::exception const& e)
    {
        delete null;
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
