/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msosnova <msosnova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 00:26:37 by msosnova          #+#    #+#             */
/*   Updated: 2022/05/19 00:26:47 by msosnova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    _type = type;
}

Weapon::~Weapon() {}

const std::string&    Weapon::getType(void)
{
    return(_type);
}

void    Weapon::setType(const std::string newType)
{
    _type = newType;
}