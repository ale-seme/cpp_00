#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : index(0) {};

void	PhoneBook::add(void){

	Contact NewContact;
	NewContact.inputContactDetails();
	contact_array[index] = NewContact;
	index = (index + 1) % 8;
	// input = get_input("Please insert the first name of your contact");

}

void	PhoneBook::search(){
	//std::cout << index << std::endl;
}

void	PhoneBook::printContacts()
{
	for (auto& contact: contact_array)
	{
		std::cout << contact.getFirstName() << std::endl;
		std::cout << contact.getLastName() << std::endl;
		std::cout << contact.getNickName() << std::endl;
		std::cout << contact.getPhoneNumber() << std::endl;
		std::cout << contact.getDarkestSecret() << std::endl;
	}
}
void	PhoneBook::exit(){
	//exit();
}
