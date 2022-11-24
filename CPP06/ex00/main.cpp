/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msosnova <msosnova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 01:58:18 by msosnova          #+#    #+#             */
/*   Updated: 2022/11/24 01:58:27 by msosnova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Only one argument is needed." << std::endl;
        return(1);
    }
    try
    {
        Convert     convert(argv[1]);
    
        try
        {
            convert.toChar();
        }
        catch (std::exception& e)
        {
            std::cout << e.what() << std::endl;
        }
        try
        {
            convert.toInt();
        }
        catch (std::exception& e)
        {
            std::cout << e.what() << std::endl;
        }
        try
        {
            convert.toDouble();
            convert.toFloat();
        }
        catch (std::exception& e)
        {
            std::cout << e.what() << std::endl;
        }
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    
    return(0);
}
