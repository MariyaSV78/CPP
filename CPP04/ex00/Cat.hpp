/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msosnova <msosnova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 01:29:49 by msosnova          #+#    #+#             */
/*   Updated: 2022/11/24 01:29:53 by msosnova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

 # include "Animal.hpp"

class Cat : public Animal
{
    public:
        Cat();
        Cat(std::string);
        Cat(Cat const& ClassCopy);
        virtual ~Cat();

        Cat&    operator=(Cat const& rhs);

        virtual void makeSound() const;
};
#endif
