/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msosnova <msosnova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:23:30 by msosnova          #+#    #+#             */
/*   Updated: 2022/11/23 09:23:33 by msosnova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon
{
    public:
        Weapon(){};
        Weapon (std::string type);
        ~Weapon();

        const std::string&     getType(void);
        void                   setType(const std::string newType);

    private:
        std::string     _type;
};

#endif
