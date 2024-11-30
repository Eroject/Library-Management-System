#include <iostream>
#include <vector>
#include <string.h>
#include <string>
#include <msclr/marshal_cppstd.h>
#include <iostream>
#include <fstream>
//using namespace std;

/*C o("ar");
std::string mySstring = o.solde; // la chaîne à affecter à l'objet Label
System::String^ myLabelString = gcnew System::String(mySstring.c_str()); // convertir la chaîne en System::String^
this->label9->Text = myLabelString;
//this->label9->Text = nomClient;
System::String^ myString = "Hello, world!"; // déclarer et initialiser un objet System::String^
            std::string myStdString = msclr::interop::marshal_as<std::string>(myString); // convertir l'objet System::String^ en std::string
           // System::String^ myNewString = gcnew System::String(myStdString.c_str());*/


           //this->label9->Text = b;
class C {
public:
    std::string solde;

    C(std::string Solde) {

        solde = " fixe";
    }public:
        //double afficher() {

          //  {return solde;}
       // }

        /*void retrait(double montant) {
            if (montant <= solde)
            {
                solde = solde - montant;
                cout << "transaction echouee>>>>>>vous voulez retirer un montant superieur a votre solde" << endl;
            }
            else { cout << "transaction echouee>>>>>>vous voulez retirer un montant superieur a votre solde" << endl; }
        }*/
        /*  void depot(double montant) {

             solde = solde + montant;
             //cout << "transaction reussite>>>>>>vous avez depose:" << montant << ".00 µ" << endl;
         }*/
         /*System::String^ mysString = this->textBox1->Text; // déclarer et initialiser un objet System::String^
 std::string myStdString = msclr::interop::marshal_as<std::string>(mysString); // convertir l'objet System::String^ en std::string
 System::String^ myNewString = gcnew System::String(myStdString.c_str());

 C o(myStdString);
 std::string myString = o.solde; // la chaîne à affecter à l'objet Label
 System::String^ myLabelString = gcnew System::String(myString.c_str()); // convertir la chaîne en System::String^*/
 //this->label9->Text = myLabelString;

};


#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    ProjectXTEST::MyForm Form;
    Application::Run(% Form);
}



