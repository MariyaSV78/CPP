/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msosnova <msosnova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:36:58 by msosnova          #+#    #+#             */
/*   Updated: 2022/11/23 09:37:01 by msosnova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Copyfile.hpp"

int main(int argc, char **argv)
{
    Replace         instance;
        
    if (instance.ft_check_error(argc, argv))
        return(1);
    if (instance.ft_replace())
        return (1);
    if (!instance.getN())
        std::cout << "There no replace" << std::endl;
    else
        ft_test(argv, instance.getN());
    return (0);
}
