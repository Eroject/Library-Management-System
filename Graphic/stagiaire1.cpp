#include <iostream>
#include <vector>
#include <string>
#include <list>
#include <sstream>
#include <iomanip>
#include <fstream>
#include <string.h>
#include <Windows.h>
#include <iostream>
#include <string.h>
#include <string>
#include <msclr/marshal_cppstd.h>
#include "stagiaire1.h"

using namespace System;
using namespace System::Windows::Forms;

void main2(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    ProjectXTEST::stagiaire1 Fo;
    Application::Run(% Fo);
}

