#include <iostream>
#include "clsString.h"



int main()
{
	std::string S1 = "Mohamed Askar From - @";
	clsString S2;
	S2.Value = "Mohamed Askar 33 From Kafr * &^";


	std::cout << S2.CountSpecificCharacter('m') << "\n";
	std::cout << clsString::CountSpecificCharacter(S1, 'a') << "\n";
	


	system("pause>0");
	return 0;
}
