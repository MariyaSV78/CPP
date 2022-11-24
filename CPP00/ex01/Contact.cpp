/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msosnova <msosnova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 01:13:29 by msosnova          #+#    #+#             */
/*   Updated: 2022/11/24 01:13:33 by msosnova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

static std::string fields_name[5] = {
	"First Name",
	"Last Name",
	"Nickname",
	"Phone",
	"Darkest Secret"
};

/*
enum Field {
	FirstName = 0,
	LastName,
	Nickname,
	Phone,
	Secret
};
*/


Contact::Contact()
{
}

Contact::~Contact()
{
}

bool	Contact::new_contact()
{
	for (int i = 0; i < 5; i++)
	{
		std::cout << fields_name[i] << "> ";
		std::getline(std::cin, _personInfo[i]);
		if (_personInfo[i].length() == 0)
		{
			std::cout << "Empty contact not added !" << std::endl;
			return (false);
		}
	}
	std::cout << "Contact added !" << std::endl;
	return (true);
}



void Contact::display_header(int index)
{
	std::cout << "|" << std::setw(10) << index;
	for (int i = 0; i < 3; i++)
	{
		std::cout << "|";
		if (_personInfo[i].length() > 10)
			std::cout << _personInfo[i].substr(0, 9) << ".";
		else
			std::cout << std::setw(10) << _personInfo[i];
	}
	std::cout << "|" << std::endl;
}

void Contact::display()
{
	//std::cout << "# Contact [" << index << "]" << std::endl;
	for (int i = 0; i < 5; i++)
	{
		std::cout << fields_name[i] << ": ";
		std::cout << _personInfo[i] << std::endl;
	}
}

std::string	Contact::get_personInfo(int i)
{
	return (_personInfo[i]);
}

void	Contact::copy(Contact cont)
{
	for (int i = 0; i < 5; i++)
		_personInfo[i] = cont.get_personInfo(i);
}
