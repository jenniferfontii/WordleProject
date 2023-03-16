#include "MyForm.h"
#include "WordDatabaseWrapper.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThread]


void main(array<String^>^ args)
{
    //starts the visual form
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Project2::MyForm form;
    Application::Run(% form);
   
    
}


