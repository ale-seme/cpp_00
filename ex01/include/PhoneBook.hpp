#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include "RequestFunctions.hpp"

//i still need to have include guards and implement the methods in a separate file

class PhoneBook{
private:
    Contact	contact_array[8];
	int		index;

public:
    PhoneBook();
	void		add();
	void		search();
	void		exit();
	std::string	truncate(const std::string &str) const;
};

#endif