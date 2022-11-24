/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msosnova <msosnova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 01:45:20 by msosnova          #+#    #+#             */
/*   Updated: 2022/11/24 01:45:22 by msosnova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(): _name("Bureacrat"), _grade(1)
{}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name), _grade(grade)
{
    if (grade > 150)
        throw Bureaucrat::GradeTooHighException();
    else if (grade < 1)
        throw Bureaucrat::GradeTooLowException();   
}

Bureaucrat::Bureaucrat(Bureaucrat const& ClassCopy)
{
    *this = ClassCopy;
}

Bureaucrat::~Bureaucrat(){};

Bureaucrat& Bureaucrat::operator=(Bureaucrat const& rhs)
{
    if (&rhs == this)
        return *this;
    _grade = rhs._grade;
    return *this;
}

std::string     Bureaucrat::getName() const
{
    return _name;
}

int             Bureaucrat::getGrade() const
{
    return _grade;
}

void            Bureaucrat::incrementGrade()
{
    if ((_grade + 1 ) > 150)
        throw Bureaucrat::GradeTooHighException();
    _grade +=1;
}

void            Bureaucrat::decrementGrade()
{
    if ((_grade - 1 ) < 1)
        throw Bureaucrat::GradeTooLowException();
    _grade -=1;
}

void    Bureaucrat::signForm(Form& form)
{
    if(form.getSigned() || (form.getGradeToSign() >= _grade))
       std::cout << _name <<  " signed " << form.getNameForm() << std::endl;
    else
    {
       std::cout << _name <<  " couldn’t sign " << form.getNameForm() << " because ";
       throw GradeTooLowException();
    }
}


std::ostream&       operator <<(std::ostream& o, Bureaucrat const& bureaucrat)
{
    o << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
    return o;
}






Bureaucrat::GradeTooHighException::GradeTooHighException()
{
    return;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw()
{
    return;
}

const char*     Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("<BUREAUCRAT> Grade too high!");
}



Bureaucrat::GradeTooLowException::GradeTooLowException()
{
    return;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw()
{
    return;
}

const char*     Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("<BUREAUCRAT> Grade too low!");
}
