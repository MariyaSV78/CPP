/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msosnova <msosnova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:47:43 by msosnova          #+#    #+#             */
/*   Updated: 2022/11/23 09:47:45 by msosnova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name ("Tom"), _pointDeVie (10), _pointEnergi (10),  _attackDamage (0)
{ 
    std::cout << "ClapTrap Default constructor colled" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name (name), _pointDeVie (10), _pointEnergi (10),  _attackDamage (0)
{ 
    std::cout << "ClapTrap Overload constructor with name called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const& Copy)
{
    std::cout << "ClapTrap Constructor by copy called" << std::endl;
    *this = Copy;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor called" << std::endl;   
}



ClapTrap&   ClapTrap::operator=(ClapTrap const& rhs)
{
    this->_name = rhs.getName();
    this->_pointDeVie = rhs.getPointDeVie();
    this->_pointEnergi = rhs.getEnergi();
    this->_attackDamage = rhs.getAttackDamage();
    std::cout << "ClapTrap copy assignment operator called" << std::endl;

	return *this;
}



std::string ClapTrap::getName() const
{
    std::cout << "ClapTrap getName member function called" << std::endl;
    return _name;
}

int     ClapTrap::getPointDeVie() const
{
    std::cout << "ClapTrap getPointDeVie member function called" << std::endl;
	return _pointDeVie;
}

int     ClapTrap::getEnergi() const
{
    std::cout << "ClapTrap getEnergi member function called" << std::endl;
	return _pointEnergi;
}

int     ClapTrap::getAttackDamage() const
{
    std::cout << "ClapTrap getAttackDamage member function called" << std::endl;
    return _attackDamage;
}

 
 
 
void  ClapTrap::attack(const std::string& target)
 {
    if (_pointDeVie > 0 && _pointEnergi > 0)
        std::cout << "ClapTrap " << _name << " attacks " << target << " causing " <<_attackDamage<< " points of damage! " << std::endl;
 }


void   ClapTrap::takeDamage(unsigned int amount)
 {
     if (_pointDeVie > 0 && _pointEnergi > 0)
     {
        _pointEnergi  -= amount; 
        _pointDeVie -= _attackDamage;  
        std::cout << "ClapTrap " << _name << " take Damage " << amount << " points! " << std::endl; 
            if (_pointDeVie <= 0 || _pointEnergi <= 0)
                std::cout << "For " << _name << " game over" << std::endl;
     }
 }


 void   ClapTrap::beRepaired(unsigned int amount)
 {
    if (_pointDeVie > 0 && _pointEnergi > 0)
    {
        _pointDeVie += amount ;
        _pointEnergi --;
        std::cout << "ClapTrap " << _name << " est se répare et regagne " << amount <<  " points " << std::endl;
    }
 }
