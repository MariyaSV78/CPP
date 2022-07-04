/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msosnova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 17:19:53 by msosnova          #+#    #+#             */
/*   Updated: 2022/04/27 17:20:05 by msosnova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PhoneBook.hpp"

int main(void)
{
    PhoneBook       phonebook;
    std::string     command;

    std::cout << "PhoneBook" << std::endl;
    std::cout << "Enter your command: ADD, SEARCH, EXIT >" << std::endl;
    while (1)
    {
        std::cout << ">";
        std::getline(std::cin, command);
        if (command == "ADD")
            phonebook.add_contact();
        else if (command == "SEARCH")
            phonebook.search_contact();
        else if (command == "EXIT")
        {
            std::cout << "Bye!" << std::endl;
            break ;
        }
        else
           std::cout << "Command is invalid" << std::endl;
    }
    return (0);
}