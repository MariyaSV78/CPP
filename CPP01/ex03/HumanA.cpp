/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msosnova <msosnova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:21:41 by msosnova          #+#    #+#             */
/*   Updated: 2022/11/23 09:21:52 by msosnova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const char* name, Weapon& weaponA): _nameA(name), _weaponA(&weaponA)
{
    
}

HumanA::~HumanA (){}

void    HumanA::attack()
{
    std::cout << _nameA << " attacks with their " << _weaponA->getType() << std::endl;
}
