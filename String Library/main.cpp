#include <iostream>
#include "clsString.h"
#include <vector>
#include <string>


int main()
{
	clsString S1("Mohamed Askar 33 From * 7 ^ % Kafr");

	std::cout << S1.Length() << "\n";
	std::cout << clsString::Length("ooepre") << "\n";
		
	system("pause>0");
	return 0;
}
