/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msosnova <msosnova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 01:44:36 by msosnova          #+#    #+#             */
/*   Updated: 2022/11/24 01:44:40 by msosnova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>

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
