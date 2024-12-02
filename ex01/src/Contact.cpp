#include "Contact.hpp"
#include "RequestFunctions.hpp"
 
Contact::Contact(){};

std::string Contact::getFirstName() const{
	return _firstName;
}

std::string Contact::getLastName() const{
	return _lastName;
}

std::string Contact::getNickName() const{
	return _nickName;
}

std::string Contact::getPhoneNumber() const{
	return _phoneNumber;
}

std::string Contact::getDarkestSecret() const{
	return _darkestSecret;
}

void	Contact::inputContactDetails(){

	_firstName = get_input("First Name: ");
	_lastName = get_input("Last Name: ");
	_nickName = get_input("Nick Name: ");
	_phoneNumber = get_input ("Phone Number: ");
	_darkestSecret = get_input("Darkest Secret: ");
}