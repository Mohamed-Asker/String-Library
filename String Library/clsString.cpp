#include <iostream>
#include "clsString.h"

//Constructors.
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

//Operation (4):
//Upper All Letter of string.
std::string clsString::UpperAllLetterInString(std::string text)
{
	for (short i = 0; i < text.length(); i++)
		text[i] = std::toupper(text[i]);

	return text;
}
std::string clsString::UpperAllLetterInString()
{
	return UpperAllLetterInString(_Value);
}

//Operation (5):
//Lower All Letter of string.
std::string clsString::LowerAllLetterInString(std::string text)
{
	for (short i = 0; i < text.length(); i++)
		text[i] = std::tolower(text[i]);

	return text;
}
std::string clsString::LowerAllLetterInString()
{
	return LowerAllLetterInString(_Value);
}

//Operation (6):
//Invert Character Case.
char clsString::InvertCharacterCase(char Ch)
{
	return (std::isupper(Ch)) ? std::tolower(Ch) : std::toupper(Ch);
}
char clsString::InvertCharacterCase(int Index)
{
	return InvertCharacterCase(_Value[Index]);
}

//Operation (7):
//Invert All Letter Case.
std::string clsString::InvertAllLetterCase(std::string text)
{
	for (short i = 0; i < text.length(); i++)
		text[i] = InvertCharacterCase(text[i]);

	return text;
}
std::string clsString::InvertAllLetterCase()
{
	return InvertAllLetterCase(_Value);
}

//Operation (8):
//Count Letter In String.
short clsString::CountLetterInString(std::string text, enWhatToCount WhatToCount)
{
	if (WhatToCount == enWhatToCount::AllLetters)
		return text.length();

	short counter = 0; 
	for (short i = 0; i < text.length(); i++)
	{
		switch (WhatToCount)
		{
		case enWhatToCount::CaptialLetters:
			if (std::isupper(text[i]))
				counter++;
			break;
		case enWhatToCount::SmallLetters:
			if (std::islower(text[i]))
				counter++;
			break;
		case enWhatToCount::DigitLetters:
			if (std::isdigit(text[i]))
				counter++;
			break;
		case enWhatToCount::PunchLetters:
			if (std::ispunct(text[i]))
				counter++;
			break;
		case enWhatToCount::Spaces:
			if (std::isspace(text[i]))
				counter++;
			break;
		}
	}
	return counter;
}
short clsString::CountLetterInString(enWhatToCount WhatToCount)
{
	return CountLetterInString(_Value, WhatToCount);
}

//Operation (9):
//Count Specific Character.
short clsString::CountSpecificCharacter(std::string& text, char Ch, bool MatchCase)
{
	short counter = 0;
	for (short i = 0; i < text.length(); i++)
	{
		if (MatchCase)
		{
			if (text[i] == Ch)
				counter++;
		}
		else
		{
			if (std::tolower(text[i]) == std::tolower(Ch))
				counter++;
		}
	}
	return counter++;
}
short clsString::CountSpecificCharacter(char Ch, bool MatchCase)
{
	return CountSpecificCharacter(_Value, Ch, MatchCase);
}

//Operation (10):
//Is Vowel.
bool clsString::isVowelAt(char Ch)
{
	return std::string("aeiou").find(std::tolower(Ch)) != std::string::npos;
}
bool clsString::isVowel(int Index)
{
	return isVowelAt(_Value[Index]);
}

//Operation (11):
//Count Vowel.
int clsString::CountVowel(std::string& text)
{
	int counter = 0;
	for (int i = 0; i < text.length() ;i++)
		if (isVowelAt(text[i]))
			counter++;

	return counter;
}
int clsString::CountVowel()
{
	return CountVowel(_Value);
}

//Operation (12):
//Print All Vowel.
void clsString::PrintAllVowelInString(std::string& text)
{
	for (int i = 0; i < text.length(); i++)
		if (isVowelAt(text[i]))
			std::cout << std::left << std::setw(3) << text[i];

	std::cout << std::endl;
}
void clsString::PrintAllVowelInString()
{
	PrintAllVowelInString(_Value);
}