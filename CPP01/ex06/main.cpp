#include "Harl.hpp"

int main(int argc, char **argv)
{
	
    if (argc !=2)
	{
   		std::cout << "Please entre one of the option: \033[1;33mDEBUG\033[1;37m, \033[1;33mINFO\033[1;37m, \033[1;33mWARNING\033[1;37m or \033[1;33mERROR\033[1;37m." << std::endl;
    	return (1);
	}

    Harl harl;
	std::map <std::string, int> filter;
    filter["INFO"] = 1;
    filter["DEBUG"] = 2;
    filter["WARNING"] = 3;
    filter["ERROR"] = 4;
    switch (filter[argv[1]])
    {
        case 1:
        {
            harl.complain("INFO");
            harl.complain("DEBUG");
            harl.complain("WARNING");
            harl.complain("ERROR");
            break;
        }
        case 2:
        {
            harl.complain("DEBUG");
            harl.complain("WARNING");
            harl.complain("ERROR");
            break;
        }
        case 3:
        {
            harl.complain("WARNING");
            harl.complain("ERROR");
            break;
        }
         case 4:
        {
            harl.complain("ERROR");
            break;
        }
        default: 
        {
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break;
        }
    }
    return (0);
}