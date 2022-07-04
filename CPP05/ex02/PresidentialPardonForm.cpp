#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form("President", false, 25, 30), _target("")
{}

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form(target, false, 25, 30), _target(target)
{} 

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& ClassCopy): Form(ClassCopy), _target(ClassCopy._target)
{
    *this = ClassCopy;
}

PresidentialPardonForm::~PresidentialPardonForm(){};

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const& rhs)
{
    if(&rhs == this)
        return *this;
    _target = rhs._target;
    return *this;
}

void    PresidentialPardonForm::execute(Bureaucrat const& executor) const
{
    if (executor.getGrade() > _gradeToExec)
		throw GradeTooLowException();
	else if (_isSigne == false)
		throw FormNotSignedException();
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
