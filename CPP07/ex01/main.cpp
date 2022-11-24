/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msosnova <msosnova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 02:05:58 by msosnova          #+#    #+#             */
/*   Updated: 2022/11/24 02:06:01 by msosnova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template<typename T>
void    print_tab(T const& t)
{
    std::cout <<  t << std::endl;
}



int     main()
{
    int     tab_int[5] = {1,2,3,4,5};

    iter(tab_int, 5, print_tab);


    std::string     tab_str[12] = {"janvier", "février", "mars", "avril", "mai", "juin", "juillet", "août", "septembre", "octobre", "novembre", "décembre"};

    iter(tab_str, 12, print_tab);


    float      tab_float[3] = {1.618, 2.718, 3.1415};

    iter(tab_float, 3, print_tab);
}
