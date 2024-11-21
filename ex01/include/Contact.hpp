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
	int			_index;

public:	
			Contact();
	void	setFirstName(const std::string &newName);
	void	setLastName(const std::string &newLast);
	void	setNickName(const std::string &newNick);
	void	setPhoneNumber(const std::string &newPhoneNbr);
	void	setDarkestSecret(const std::string &newSecret);

	const std::string &getFirstName() const;
};

#endif