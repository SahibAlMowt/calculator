#include "calc.h"

int main()
{
    std::string str;

	std::cout << "enter input without spaces\n";
	
	do
	{
		std::getline(std::cin, str);
		
		if (str.empty()) 
		{
			std::cerr << "input is empty\n";
			continue;
		}

		if(sam::containsspaces(str, ' '))
		{
			std::cerr << "no spaces!\n";
			continue;
		}
		
			
		sam::proxodka(str);
		
		
	}while(str != "quit");


    return 0;
}
