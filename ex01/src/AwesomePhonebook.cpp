#include "PhoneBook.hpp"


int	main(void)
{
	std::cout << "Please insert the command" << std::endl;
	std::string input;
	PhoneBook PhoneBook;
	while(1)
	{
		if (!std::getline(std::cin, input))
		{
			if ((std::cin.eof)())
			{
				std::cout << "End of input detected. Exiting the loop" << std:: endl;
				break;
			}
			else
			{
				std::cout << "Error with getline funciton. Exiting the loop" << std::endl;
				break;
			}
		}
		if (input.empty())
		{
			std::cout << "Empty input is not allowed. Please enter 'ADD' 'SEARCH' or 'EXIT'" << std::endl;
			continue;
		}
		if (!input.compare("ADD"))
		{
			PhoneBook.add();
		}
		else if (!input.compare("SEARCH"))
		{
			PhoneBook.search();//still need to figure if it's a good approach or not give an index at all
		}
		else if (!input.compare("EXIT"))
		{
			std::cout << "Exiting the program" << std::endl;
			break;
		}
		else if (!input.compare("PRINT"))
		{
			PhoneBook.printContacts();
		}
		else
			std::cout << "Only imput allowed are 'ADD', 'SEARCH', 'EXIT'" << std::endl;
	}
}