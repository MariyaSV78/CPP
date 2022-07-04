#include "HumanA.hpp"

HumanA::HumanA(const char* name, Weapon& weaponA): _nameA(name), _weaponA(&weaponA)
{
    
}

HumanA::~HumanA (){}

void    HumanA::attack()
{
    std::cout << _nameA << " attacks with their " << _weaponA->getType() << std::endl;
}