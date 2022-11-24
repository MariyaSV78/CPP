/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msosnova <msosnova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 01:30:18 by msosnova          #+#    #+#             */
/*   Updated: 2022/11/24 01:30:21 by msosnova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    _type = "Dog";
    std::cout << "Default constructor \"Dog class\" colled" << std::endl;
}
        
Dog::Dog(std::string type)
{
    _type = type;
    std::cout << "\"Dog\" constructor with name called" << std::endl;
}

Dog::Dog(Dog const& ClassCopy):Animal()
{
    std::cout << "Constructor copy in \"Dog class\" called" << std::endl;
    *this = ClassCopy;
}

Dog::~Dog()
{
    std::cout << "Destructor in \"Dog class\" called" << std::endl;
}

Dog& Dog::operator=(Dog const& rhs)
{
    std::cout << "Dog copy assignment operator called" << std::endl;
    if (&rhs == this)
        return *this;
    this->_type = rhs._type; //(rhs.getType())
    return *this;
}

void    Dog::makeSound() const
{
    std::cout << _type << " fait \"Wouaaf - Wouaaf\"" << std::endl;
}
