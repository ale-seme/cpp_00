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
	std::cout << std::setw(10) << "Nick Name" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;

	int i = 1;
	for (const auto& contact : contact_array)
	{
		std::cout << std::setw(10) << i << "|";
		std::cout << std::setw(10) << truncate(contact.getFirstName()) << "|";
		std::cout << std::setw(10) << truncate(contact.getLastName()) << "|";
		std::cout << std::setw(10) << truncate(contact.getNickName()) << "#" << std::endl;
		i++;
	}
	std::cout << "---------------------------------------------" << std::endl; 
	//FROM HERE
	std::string input = get_input("Please input a valid index (1-8) to display contact informaiton\n");
	if (input.length() > 1 || input == "0" || std::stoi(input) > 8)
	{
		std::cout << "invalid index detexted, exiting search mode" << std::endl;	
		return ;
	}
	displayContactInfo(std::stoi(input));
}

std::string PhoneBook::truncate(const std::string &str) const{
	if (str.length() > 10)
	{
		return (str.substr(0, 9) + ".");
	}
	return (str);
};

void PhoneBook::displayContactInfo(int i){
	std::cout << "Here is the information regarding the contact index " << i << std::endl;
	std::cout << "First Name: " << contact_array[i - 1].getFirstName() << std::endl;
	std::cout << "Last Name: " << contact_array[i - 1].getLastName() << std::endl;
	std::cout << "Nick Name: " << contact_array[i - 1].getNickName() << std::endl;
	std::cout << "Phone Number: " << contact_array[i - 1].getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << contact_array[i - 1].getDarkestSecret() << std::endl;
	std::cout << "SEARCH COMPLETED, EXITING SEARCH MODE" << std::endl;
}




void	PhoneBook::exit(){
	//exit();
}
