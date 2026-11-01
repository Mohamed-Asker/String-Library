#include <iostream>
#include "clsString.h"



int main()
{
	std::string S1 = "Mohamed Askar From - @";
	clsString S2("Mohamed Askar 33 From Kafr * &^");


	S2.PrintAllVowelInString() ;
	clsString::PrintAllVowelInString(S1) ;
	S2.PrintAllVowelInString(S1);
	
	


	system("pause>0");
	return 0;
}
