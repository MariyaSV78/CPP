/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msosnova <msosnova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 01:30:57 by msosnova          #+#    #+#             */
/*   Updated: 2022/11/24 01:31:02 by msosnova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    _type = "WrongAnimal";
    std::cout << "Default constructor \"WrongAnimal class\" colled" << std::endl;
}
        
WrongAnimal::WrongAnimal(std::string type): _type(type)
{
    std::cout << "\"WrongAnimal\" constructor with name called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const& ClassCopy)
{
    std::cout << "Constructor copy in \"WrongAnimal class\" called" << std::endl;
    *this = ClassCopy;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Destructor in \"WrongAnimal class\" called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const& rhs)
{
    std::cout << "WrongAnimal copy assignment operator called" << std::endl;
    this->_type = rhs._type; //(rhs.getType())
    return *this;
}

std::string WrongAnimal::getType() const
{
    return _type;
}

void    WrongAnimal::makeSound() const
{
    std::cout << _type << " fait \"Quaa - Quaa\"" << std::endl;
}
