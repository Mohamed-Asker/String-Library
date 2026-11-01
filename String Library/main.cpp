#include <iostream>
#include "clsString.h"



int main()
{
	clsString S2;
	S2.Value = "Mohamed Askar From kart";
	std::string S1 = "Mohamed sAskar sfrom SKart";


	std::cout << S2.InvertAllLetterCase() << "\n";
	std::cout << clsString::InvertAllLetterCase(S1) << "\n";

	system("pause>0");
	return 0;
}