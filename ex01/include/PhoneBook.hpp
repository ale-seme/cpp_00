#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include "Contact.cpp"


//i still need to have include guards and implement the methods in a separate file

class PhoneBook{
private:
    Contact contact_array[8];

public:
    PhoneBook(){};
	void storeNewContact(Contact &NewContact){};
};

class   Contact{
private:
    std::string	_firstName;
    std::string _last_name;
    std::string _nickname;
    std::string _phone_number;
    std::string _darkest_secret;

public:
	// void	add(std::string &contact);
	// void	search();
	// void	exit();
	
	void	setFirstName(const std::string &newName);
	void	setLastName(const std::string &n);
	void	setNickName();
	void	setPhoneNumber();
	void	setDarkestSecret();

	const std::string &getFirstName() const;
	int lol()
	{
		int i = 0;
		i = _firstName.length() ;
		return (i);
	}
};

#endif