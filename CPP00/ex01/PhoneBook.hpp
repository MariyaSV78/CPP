#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include "Contact.hpp"

# define MAX_CONTACTS 8

class PhoneBook
{

public:
	PhoneBook();
	~PhoneBook() {};

	void	add_contact();
	void	shift_contacts();
	void	search_contact();
	void	display_header();

private:
	Contact	_contacts[MAX_CONTACTS];
	Contact	_tmp_contact;
	int		_N_contact;
};

#endif
