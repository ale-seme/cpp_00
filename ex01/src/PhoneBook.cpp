#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : index(0) {};

void	PhoneBook::add(void){

	std::string input;
	Contact NewContact;


	// input = get_input("Please insert the first name of your contact");
	input = get_input("First Name: ");

	PhoneBook::contact_array[0].setFirstName(input);

	input = get_input("Last Name: ");
	PhoneBook::contact_array[0].setLastName(input);

	input = get_input("Nick Name: ");
	PhoneBook::contact_array[0].setNickName(input);

	input = get_input ("Phone Number: ");
	PhoneBook::contact_array[0].setPhoneNumber(input);

	input = get_input("Darkest Secret: ");
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
