#include <iostream>
#include "clsString.h"
#include <vector>


int main()
{
	std::string S1 = "  Mohamed Askar From  ";
	clsString S2("  Mohamed Askar 33 From Kafr  ");
	std::vector <std::string> vTokens;

	std::cout << "|" << clsString::Trim(S1) << "|\n";
	std::cout << "|" << S2.Trim() << "|\n";
	std::cout << "|" << S2.Trim("  fdfs sdfsf dfgdfg  ") << "|\n";

		
	system("pause>0");
	return 0;
}
