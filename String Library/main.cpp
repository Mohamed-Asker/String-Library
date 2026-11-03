#include <iostream>
#include "clsString.h"



int main()
{
	std::string S1 = "Mohamed Askar From - @";
	clsString S2("Mohamed Askar 33 From Kafr * &^");

	std::cout << S2.CountEachWordInString() << "\n";
	std::cout << clsString::CountEachWordInString(S1) << "\n";
	std::cout << S2.CountEachWordInString("sdfj ernm sdf ,s  ,df") << "\n";
	
	


	system("pause>0");
	return 0;
}
