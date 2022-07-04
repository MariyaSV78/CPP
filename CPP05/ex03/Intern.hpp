#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

# include <stdexcept>

class	Bureaucrat;
class	Form;
class	PresidentialPardonForm;
class	RobotomyRequestForm;
class	ShrubberyCreationForm;

class Intern 
{
    public:
        Intern ();
        Intern(Intern const& ClassCopy);
        ~Intern ();

        Intern& operator=(Intern const& rhs);

        Form* makeForm(std::string name, std::string target);

    private:
       // Form*                   _searchForm(std::string n, std::string t);
        Form*                   _makePresidentialPardonForm(std::string target);
        Form*                   _makeRobotomyRequestForm(std::string target);
        Form*                   _makeShrubberyCreationForm(std::string target);

        std::string     _formsName[3];
        //static  std::string	    _convert(std::string name);
        typedef Form*	(Intern::*ptrTab)(std::string); //
		ptrTab	        _memberTab[3];

        
        class FormNotFoundException : public std::exception
		{
			public:
				FormNotFoundException(void);
				virtual ~FormNotFoundException(void) throw();
				virtual const char    *what() const throw();
		};
 
};

#endif