#pragma once
#include <vector>
#include <random>
class WordDatabase
{
	public:
		// Initialises the word database with the associated file
		WordDatabase();

		// Returns a random word from the database.
		std::string getRandomWord();


	private:
		// The database
		std::vector<std::string> _words;

		// Loads the word list in and sorts in alphabetically
		void loadDatabase();
};

