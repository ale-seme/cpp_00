#include "Contact.hpp"
 
Contact::Contact(){};

void	Contact::setFirstName(const std::string &newName){
	_firstName = newName;
}
void	Contact::setLastName(const std::string &newLast){
	_lastName = newLast;
}
void	Contact::setNickName(const std::string &newNick){
	_nickName = newNick;
}
void	Contact::setPhoneNumber(const std::string &newPhoneNbr){
	_phoneNumber = newPhoneNbr;
}
void	Contact::setDarkestSecret(const std::string &newSecret){
	_darkestSecret = newSecret;
}