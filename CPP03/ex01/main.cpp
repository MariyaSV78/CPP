/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msosnova <msosnova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:48:37 by msosnova          #+#    #+#             */
/*   Updated: 2022/11/23 09:48:39 by msosnova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int     main()
{
    ClapTrap    player_1("Tom");
    ScavTrap    player_2("Jerry");

    player_1.attack("Jerry");
    player_2.takeDamage(player_1.getAttackDamage());
    player_2.attack("Tom");
    player_1.takeDamage(player_2.getAttackDamage());
    player_1.beRepaired(1);
    player_2.beRepaired(1);

    player_2.guardGate();

    return 0;
}
