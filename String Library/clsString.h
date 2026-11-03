#pragma once
#include <iostream>
#include <vector>

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
	void UpperFirstLetterOfEachWord();

	//Operation (3):
	//Lower First Letter of each Word.
	static std::string LowerFirstLetterOfEachWord(std::string text);
	void LowerFirstLetterOfEachWord();

	//Operation (4):
    //Upper All Letter of string.
	static std::string UpperAllLetterInString(std::string text);
	void UpperAllLetterInString();
	
	//Operation (5):
	//Lower All Letter of string.
	static std::string LowerAllLetterInString(std::string text);
	void LowerAllLetterInString();

	//Operation (6):
	//Invert Character Case.
	static char InvertCharacterCase(char Ch);
	void InvertCharacterCase(int Index);
	
	//Operation (7):
	//Invert All Letter Case.
	static std::string InvertAllLetterCase(std::string text);
	void InvertAllLetterCase();

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

	//Operation (12):
    //Print Each Word In String.
	static void PrintEachWordInString(std::string text);
	void PrintEachWordInString();

	//Operation (13):
	//Count Each Word In String.
	static int CountEachWordInString(std::string text);
	int CountEachWordInString();

	//Operation (14):
	//Split String.
	static std::vector <std::string> split(std::string text, const std::string& delimiter);
	std::vector <std::string> split(const std::string& delimiter);

	//Operation (15):
	//Trim.
	static std::string Trim(std::string text);
	void Trim();

	//Operation (16):
	//Join String.
	static std::string JoinString(std::vector <std::string>& vTokens, const std::string& delimiter);
	static std::string JoinString(std::string arrTokens[], const int& arrLength, const std::string& delimiter);
	
	//Operation (17):
	//Revarse Words In String.
	static std::string ReverseWordsInString(std::string& text, const std::string& delimiter);
	void ReverseWordsInString(const std::string& delimiter);

	//Operation (18):
	//Replace Word In String.
	static std::string ReplaceWordInString(std::string text, const std::string& OldWord, const std::string& NewWord);
	void ReplaceWordInString(const std::string& OldWord, const std::string& NewWord);

	//Operation (18):
	//Replace Word In String (Custom).
	static std::string ReplaceWordInStringCustom(std::string text, const std::string& OldWord, const std::string& NewWord, bool MatchCase = true);
	void ReplaceWordInStringCustom(const std::string& OldWord, const std::string& NewWord, bool MatchCase = true);
	
};