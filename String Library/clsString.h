#pragma once
#include <iostream>
#include <iomanip>


class clsString
{
private:
	std::string _Value;

public:
	//Constructors.
	clsString() {};
	clsString(std::string value);

	//Properties.
	void setValue(std::string value);
	std::string getValue() const;
	__declspec(property(get = getValue, put = setValue)) std::string Value;

	//Operations.

	//Operation (1):
	//Print First Letter of each Word.
	static void PrintFirstLetterOfEachWord(const std::string& text);
	void PrintFirstLetterOfEachWord();

	//Operation (2):
	//Upper First Letter of each Word.
	static std::string UpperFirstLetterOfEachWord(std::string text);
	std::string UpperFirstLetterOfEachWord();

	//Operation (3):
	//Lower First Letter of each Word.
	static std::string LowerFirstLetterOfEachWord(std::string text);
	std::string LowerFirstLetterOfEachWord();

};