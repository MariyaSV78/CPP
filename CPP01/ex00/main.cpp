/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msosnova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 17:03:21 by msosnova          #+#    #+#             */
/*   Updated: 2022/05/16 17:03:24 by msosnova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main ()
{
    Zombie* heap = newZombie(std::string("heap"));
    heap->announce();
    randomChump (std::string("stack"));
    delete heap;

    return (0);
}
