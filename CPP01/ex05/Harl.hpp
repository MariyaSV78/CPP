/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msosnova <msosnova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:37:42 by msosnova          #+#    #+#             */
/*   Updated: 2022/11/23 09:37:45 by msosnova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <string>
# include <iostream>
# include <map>


class Harl
{
    public:
        Harl();
        ~Harl();

        void    complain(std::string level);

    private:
        void    debug();
        void    info();
        void    warning();
        void    error();

        typedef void (Harl:: *FnPtr)();
        std::map <std::string, FnPtr> 	_harlMap;
};

#endif
