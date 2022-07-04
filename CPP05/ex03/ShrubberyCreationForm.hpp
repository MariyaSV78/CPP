#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <string>

# include "Form.hpp"

class	Bureaucrat;
class	Form;

class ShrubberyCreationForm: public Form
{
    private:
        std::string     _target;

    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(ShrubberyCreationForm const& ClassCopy);
        virtual ~ShrubberyCreationForm();

        ShrubberyCreationForm& operator=(ShrubberyCreationForm const& rhs);

        virtual void    execute(Bureaucrat const& executor) const;
};

#endif