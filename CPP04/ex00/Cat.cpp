/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msosnova <msosnova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 01:29:33 by msosnova          #+#    #+#             */
/*   Updated: 2022/11/24 01:29:36 by msosnova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    _type = "Cat";
    std::cout << "Default constructor \"Cat class\" colled" << std::endl;
}
        
Cat::Cat(std::string type) 
{
    this->_type = type;
    std::cout << "\"Cat\" constructor with name called" << std::endl;
}

Cat::Cat(Cat const& ClassCopy):Animal()
{
    std::cout << "Constructor copy in \"Cat class\" called" << std::endl;
    *this = ClassCopy;
}

Cat::~Cat()
{
    std::cout << "Destructor in \"Cat class\" called" << std::endl;
}

Cat& Cat::operator=(Cat const& rhs)
{
    std::cout << "Cat copy assignment operator called" << std::endl;
    if (&rhs == this)
        return *this;
    this->_type = rhs._type; //(rhs.getType())
    return *this; 
}

void    Cat::makeSound() const
{
    std::cout << _type << " fait \"Miaou - Miaou\"" << std::endl;
}
