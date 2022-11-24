/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msosnova <msosnova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 01:34:35 by msosnova          #+#    #+#             */
/*   Updated: 2022/11/24 01:34:38 by msosnova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>
# include <string>


class AAnimal
{
    protected:
        std::string _type;

    public:
        AAnimal();
        AAnimal(std::string);
        AAnimal(AAnimal const& ClassCopy);
        virtual ~AAnimal();

        AAnimal& operator=(AAnimal const& rhs);

        std::string         getType() const;
        virtual void        makeSound() const = 0;
    };
#endif
