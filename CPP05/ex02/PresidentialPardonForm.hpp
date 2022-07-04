#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <string>

# include "Form.hpp"

class	Bureaucrat;
class	Form;

class PresidentialPardonForm: public Form
{
    private:
        std::string     _target;

    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(PresidentialPardonForm const& ClassCopy);
        virtual ~PresidentialPardonForm();

        PresidentialPardonForm& operator=(PresidentialPardonForm const& rhs);

        virtual void    execute(Bureaucrat const& executor) const;
};

#endif