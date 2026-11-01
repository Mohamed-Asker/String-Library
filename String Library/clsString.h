#pragma once
#include <iostream>


class clsString
{
private:
	std::string _Value;

public:
	//Constructors.
	clsString() {};
	clsString(std::string value);

	//Properties.
	void setValue(std::string value)
	{
		_Value = value;
	}
	std::string Value()const
	{
		return _Value;
	}
	__declspec(property(get = Value, put = setValue)) std::string Value;


};