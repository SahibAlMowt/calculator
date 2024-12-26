#include "calc.h"

int main()
{
    std::string str;
	
	do
	{
		std::getline(std::cin, str);
		
		if (str.empty()) 
		{
			std::cerr << "input is empty\n";
			continue;
		}
		
			
		sam::proxodka(str);
		
		
	}while(str != "quit");


    return 0;
}
