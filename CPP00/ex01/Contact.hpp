/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msosnova <msosnova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 01:13:41 by msosnova          #+#    #+#             */
/*   Updated: 2022/11/24 01:13:45 by msosnova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Contact 
{
public:	

    Contact();
	~Contact();

	bool		new_contact();
	void		display_header(int index);
	void		display();
	void		copy(Contact cont);
	std::string	get_personInfo(int i);

private:

	std::string 	_personInfo[5];

};

#endif
