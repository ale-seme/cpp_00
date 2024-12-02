#include "PhoneBook.hpp"

int	main(void)
{
	std::string input;
	PhoneBook PhoneBook;
	std::cout << "Please enter a command between: 'ADD', 'SEARCH', 'EXIT'" << std::endl;
	while(1)
	{
		input = get_input(">");
		if (!input.compare("ADD"))
		{
			PhoneBook.add();
		}
		else if (!input.compare("SEARCH"))
		{
			PhoneBook.search();
		}
		else if (!input.compare("EXIT"))
		{
			std::cout << "Exiting the program" << std::endl;
			break;
		}
		else
			std::cout << "Wrong input. Allowed commands: 'ADD', 'SEARCH', 'EXIT'" << std::endl;
	}
	return (0);
}