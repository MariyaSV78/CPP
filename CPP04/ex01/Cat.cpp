/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msosnova <msosnova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 01:33:09 by msosnova          #+#    #+#             */
/*   Updated: 2022/11/24 01:33:12 by msosnova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    _type = "Cat";
    _brain = new Brain();
    std::cout << "Default constructor \"Cat class\" colled" << std::endl;
}
        
Cat::Cat(std::string type) 
{
    this->_type = type;
    _brain = new Brain();
    std::cout << "\"Cat\" constructor with name called" << std::endl;
}

Cat::Cat(Cat const& ClassCopy):Animal()
{
    std::cout << "Constructor copy in \"Cat class\" called" << std::endl;
     _brain = new Brain();
    *this = ClassCopy;
}

Cat::~Cat()
{
    std::cout << "Destructor in \"Cat class\" called" << std::endl;
    if(this->_brain)
        delete _brain;
}

Cat& Cat::operator=(Cat const& rhs)
{
    std::cout << "Cat copy assignment operator called" << std::endl;
   if (&rhs == this)
        return *this;
    delete _brain;
    _type = rhs._type; //(rhs.getType()
    _brain = new Brain();
    *_brain = *rhs._brain; 
    return *this;
}

void    Cat::makeSound() const
{
    std::cout << " fait \"Miaou - Miaou\"" << std::endl;
}

Brain*  Cat::getBrain() const
{
    return _brain;
}

void    Cat::setIdeas(int i, std::string str)
{
    _brain->setIdea(i, str);
}
