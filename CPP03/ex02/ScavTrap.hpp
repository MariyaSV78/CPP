/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msosnova <msosnova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 01:27:00 by msosnova          #+#    #+#             */
/*   Updated: 2022/11/24 01:27:03 by msosnova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
     public:
        ScavTrap();
        ScavTrap(std::string);
        ScavTrap(ScavTrap const& classCopy);
        ~ScavTrap();

        ScavTrap&       operator=(ScavTrap const& rhs);

        void guardGate();
};

#endif
