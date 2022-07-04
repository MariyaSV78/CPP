#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
    public:
        HumanA(const char* name, Weapon& weaponA);
        ~HumanA();
    
        void     attack();
    
    private:
        std::string     _nameA;
        Weapon*         _weaponA;
};

#endif
