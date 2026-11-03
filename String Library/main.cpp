#include <iostream>
#include "clsString.h"
#include <vector>
#include <string>


int main()
{
	std::string S1 = "  Mohamed Askar From  ";
	clsString S2("  Mohamed Askar 33 From Kafr  ");
	std::vector <std::string> vTokens;
	vTokens.push_back("Mohamed");
	vTokens.push_back("Ahmed");
	vTokens.push_back("Islam");
	std::string arr[] = { "Mohamed" ,"Ahmed","Islam" };

	std::string Test = "Koko#//#Soso#//#";
	std::cout << clsString::ReverseWordsInString(S1, " ") << "\n";
	std::cout << S2.ReverseWordsInString(" ") << "\n";
	std::cout << S2.ReverseWordsInString(Test, "#//#");

		
	system("pause>0");
	return 0;
}
