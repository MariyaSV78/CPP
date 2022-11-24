/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msosnova <msosnova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 01:35:48 by msosnova          #+#    #+#             */
/*   Updated: 2022/11/24 01:35:53 by msosnova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog: public AAnimal
{
    private:
        Brain*  _brain;
   
    public:
        Dog();
        Dog(std::string);
        Dog(Dog const& ClassCopy);
        virtual ~Dog();

        Dog&    operator=(Dog const& rhs);

        virtual void makeSound() const;
        Brain*       getBrain() const;
        void         setIdeas(int i, std::string str);
};      

#endif
