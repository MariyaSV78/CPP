/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msosnova <msosnova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 01:33:32 by msosnova          #+#    #+#             */
/*   Updated: 2022/11/24 01:33:35 by msosnova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    _type = "Dog";
    _brain = new Brain();
    std::cout << "Default constructor \"Dog class\" colled" << std::endl;
}
        
Dog::Dog(std::string type)
{
    _type = type;
    _brain = new Brain();
    std::cout << "\"Dog\" constructor with name called" << std::endl;
}

Dog::Dog(Dog const& ClassCopy):Animal()
{
    std::cout << "Constructor copy in \"Dog class\" called" << std::endl;
    _brain = new Brain();
    *this = ClassCopy;
}

Dog::~Dog()
{
    std::cout << "Destructor in \"Dog class\" called" << std::endl;
    if (this->_brain)
        delete _brain;
}

Dog& Dog::operator=(Dog const& rhs)
{
    std::cout << "Dog copy assignment operator called" << std::endl;
    if (&rhs == this)
        return *this;
    delete _brain;
    _type = rhs._type; //(rhs.getType()
    _brain = new Brain();
    *_brain = *rhs._brain; 
    return *this;
}

void    Dog::makeSound() const
{
    std::cout << " fait \"Wouaaf - Wouaaf\"" << std::endl;
}

Brain*  Dog::getBrain() const
{
    return _brain;
}

void    Dog::setIdeas(int i, std::string str)
{
    _brain->setIdea(i, str);
}
