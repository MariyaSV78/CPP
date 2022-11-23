/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msosnova <msosnova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:22:19 by msosnova          #+#    #+#             */
/*   Updated: 2022/11/23 09:22:25 by msosnova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
    public:
        HumanB(const char* name);
        ~HumanB();

        void     attack();
        void     setWeapon(Weapon& type);    
    private:
        std::string     _name;
        Weapon*         _weapon;
};

#endif
