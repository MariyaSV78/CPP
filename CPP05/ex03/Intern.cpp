/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msosnova <msosnova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 01:52:22 by msosnova          #+#    #+#             */
/*   Updated: 2022/11/24 01:52:24 by msosnova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"



Intern::Intern(){
    _formsName[0] = "shrubbery creation";
	_formsName[1] = "robotomy request";
	_formsName[2] = "presidential pardon";
	_memberTab[0] = &Intern::_makeShrubberyCreationForm;
	_memberTab[1] = &Intern::_makeRobotomyRequestForm;
	_memberTab[2] = &Intern::_makePresidentialPardonForm;
	std::cout << "Intern is hired." << std::endl;
};

Intern::Intern(Intern const& ClassCopy)
{
    *this = ClassCopy;
}

Intern::~Intern(){};

Intern& Intern::operator=(Intern const& rhs)
{
    /*for (int i = 0; i < 3; i++)
        _memberTab[i] = rhs._memberTab[i];*/
    static_cast <void> (rhs);
    return (*this);
}

Form* Intern::makeForm(std::string name, std::string target)
{
    for (int i = 0; i < 3; i++)
    {
        if (_formsName[i] == name)
        {
            std::cout << "Intern creates " << name << std::endl;
            return (this->*_memberTab[i])(target);
        } 
    }
    throw FormNotFoundException();
    return NULL;
}


Form*   Intern::_makePresidentialPardonForm(std::string target)
{
    return (new PresidentialPardonForm(target));
}

Form*   Intern::_makeRobotomyRequestForm(std::string target)
{
    return (new RobotomyRequestForm(target));
}

Form*   Intern::_makeShrubberyCreationForm(std::string target)
{
    return (new ShrubberyCreationForm(target));
}


Intern::FormNotFoundException::FormNotFoundException(void){};

Intern::FormNotFoundException::~FormNotFoundException(void) throw(){};

const char *		Intern::FormNotFoundException::what() const throw()
{
	return("<INTERN> Form not found !");
}
