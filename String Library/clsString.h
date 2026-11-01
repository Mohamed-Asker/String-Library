#pragma once
#include <iostream>
#include <iomanip>


class clsString
{
private:
	std::string _Value;

public:
    enum enWhatToCount
	{
		AllLetters = 1, 
		CaptialLetters = 2, 
		SmallLetters = 3,
		DigitLetters = 4, 
		PunchLetters = 5,
		Spaces = 6,
	};

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

	//Operation (4):
    //Upper All Letter of string.
	static std::string UpperAllLetterInString(std::string text);
	std::string UpperAllLetterInString();
	
	//Operation (5):
	//Lower All Letter of string.
	static std::string LowerAllLetterInString(std::string text);
	std::string LowerAllLetterInString();

	//Operation (6):
	//Invert Character Case.
	static char InvertCharacterCase(char Ch);
	char InvertCharacterCase(int Index);
	
	//Operation (7):
	//Invert All Letter Case.
	static std::string InvertAllLetterCase(std::string text);
	std::string InvertAllLetterCase();

	//Operation (8):
	//Count Letter In String.
	static short CountLetterInString(std::string text, enWhatToCount WhatToCount = enWhatToCount::AllLetters);
	short CountLetterInString(enWhatToCount WhatToCount = enWhatToCount::AllLetters);

	//Operation (9):
	//Count Specific Character.
	static short CountSpecificCharacter(std::string& text, char Ch, bool MatchCase = true);
	short CountSpecificCharacter(char Ch, bool MatchCase = true);

	//Operation (10):
	//Is Vowel.
	static bool isVowelAt(char Ch);
	bool isVowel(int Index);

	//Operation (11):
	//Count Vowel.
	static int CountVowel(std::string& text);
	int CountVowel();

	//Operation (12):
	//Print All Vowel.
	static void PrintAllVowelInString(std::string& text);
	void  PrintAllVowelInString();
	
};