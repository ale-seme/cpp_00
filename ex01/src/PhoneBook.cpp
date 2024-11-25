#include "PhoneBook.hpp"
#include <iomanip>

PhoneBook::PhoneBook() : index(0) {};

void	PhoneBook::add(void){

	Contact NewContact;
	NewContact.inputContactDetails();
	contact_array[index] = NewContact;
	index = (index + 1) % 8;
	// input = get_input("Please insert the first name of your contact");

}

void	PhoneBook::search(){

	std::cout << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "First Name" << "|";
	std::cout << std::setw(10) << "Last Name" << "|";
	std::cout << std::setw(10) << "Nick Name" << "|";
	std::cout << std::setw(10) << "Phone Number" << "|";
	std::cout << std::setw(10) << "Darkest Secret" << "|" << std::endl; //not sure about the last pipe
	std::cout << "-------------------------------------------------------------"\
	<< std::endl;

	int i = 1;
	for (const auto& contact : contact_array)
	{
		std::cout << std::setw(10) << i << "|";
		std::cout << std::setw(10) << truncate(contact.getFirstName()) << "|";
		std::cout << std::setw(10) << truncate(contact.getLastName()) << "|";
		std::cout << std::setw(10) << truncate(contact.getNickName()) << "|";
		std::cout << std::setw(10) << truncate(contact.getPhoneNumber()) << "|";
		std::cout << std::setw(10) << truncate(contact.getDarkestSecret()) << std::endl;
		i++;
	}
	std::cout << "-------------------------------------------------------------"\
	<< std::endl; 
	//FROM HERE
	std::string input = get_input("Please input a valid index to display contact informaiton\n");
	if (input.length() > 1 || input == "0" || std::stoi(input) > index)
	{
		std::cout << "invalid index detexted, exiting search mode" << std::endl;
	}
	
}

std::string PhoneBook::truncate(const std::string &str) const{
	if (str.length() > 10)
	{
		return (str.substr(0, 9) + ".");
	}
	return (str);
};



void	PhoneBook::exit(){
	//exit();
}
