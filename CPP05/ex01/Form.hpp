#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        const std::string        _nameForm;
        bool                     _isSigne;
        const int                _gradeToSign;
        const int                _gradeToExec;

    public:
        Form();
        Form(std::string name, int gradeToSign, int gradeToExec);
        Form(Form const& ClassCopy);
        ~Form();

        Form& operator=(Form const& rhs);
 

        bool            getSigned() const;
        std::string     getNameForm() const;
        int             getGradeToSign() const;
        int             getGradeToExec() const;

        void             beSigned(Bureaucrat& bureaucrat);
        std::string             ft_signe() const;



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

    std::ostream& operator<<(std::ostream& o, Form const& form);
    

#endif