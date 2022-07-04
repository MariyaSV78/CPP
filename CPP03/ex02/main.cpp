//#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int     main()
{
    ClapTrap    player_1("Tom");
    ScavTrap    player_2("Jerry");
    FragTrap    player_3("Dog");


    player_1.attack("Jerry");
    player_2.takeDamage(player_1.getAttackDamage());
    player_3.attack("Tom");
    player_2.attack("Tom");
    player_1.takeDamage(player_2.getAttackDamage());
    player_1.beRepaired(1);
    player_2.beRepaired(1);
    player_2.guardGate();
    
 
    player_3.beRepaired(1);
    player_3.highFivesGuys();

    return 0;
}