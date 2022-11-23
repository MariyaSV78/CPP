/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msosnova <msosnova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:46:49 by msosnova          #+#    #+#             */
/*   Updated: 2022/11/23 09:46:52 by msosnova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int     main()
{
    ClapTrap    player_1("Tom");
    ClapTrap    player_2("Jerry");

    player_1.attack("Jerry");
    player_2.takeDamage(player_1.getAttackDamage());
    player_2.attack("Tom");
    player_1.takeDamage(player_2.getAttackDamage());
    player_1.beRepaired(1);
    player_2.beRepaired(1);

    return 0;
}
