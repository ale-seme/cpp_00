#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

//i still need to have include guards and implement the methods in a separate file

class PhoneBook{
private:
    Contact contact_array[8];

public:
    PhoneBook();
	void	add(Contact &NewContact);
	void	search(int index);
	void	exit();
};

#endif