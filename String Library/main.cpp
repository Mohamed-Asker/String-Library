#include <iostream>
#include "clsString.h"



int main()
{
	clsString S2;
	S2.Value = "Mohamed Askar From kart";
	std::string S1 = "Mohamed sAskar sfrom SKart";


	std::cout << S2.InvertCharacterCase(8) << "\n";
	std::cout << clsString::InvertCharacterCase('q') << "\n";

	system("pause>0");
	return 0;
}