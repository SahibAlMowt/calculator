#include "calc.h"

int main()
{
    std::string str;
	
	do
	{
		std::getline(std::cin, str);

		if (str.empty()) 
		{
   			 throw std::invalid_argument("input is empty");
		}

			
		sam::proxodka(str);
		
		
	}while(str != "quit");


    return 0;
}