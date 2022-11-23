/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msosnova <msosnova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:48:16 by msosnova          #+#    #+#             */
/*   Updated: 2022/11/23 09:48:18 by msosnova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
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
