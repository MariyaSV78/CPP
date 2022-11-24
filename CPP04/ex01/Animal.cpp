/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msosnova <msosnova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 01:32:24 by msosnova          #+#    #+#             */
/*   Updated: 2022/11/24 01:32:26 by msosnova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    _type = "Animal";
    std::cout << "Default constructor \"Animal class\" colled" << std::endl;
}
        
Animal::Animal(std::string type): _type(type)
{
    std::cout << "\"Animal\" constructor with name called" << std::endl;
}

Animal::Animal(Animal const& ClassCopy)
{
    std::cout << "Constructor copy in \"Animal class\" called" << std::endl;
    *this = ClassCopy;
}

Animal::~Animal()
{
    std::cout << "Destructor in \"Animal class\" called" << std::endl;
}

Animal& Animal::operator=(Animal const& rhs)
{
    std::cout << "Animal copy assignment operator called" << std::endl;
    if (&rhs == this)
        return *this;    
    this->_type = rhs._type; //(rhs.getType())
    return *this;
}

std::string Animal::getType() const
{
    return _type;
}

void    Animal::makeSound() const
{
    std::cout << "  " << std::endl; 
}
