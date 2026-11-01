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

	//Operation (1).
	static void PrintFirstLetterOfEachWord(const std::string& text);
	void PrintFirstLetterOfEachWord();

};