#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
     public:
        ScavTrap();
        ScavTrap(std::string);
        ScavTrap(ScavTrap const& classCopy);
        ~ScavTrap();

        ScavTrap&       operator=(ScavTrap const& rhs);

        void guardGate();
};

#endif