/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msosnova <msosnova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 01:48:03 by msosnova          #+#    #+#             */
/*   Updated: 2022/11/24 01:48:07 by msosnova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    protected:
        const std::string        _nameForm;
        bool                     _isSigne;
        const int                _gradeToSign;
        const int                _gradeToExec;
    public:
        Form();
        Form(std::string name, bool isSigne, int gradeToSign, int gradeToExec);
        Form(Form const& ClassCopy);
        virtual~Form();

        Form& operator=(Form const& rhs);
 

        bool            getSigned() const;
        std::string     getNameForm() const;
        int             getGradeToSign() const;
        int             getGradeToExec() const;

        void            beSigned(Bureaucrat& bureaucrat);
        std::string     ft_signe() const;

        virtual void    execute(Bureaucrat const& executor) const = 0;



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

        class FormNotSignedException : public std::exception
		{
			public:
				FormNotSignedException(void);
				virtual ~FormNotSignedException(void) throw();
				virtual const char    *what() const throw();
		};

};

    std::ostream& operator<<(std::ostream& o, Form const& form);
    

#endif
