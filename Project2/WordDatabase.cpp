#include "WordDatabase.h"
#include <fstream>
#include <iostream>
#include <string>
#include <stdlib.h>
WordDatabase::WordDatabase()
{
	loadDatabase();
}

std::string WordDatabase::getRandomWord() 
{	
	//initialize the random seed
	srand((unsigned)time(0));

	//pick a random word
	int ws = _words.size();
	int casuale = rand()%ws;
	return _words.at(casuale);
}

void WordDatabase::loadDatabase()
{
	//read from the file
	std::ifstream file("../words.txt");
	
	//check if can open the file, return error if not
	if (!file.is_open()) {
		std::cerr << "Error: Failed to load words" << std::endl;
		return;
	}

	//adds word to an array of strings
	std::string word;
	while (std::getline(file, word)) {
		std::transform(word.begin(), word.end(), word.begin(), ::toupper);
		_words.emplace_back(word);
	}

	file.close();

	// if the array is empty returns an error
	if (_words.empty()) {
		std::cerr << "Error: Word list loaded empty..." << std::endl;
		return;
	}

	//sorts the words in alphabetical order
	std::sort(_words.begin(), _words.end());
}
