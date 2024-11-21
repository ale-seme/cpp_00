#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){};

void	PhoneBook::add(Contact &newContact){
	PhoneBook::contact_array[0] = newContact;
}

void	PhoneBook::search(int index){
	std::cout << index << std::endl;
}

void	PhoneBook::exit(){
	exit();
}
