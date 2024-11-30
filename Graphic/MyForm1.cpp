#include <iostream>
#include <vector>
#include <string>
#include <list>
#include <sstream>
#include <iomanip>
#include <fstream>
#include <string.h>
#include <Windows.h>
#include <msclr/marshal_cppstd.h>

class C {
public:
    std::string solde;

    C(std::string Solde) {

        solde = " fixe";
    }
};
#include "MyForm1.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace System::IO;
using namespace System::Text;

void main1(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    ProjectXTEST::MyForm1 Form;
    Application::Run(% Form);
}

