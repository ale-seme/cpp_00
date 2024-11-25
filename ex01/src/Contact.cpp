#include "Contact.hpp"
#include "RequestFunctions.hpp"
 
Contact::Contact(){};

// void	Contact::setFirstName(const std::string &newName){
// 	_firstName = newName;
// }
// void	Contact::setLastName(const std::string &newLast){
// 	_lastName = newLast;
// }
// void	Contact::setNickName(const std::string &newNick){
// 	_nickName = newNick;
// }
// void	Contact::setPhoneNumber(const std::string &newPhoneNbr){
// 	_phoneNumber = newPhoneNbr;
// }
// void	Contact::setDarkestSecret(const std::string &newSecret){
// 	_darkestSecret = newSecret;
// }

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