/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msosnova <msosnova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:47:35 by msosnova          #+#    #+#             */
/*   Updated: 2022/11/23 09:47:37 by msosnova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
    protected:
        std::string _name;
        int         _pointDeVie;
        int         _pointEnergi;
        int         _attackDamage;
    
    public:
        ClapTrap();
        ClapTrap(std::string);
        ClapTrap(ClapTrap const& classCopy);
        ~ClapTrap();

        ClapTrap&       operator=(ClapTrap const& rhs);

        void            attack(const std::string& target);
        void            takeDamage(unsigned int amount);
        void            beRepaired(unsigned int amount);

        std::string     getName() const;
        int             getPointDeVie() const;
        int             getEnergi() const;
        int             getAttackDamage() const;

};

#endif
