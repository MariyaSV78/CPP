/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msosnova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 17:03:42 by msosnova          #+#    #+#             */
/*   Updated: 2022/05/16 17:03:45 by msosnova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie 
{
    public:

        Zombie(std::string name);
        ~Zombie();

        void        announce (void) const;
              
    private:

        std::string _name;
};

Zombie* newZombie(std::string name);
void	randomChump(std::string name);

#endif
