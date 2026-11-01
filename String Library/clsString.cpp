#include <iostream>
#include "clsString.h"


clsString::clsString(std::string value) : _Value(value) {}

//Properties.
void clsString::setValue(std::string value)
{
	_Value = value;
}
std::string clsString::getValue() const
{
	return _Value;
}

//Operations.

//Operation (1).
void clsString::PrintFirstLetterOfEachWord(const std::string& text)
{
	bool isFirstLetter = true;
	for (short i = 0; i < text.length(); i++)
	{
		if ((text[i] != ' ') && isFirstLetter)
			std::cout << std::left << std::setw(3) << text[i];

		isFirstLetter = (text[i] == ' ') ? true : false;
	}
}
void clsString::PrintFirstLetterOfEachWord()
{
	PrintFirstLetterOfEachWord(_Value);
}