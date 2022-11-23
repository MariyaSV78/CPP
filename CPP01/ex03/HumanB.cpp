/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msosnova <msosnova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:22:31 by msosnova          #+#    #+#             */
/*   Updated: 2022/11/23 09:22:34 by msosnova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const char* name): _name(name)
{
    _weapon = NULL;
}

HumanB::~HumanB ()
{}

void    HumanB::setWeapon(Weapon& weapon)
{
    _weapon = &weapon;
}

void    HumanB::attack()
{
    if(_weapon)
        std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
    else
        std::cout << _name <<  " cannot attack without a weapon... " << std::endl;
}
