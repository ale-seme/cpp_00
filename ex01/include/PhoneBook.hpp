#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include "RequestFunctions.hpp"

class PhoneBook{
private:
    Contact	contact_array[8];
	int		index;

public:
    PhoneBook();
	void		add();
	void		search();
	void		displayContactInfo(int i);
	std::string	truncate(const std::string &str) const;
};

#endif