#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : index(0) {};

void	PhoneBook::add(void){

	std::string input;
	std::cout << "Please insert the first name of your contact" << std::endl;
	std::cin >> input;
	PhoneBook::contact_array[0].setFirstName(input);

	std::cout << "Please insert the last name of your contact" << std::endl;
	std::cin >> input;
	PhoneBook::contact_array[0].setLastName(input);


	std::cout << "Please insert the nick name of your contact" << std::endl;
	std::cin >> input;
	PhoneBook::contact_array[0].setNickName(input);

	std::cout << "Please insert the phone number of your contact" << std::endl;
	std::cin >> input;
	PhoneBook::contact_array[0].setPhoneNumber(input);

	std::cout << "Please inser the darkest secret of your contact" << std::endl;
	std::cin >> input;
	PhoneBook::contact_array[0].setDarkestSecret(input);
}

void	PhoneBook::search(){
	//std::cout << index << std::endl;
}

void	PhoneBook::printContacts()
{
	std::cout << PhoneBook::contact_array[0].getFirstName() << std::endl;
	std::cout << PhoneBook::contact_array[0].getLastName() << std::endl;
	std::cout << PhoneBook::contact_array[0].getNickName() << std::endl;
	std::cout << PhoneBook::contact_array[0].getPhoneNumber() << std::endl;
	std::cout << PhoneBook::contact_array[0].getDarkestSecret() << std::endl;
}
void	PhoneBook::exit(){
	//exit();
}
