#include <iostream>
#include "clsString.h"



int main()
{
	std::string S1 = "Mohamed Askar From - @";
	clsString S2("Mohamed Askar 33 From Kafr * &^");


	std::cout << S2.CountVowel() << "\n";
	std::cout << clsString::CountVowel(S1) << "\n";
	std::cout << S2.CountVowel(S1) << "\n";
	
	


	system("pause>0");
	return 0;
}
