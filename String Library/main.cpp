#include <iostream>
#include "clsString.h"
#include <vector>
#include <string>


int main()
{
	std::string S1 = "Mohamed Askar From  ";
	clsString S2("Mohamed Askar 33 From Kafr  ");
	std::vector <std::string> vTokens;
	vTokens.push_back("Mohamed");
	vTokens.push_back("Ahmed");
	vTokens.push_back("Islam");
	std::string arr[] = { "Mohamed" ,"Ahmed","Islam" };



	S2.ReplaceWordInString("From", "Froomm");
	std::cout << S2.Value << "\n";

	std::cout << clsString::ReplaceWordInString(S1, "Askar", "Askkkar") << "\n";
		
	system("pause>0");
	return 0;
}
