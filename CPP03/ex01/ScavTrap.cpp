/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msosnova <msosnova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:48:24 by msosnova          #+#    #+#             */
/*   Updated: 2022/11/23 09:48:27 by msosnova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{ 
    std::cout << "ScavTrap Default constructor colled" << std::endl;
     this->_name = "Tom";
     this->_pointDeVie = 100;
     this->_pointEnergi = 50;
     this->_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name)
{ 
    std::cout << "ScavTrap Overload constructor with name called" << std::endl;
     this->_name = name;
     this->_pointDeVie = 100;
     this->_pointEnergi = 50;
     this->_attackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap const& Copy):ClapTrap()
{
    std::cout << "ScavTrap Constructor by copy called" << std::endl;
    *this = Copy;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor called" << std::endl;   
}



ScavTrap&   ScavTrap::operator=(ScavTrap const& rhs)
{
    if (this == &rhs)
		return *this;
    this->_name = rhs.getName();
    this->_pointDeVie = rhs.getPointDeVie();
    this->_pointEnergi = rhs.getEnergi();
    this->_attackDamage = rhs.getAttackDamage();
    std::cout << "ScavTrap copy assignment operator called" << std::endl;

	return *this;
}

 
void  ScavTrap::guardGate( )
 {
    std::cout << "ScavTrap est entré en mode Gate keeper" << std::endl;
 }
