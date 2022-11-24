/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msosnova <msosnova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 01:26:17 by msosnova          #+#    #+#             */
/*   Updated: 2022/11/24 01:26:30 by msosnova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAG_HPP
# define FRAGTRAG_HPP

# include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
      public:
        FragTrap();
        FragTrap(std::string);
        FragTrap(FragTrap const& classCopy);
        ~FragTrap();

        FragTrap&       operator=(FragTrap const& rhs);

        void highFivesGuys();
};

#endif
