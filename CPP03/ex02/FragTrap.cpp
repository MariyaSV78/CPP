# include "FragTrap.hpp"

FragTrap::FragTrap()
{ 
    std::cout << "FragTrap Default constructor colled" << std::endl;
    _name = "Dog";
    _pointDeVie = 100;
    _pointEnergi = 100;
    _attackDamage = 30;
}

FragTrap::FragTrap(std::string name)
{ 
    std::cout << "FragTrap Overload constructor with name called" << std::endl;
    _name = name;
   _pointDeVie = 100;
   _pointEnergi = 100;
   _attackDamage = 30;
}

FragTrap::FragTrap(FragTrap const& Copy)
{
    std::cout << "FragTrap Constructor by copy called" << std::endl;
    *this = Copy;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor called" << std::endl;   
}



FragTrap&   FragTrap::operator=(FragTrap const& rhs)
{
    this->_name = rhs.getName();
    this->_pointDeVie = rhs.getPointDeVie();
    this->_pointEnergi = rhs.getEnergi();
    this->_attackDamage = rhs.getAttackDamage();
    std::cout << "FragTrap copy assignment operator called" << std::endl;

	return *this;
}

 
void  FragTrap::highFivesGuys( )
 {
    std::cout  << "FragTrag " << _name << " made a high fives" << std::endl;
 }
