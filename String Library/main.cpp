#include <iostream>
#include "clsString.h"



int main()
{
	std::string S1 = "Mohamed Askar From - @";
	clsString S2("Mohamed Askar 33 From Kafr * &^");


	std::cout << S2.isVowel(0) << "\n"; 
	std::cout << S2.isVowel(1) << "\n";
	std::cout << S2.isVowel(2) << "\n";
	std::cout << S2.isVowel(3) << "\n";
	
	


	system("pause>0");
	return 0;
}
