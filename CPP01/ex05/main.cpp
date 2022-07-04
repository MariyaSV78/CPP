#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl harl;
	std::string level;
	
	if (argc != 2)
	{
   		std::cout << "Please entre one of the level: \033[1;33mDEBUG\033[1;37m, \033[1;33mINFO\033[1;37m, \033[1;33mWARNING\033[1;37m or \033[1;33mERROR\033[1;37m." << std::endl;
    	return (1);
    }
	else 
	{
		level = argv[1];
 		harl.complain(level);
        return (0);
	}
}