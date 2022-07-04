/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msosnova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 19:44:51 by msosnova          #+#    #+#             */
/*   Updated: 2022/05/16 19:44:58 by msosnova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie* N_horde;

    N_horde = new Zombie[N];
    for (int i = 0; i < N; i++)
        N_horde[i].setName(name);
    return (N_horde); 
}   