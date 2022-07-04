#include "Copyfile.hpp"

int main(int argc, char **argv)
{
    Replace         instance;
        
    if (instance.ft_check_error(argc, argv))
        return(1);
    if (instance.ft_replace())
        return (1);
    if (!instance.getN())
        std::cout << "There no replace" << std::endl;
    else
        ft_test(argv, instance.getN());
    return (0);
}