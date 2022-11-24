/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msosnova <msosnova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 01:30:28 by msosnova          #+#    #+#             */
/*   Updated: 2022/11/24 01:30:32 by msosnova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog: public Animal
{
    public:
        Dog();
        Dog(std::string);
        Dog(Dog const& ClassCopy);
        virtual ~Dog();

        Dog&    operator=(Dog const& rhs);

        virtual void makeSound() const;
};      

#endif
