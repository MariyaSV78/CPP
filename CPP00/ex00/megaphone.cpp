/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msosnova <msosnova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 23:22:23 by msosnova          #+#    #+#             */
/*   Updated: 2022/04/26 00:58:03 by msosnova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	
	if (argc == 1)
	{
		std::cout << "*LOUD AND UNBEARABLE FEEDBACK NOISE*";
	}
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{	
			std::cout << (char)std::toupper(argv[i][j]);
			j++;
		}
		if (i < argc - 1)
			std::cout << " ";
		i++;
	}
	std::cout << std::endl;
	return(0);
}
