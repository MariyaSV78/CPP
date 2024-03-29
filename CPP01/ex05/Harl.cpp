/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msosnova <msosnova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:37:32 by msosnova          #+#    #+#             */
/*   Updated: 2022/11/23 09:37:35 by msosnova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() 
{
	_harlMap["INFO"] = &Harl::info;
    _harlMap["DEBUG"] = &Harl::debug;
    _harlMap["WARNING"] = &Harl::warning;
   	_harlMap["ERROR"] = &Harl::error;
}
	
Harl::~Harl(){};

void    Harl::debug(void)
{
	std::cout <<  "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !" << std::endl;
}

void    Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void    Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void    Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level )
{
	FnPtr func = _harlMap[level];
	if(func)
		(this->*func)();
	else
	   	std::cout << "Please entre one of the level: \033[1;33mDEBUG\033[1;37m, \033[1;33mINFO\033[1;37m, \033[1;33mWARNING\033[1;37m or \033[1;33mERROR\033[1;37m." << std::endl;
}
