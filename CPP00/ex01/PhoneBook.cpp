/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msosnova <msosnova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 01:14:04 by msosnova          #+#    #+#             */
/*   Updated: 2022/11/24 01:14:07 by msosnova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <climits>

PhoneBook::PhoneBook()
{
    _N_contact = 0;
}

void    PhoneBook::add_contact()
{
    if (_N_contact == MAX_CONTACTS)
    {
        if (_tmp_contact.new_contact())
            shift_contacts();
    }
    else if (_contacts[_N_contact].new_contact())
        _N_contact++;
}

void    PhoneBook::shift_contacts()
{
    for (int i = 0; i < MAX_CONTACTS - 1; i++)
        _contacts[i].copy(_contacts[i + 1]);
    _contacts[MAX_CONTACTS - 1].copy(_tmp_contact);
}

void    PhoneBook::display_header()
{
    std::cout << "|-------------------------------------------|" << std::endl;
    std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
    std::cout << "|-------------------------------------------|" << std::endl;
    for (int i = 0; i < _N_contact; i++)
        _contacts[i].display_header(i + 1);
    std::cout << "|-------------------------------------------|" << std::endl;
}

void    PhoneBook::search_contact()
{
    int     i;
    
    if (_N_contact == 0)
        std::cout << "Phonebook is empty. Add a contact!" << std::endl;
    else
    {
        display_header();
        std::cout << " Enter Index to display Contact's Information >" << std::endl;
        std::cin >> i;
        std::cin.clear();
        std::cin.ignore(INT_MAX, '\n');
        while (i <= 0 || i > _N_contact)
        {
            std::cout << "Invalid Index" << std::endl;
            std::cout << " Enter Index to display Contact's Information >" << std::endl;
            std::cin >> i;
            std::cin.clear();
            std::cin.ignore(INT_MAX, '\n');          
        }
        _contacts[i - 1].display();
    }
}

