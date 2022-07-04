/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msosnova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 19:43:27 by msosnova          #+#    #+#             */
/*   Updated: 2022/05/16 19:43:30 by msosnova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <iomanip>


class Zombie 
{
    public:
        Zombie();
        ~Zombie();

        void    announce();
        void    setName(std::string name);

    
    private:
        std::string _name;
};


Zombie* zombieHorde( int N, std::string name );

#endif 

