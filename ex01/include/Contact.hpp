#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class   Contact{
private:
    std::string	_firstName;
    std::string _lastName;
    std::string _nickName;
    std::string _phoneNumber;
    std::string _darkestSecret;

public:	
			Contact();
	std::string getFirstName() const;
	std::string getLastName() const;
	std::string getNickName() const;
	std::string getPhoneNumber() const;
	std::string getDarkestSecret() const;
	void		inputContactDetails();
};

#endif