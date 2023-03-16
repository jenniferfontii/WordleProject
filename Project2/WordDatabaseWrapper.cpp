#include "WordDatabaseWrapper.h"
#include "WordDatabase.h"

// this class parse the non ref class WordDatabase to a ref class.
// this passage is needed to use the class inside the form.

WordDatabaseWrapper::WordDatabaseWrapper() {
	m_pWordDatabase = new WordDatabase();
	

}
WordDatabaseWrapper::~WordDatabaseWrapper()
{
	delete m_pWordDatabase;
}
System::String^ WordDatabaseWrapper::getRandomWord()
{
	std::string strCpp = m_pWordDatabase->getRandomWord();
	return gcnew System::String(strCpp.c_str());
}