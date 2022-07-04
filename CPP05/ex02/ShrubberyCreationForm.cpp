#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): Form("Arbre", false, 72, 45), _target("") {}; 

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form(target, false, 72, 45), _target(target)
{} 

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& ClassCopy): Form(ClassCopy), _target(ClassCopy._target)
{
    *this = ClassCopy;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){};

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const& rhs)
{
    if(&rhs == this)
        return *this;
    _target = rhs._target;
    return *this;
}

void    ShrubberyCreationForm::execute(Bureaucrat const& executor) const
{
    if (executor.getGrade() > _gradeToExec)
		throw GradeTooLowException();
	else if (_isSigne == false)
		throw FormNotSignedException();
    	
	std::ofstream outfile((_target + "_shrubbery").c_str());
	outfile.exceptions(std::ofstream::badbit | std::ofstream::failbit);
	outfile << "	                              " << std::endl;
	outfile << "                                  " << std::endl;
	outfile << "             {{}}       {{}}      " << std::endl;
	outfile << "           //\\}\\}   {//{//\\    " << std::endl;
	outfile << "         {/(_)/}{\\} {//}{/(_)}/} " << std::endl;
	outfile << "        {/{/{/{\\{//()\\}//}/}/}/}" << std::endl;
	outfile << "       {/{\\{\\{\\(/}{\\{\\/}/}{\\} " << std::endl;
	outfile << "      {\\{/{\\{/(_)\\//}{/{/{/\\}\\} " << std::endl;
	outfile << "     {/{/{\\{\\(/}{/{})/}{\\(_)/}/}/}" << std::endl;
	outfile << "     {\\{\\/}(_)/{//{}\\/}/}(_){\\}/}" << std::endl;
	outfile << "     {/{\\{\\/}{\\/{{}}\\}\\/}/}{\\()" << std::endl;
	outfile << "      {/{\\{\\/}{/){\\}\\{\\/}/}{\\} " << std::endl;
	outfile << "       {/{\\{\\/}(_){}\\}\\}\\/}//} " << std::endl;
	outfile << "        {/({/{\\{//{\\}\\}(_)}/}/}  " << std::endl;
	outfile << "          (_){/{\\//}{\\//}/}(_)    " << std::endl;
	outfile << "            {/{/{\\/}{\\/}/}/}      " << std::endl;
	outfile << "             {\\/}//}{\\{\\/}       " << std::endl;
	outfile << "               {\\//}{\\/}          " << std::endl;
	outfile << "                -.'YYYY'.-          " << std::endl;
	outfile << "          __...--- MMMM --...__     " << std::endl;
	outfile << "   _...--\"   .-' |MMMMM '-.  '/ _  " << std::endl;
	outfile << " -\"    ' .  . '  |MMMMM|         /- " << std::endl;
	outfile << " .  '-  '    .--' YMMMMMY    .  '  . " << std::endl;
	outfile << "          ' ..    YMMMMMM            " << std::endl;
	outfile << "  .  '  .       _.YMMMMMM|-._  .  '  " << std::endl;
	outfile << "              .'  YMMMMMMY  '.       " << std::endl;
	outfile << "  ..-'   ' .  '.  moooooom  .'  '   ." << std::endl;
	outfile << "   .-' '        '-.______ -'     '   " << std::endl;
	outfile << "        .      ~,  ~   .. ,~         " << std::endl;
}