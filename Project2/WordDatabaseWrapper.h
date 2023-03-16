#pragma once
class WordDatabase; 
public ref class WordDatabaseWrapper
{
	public:
		WordDatabaseWrapper();	
		virtual ~WordDatabaseWrapper();
		System::String^ getRandomWord();
	private:
		WordDatabase* m_pWordDatabase;
};

