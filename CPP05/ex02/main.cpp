#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
        Bureaucrat  Tom("Tom", 10);
        Bureaucrat  Bob("Bob", 1);
    
    try
    {
        ShrubberyCreationForm tree("Tree");
        
        std::cout << Tom << std::endl;
        std::cout << tree << std::endl;
        tree.beSigned(Tom);
        Tom.signForm(tree);
        Tom.executeForm(tree);
        tree.execute(Tom);
    }
    catch (std::exception const& e)
    {
        std::cerr << e.what() << std::endl;
    }
  
    try
    {
        std::cout << std::endl;
        RobotomyRequestForm robot("robot");
       
        std::cout << Bob << std::endl;
        std::cout << robot << std::endl;
        robot.beSigned(Bob);
        Bob.executeForm(robot);
        std::cout << robot << std::endl;
    }
    catch (std::exception const& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    try
    {
        std::cout << std::endl;
        PresidentialPardonForm  pardon("pardon");

        std::cout << pardon << std::endl;
        Tom.executeForm(pardon);
        pardon.execute(Tom);
    }
    catch (std::exception const& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}