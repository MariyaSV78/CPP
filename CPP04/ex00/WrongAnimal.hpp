/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msosnova <msosnova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 01:31:08 by msosnova          #+#    #+#             */
/*   Updated: 2022/11/24 01:31:11 by msosnova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
    protected:
        std::string _type;

    public:
        WrongAnimal();
        WrongAnimal(std::string);
        WrongAnimal(WrongAnimal const& ClassCopy);
        ~WrongAnimal();

        WrongAnimal& operator=(WrongAnimal const& rhs);

        std::string         getType() const;
        void        makeSound() const;
};
#endif
