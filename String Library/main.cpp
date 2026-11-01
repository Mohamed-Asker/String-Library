#include <iostream>
#include "clsString.h"



int main()
{
	std::string S1 = "Mohamed Askar From - @";
	clsString S2;
	S2.Value = "Mohamed Askar 33 From Kafr * &^";


	std::cout << S2.CountLetterInString(clsString::CaptialLetters) << "\n";
	std::cout << clsString::CountLetterInString(S1, clsString::SmallLetters) << "\n";
	std::cout << S2.CountLetterInString(clsString::DigitLetters) << "\n";
	std::cout << clsString::CountLetterInString(S1, clsString::PunchLetters) << "\n";
	std::cout << S2.CountLetterInString(clsString::Spaces) << "\n";


	system("pause>0");
	return 0;
}
