#ifndef FRAGTRAG_HPP
# define FRAGTRAG_HPP

# include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
      public:
        FragTrap();
        FragTrap(std::string);
        FragTrap(FragTrap const& classCopy);
        ~FragTrap();

        FragTrap&       operator=(FragTrap const& rhs);

        void highFivesGuys();
};

#endif