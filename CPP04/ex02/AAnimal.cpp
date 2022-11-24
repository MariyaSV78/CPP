/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msosnova <msosnova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 01:34:23 by msosnova          #+#    #+#             */
/*   Updated: 2022/11/24 01:34:30 by msosnova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
    _type = "AAnimal";
    std::cout << "Default constructor \"AAnimal class\" colled" << std::endl;
}
        
AAnimal::AAnimal(std::string type): _type(type)
{
    std::cout << "\"AAnimal\" constructor with name called" << std::endl;
}

AAnimal::AAnimal(AAnimal const& ClassCopy)
{
    std::cout << "Constructor copy in \"AAnimal class\" called" << std::endl;
    *this = ClassCopy;
}

AAnimal::~AAnimal()
{
    std::cout << "Destructor in \"AAnimal class\" called" << std::endl;
}

AAnimal& AAnimal::operator=(AAnimal const& rhs)
{
    std::cout << "AAnimal copy assignment operator called" << std::endl;
    if (&rhs == this)
        return *this;    
    this->_type = rhs._type; //(rhs.getType())
    return *this;
}

std::string AAnimal::getType() const
{
    return _type;
}
