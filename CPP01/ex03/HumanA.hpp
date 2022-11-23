/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msosnova <msosnova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:22:02 by msosnova          #+#    #+#             */
/*   Updated: 2022/11/23 09:22:06 by msosnova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
    public:
        HumanA(const char* name, Weapon& weaponA);
        ~HumanA();
    
        void     attack();
    
    private:
        std::string     _nameA;
        Weapon*         _weaponA;
};

#endif
