/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msosnova <msosnova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 02:01:09 by msosnova          #+#    #+#             */
/*   Updated: 2022/11/24 02:01:13 by msosnova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
# include <string>
# include <ctime>
# include <cstdlib>




class Base 
{
    private:

    public:
        virtual ~Base();
};


Base *	generate(void);
void	identify_ptr(Base* p);
void	identify_ref(Base& p);

#endif
