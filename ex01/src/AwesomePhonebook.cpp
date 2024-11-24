#include "PhoneBook.hpp"


int	main(void)
{
	std::string input;
	PhoneBook PhoneBook;
	//display some message herejust for the beginning
	while(1)
	{
		//std::cin.get();
		input = get_input("Please enter a valid input between 'ADD', 'SEARCH', 'EXIT\n");
		if (!input.compare("ADD"))
		{
			PhoneBook.add();
		}
		else if (!input.compare("SEARCH"))
		{
			PhoneBook.search();
		}
		else if (!input.compare("PRINT"))
		{
			PhoneBook.printContacts();
		}
		else if (!input.compare("EXIT"))
		{
			std::cout << "Exiting the program" << std::endl;
			break;
		}
	}
	return (0);
}