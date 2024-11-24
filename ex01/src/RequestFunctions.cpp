#include "Contact.hpp"

std::string get_input(std::string request_message)
{
    std::string input;
    
    while(1)
    {
        std::cout << request_message << std::flush;
        if (!std::getline(std::cin, input))
        {
            if ((std::cin.eof)())
            {
                std::cout << "End of input detected. Exiting the rogram" << std:: endl;
                return NULL;
            }
            else
            {
                std::cout << "Error with getline funciton. Exiting the program" << std::endl;
                return NULL;
            }
        }
        if (input.empty())
        {
            std::cout << "Empty input is not allowed. Please enter a valid input" << std::endl;
            continue;
        }
        break;
    }
    return (input);
}
