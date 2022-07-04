#include "Form.hpp"

Form::Form(): _nameForm("form_1"), _isSigne(false), _gradeToSign(1), _gradeToExec(1)
{}   

Form::Form(std::string name, int gradeToSign, int gradeToExec): _nameForm(name), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec)
{
    _isSigne = false;
    if (gradeToSign > 150 || gradeToExec > 150)
        throw GradeTooHighException();
    else if (gradeToSign < 1 || gradeToExec < 1)
        throw GradeTooLowException();
    else
        return;
}

Form::~Form(){}

Form::Form(Form const& ClassCopy): _nameForm(ClassCopy._nameForm), _gradeToSign(ClassCopy._gradeToSign), _gradeToExec(ClassCopy._gradeToExec)
{
    *this = ClassCopy;
}

Form& Form::operator=(Form const& rhs)
{
    if(&rhs == this)
        return *this;
    _isSigne = rhs._isSigne;
    return *this;
}

bool    Form::getSigned() const
{
    return _isSigne;    
}

std::string     Form::getNameForm() const
{
    return _nameForm;
}

int     Form::getGradeToSign() const
{
    return _gradeToSign;
}

int     Form::getGradeToExec() const
{
    return _gradeToExec;
}

void    Form::beSigned(Bureaucrat& bureaucrat)
{
    if (bureaucrat.getGrade() > _gradeToSign)
        throw GradeTooLowException();
    else
        _isSigne = true;
}

std::string   Form::ft_signe() const
{
    if (_isSigne)
        return " signe: ";
    else
        return "pas signe: ";
}

std::ostream&       operator <<(std::ostream& o, Form const& form)
{
    o << form.getNameForm()  << " - " << form.ft_signe() << " grade pour le signe - " \
    << form.getGradeToSign() << "; grade pour l'exécuter - " 
    << form.getGradeToExec();
    return o;
}





Form::GradeTooHighException::GradeTooHighException() 
{
    return;
}

Form::GradeTooHighException::~GradeTooHighException() throw()
{
    return;
}

const char* Form::GradeTooHighException::what() const throw()
{
    return ("<FORM> Grade too high! ");
}


Form::GradeTooLowException::GradeTooLowException()
{
    return;
}

Form::GradeTooLowException::~GradeTooLowException() throw()
{
    return ;
}

const char* Form::GradeTooLowException::what() const throw()
{
    return ("<FORM> Grade too low!");
}





