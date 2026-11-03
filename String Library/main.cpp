#include <iostream>
#include "clsString.h"
#include <vector>


int main()
{
	std::string S1 = "Mohamed Askar From ";
	clsString S2("Mohamed Askar 33 From Kafr");
	std::vector <std::string> vTokens;

	std::cout << S2.CountEachWordInString();
	std::cout << "\n--------------------\n";
	std::cout << S2.CountEachWordInString("sdfkjs;df sdfjk sdfk;j sdf;jj ");
	std::cout << "\n--------------------\n";
	std::cout <<  clsString::CountEachWordInString(S1);

		
	system("pause>0");
	return 0;
}
