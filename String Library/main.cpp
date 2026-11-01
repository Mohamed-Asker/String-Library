#include <iostream>
#include "clsString.h"



int main()
{
	clsString S2;
	S2.Value = "Mohamed Askar From kart";
	std::string S1 = "Mohamed sAskar sfrom SKart";


	std::cout << S2.LowerFirstLetterOfEachWord() << "\n";
	std::cout << clsString::LowerFirstLetterOfEachWord(S1) << "\n";
	std::cout << S2.LowerFirstLetterOfEachWord("Jsdf sdf sdf K Wer werkl") << "\n";

	system("pause>0");
	return 0;
}