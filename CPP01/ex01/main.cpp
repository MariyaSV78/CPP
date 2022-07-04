/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msosnova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 19:43:10 by msosnova          #+#    #+#             */
/*   Updated: 2022/05/16 19:43:12 by msosnova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Zombie.hpp"

int     main()
{
    Zombie* N_Zombie;
    int N;
    std::string name;

    std::cout << "Entre le nombre de Zombie"<< std::endl;
    std::cin >> N;

    std::cout << "Entre le nom de Zombie" << std::endl;
    std::cin >> name;
	
    N_Zombie = zombieHorde(N, name);
    for (int i = 0; i < N; i++)
        N_Zombie[i].announce();
    delete[] N_Zombie;
    return (0);
}
