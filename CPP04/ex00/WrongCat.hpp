/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msosnova <msosnova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 01:31:34 by msosnova          #+#    #+#             */
/*   Updated: 2022/11/24 01:31:36 by msosnova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

 # include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        WrongCat(std::string);
        WrongCat(WrongCat const& ClassCopy);
        ~WrongCat();

        WrongCat&    operator=(WrongCat const& rhs);

        void makeSound() const;
};
#endif
