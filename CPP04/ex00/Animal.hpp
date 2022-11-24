/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msosnova <msosnova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 01:29:17 by msosnova          #+#    #+#             */
/*   Updated: 2022/11/24 01:29:20 by msosnova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
    protected:
        std::string _type;

    public:
        Animal();
        Animal(std::string);
        Animal(Animal const& ClassCopy);
        virtual ~Animal();

        Animal& operator=(Animal const& rhs);

        std::string         getType() const;
        virtual void        makeSound() const;
};
#endif
