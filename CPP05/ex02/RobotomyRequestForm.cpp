/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msosnova <msosnova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 01:48:49 by msosnova          #+#    #+#             */
/*   Updated: 2022/11/24 01:48:53 by msosnova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): Form("Robot", false, 72, 45), _target("")
{} 

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form(target, false, 72, 45), _target(target)
{} 

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& ClassCopy): Form(ClassCopy), _target(ClassCopy._target)
{
    *this = ClassCopy;
}

RobotomyRequestForm::~RobotomyRequestForm(){};

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const& rhs)
{
    if(&rhs == this)
        return *this;
    _target = rhs._target;
    return *this;
}

void    RobotomyRequestForm::execute(Bureaucrat const& executor) const
{
    if (executor.getGrade() > _gradeToExec)
		throw GradeTooLowException();
	else if (_isSigne == false)
		throw FormNotSignedException();

    std::cout << "Vvvvvv... Vvvvv... VVVVBRRRRRRR!!!" << std::endl;
	int robotisation = time(NULL);
	if (robotisation % 2)
		std::cout << _target << " has been robotized." << std::endl;
	else
		std::cout << "The operation has failed." << std::endl;
}
