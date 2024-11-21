#include "PhoneBook.hpp"


int	main(void)
{
	std::cout << "Please insert the command" << std::endl;
	std::string input;
	while(std::cin >> input)
	{	
		if (!input.compare("ADD"))
		{
			//manage_add funciton;
			int f  = 1;
			(void)f;
		}
		else if (!input.compare("SEARCH"))
		{
			int x = 2;
			(void)x;
			//manage_search function;
		}
		else if (!input.compare("EXIT"))
		{
			exit(1);
			int r = 3;
			(void)r;
			//manage_exit funciton;
		}
		else
			std::cout << "Only imput allowed are ADD, SEARCH, EXIT" << std::endl;
	}

}