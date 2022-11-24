/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msosnova <msosnova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 01:50:37 by msosnova          #+#    #+#             */
/*   Updated: 2022/11/24 01:50:40 by msosnova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>
# include <fstream>

# include "Form.hpp"

class Form;

class Bureaucrat
{
    private:
        const std::string     _name;
        int                   _grade;
    
    public:
        Bureaucrat();
        Bureaucrat(std::string name, int grade);
        Bureaucrat(Bureaucrat const& ClassCopy);
        ~Bureaucrat();

        Bureaucrat& operator=(Bureaucrat const& rhs);

        std::string     getName() const;
        int             getGrade() const;

        void            incrementGrade();
        void            decrementGrade();

        void            signForm(Form const& form);
        void            executeForm(Form const & form);

        class   GradeTooHighException: public std::exception
        {
        	public:
                GradeTooHighException();
                virtual ~GradeTooHighException() throw();
			    virtual const char *what() const throw();
        };

        class   GradeTooLowException: public std::exception
        {
        	public:
                GradeTooLowException();
                virtual ~GradeTooLowException() throw();
			    virtual const char *what() const throw();
        };
};

std::ostream&	operator<<(std::ostream& o, Bureaucrat const& bureaucrat);

#endif
