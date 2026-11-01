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

//Operation (1):
//Print First Letter of each Word.
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

//Operation (2):
//Upper First Letter of each Word.
std::string clsString::UpperFirstLetterOfEachWord(std::string text)
{
	bool isFirstLetter = true;
	for (short i = 0; i < text.length(); i++)
	{
		if ((text[i] != ' ') && isFirstLetter)
			text[i] = std::toupper(text[i]);

		isFirstLetter = (text[i] == ' ') ? true : false;
	}
	return text;
}
std::string clsString::UpperFirstLetterOfEachWord()
{
	return UpperFirstLetterOfEachWord(_Value);
}

//Operation (3):
//Lower First Letter of each Word.
std::string clsString::LowerFirstLetterOfEachWord(std::string text)
{
	bool isFirstLetter = true;
	for (short i = 0; i < text.length(); i++)
	{
		if ((text[i] != ' ') && isFirstLetter)
			text[i] = std::tolower(text[i]);

		isFirstLetter = (text[i] == ' ') ? true : false;
	}
	return text;
}
std::string clsString::LowerFirstLetterOfEachWord()
{
	return LowerFirstLetterOfEachWord(_Value);
}