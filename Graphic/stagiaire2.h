#pragma once
#include <msclr/marshal_cppstd.h>

namespace ProjectXTEST {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for stagiaire2
	/// </summary>
	public ref class stagiaire2 : public System::Windows::Forms::Form
	{
	public:
		stagiaire2(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~stagiaire2()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox1;






	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label23;
	public: System::Windows::Forms::Button^ button13;
	private:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;
	public:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(stagiaire2::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(114, 252);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(116, 84);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 28;
			this->pictureBox1->TabStop = false;
			// 
			// panel2
			// 
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->textBox2);
			this->panel2->Location = System::Drawing::Point(171, 103);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(168, 28);
			this->panel2->TabIndex = 23;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::Gray;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(0, 0);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(166, 26);
			this->textBox2->TabIndex = 8;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(6, 108);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(166, 20);
			this->label1->TabIndex = 22;
			this->label1->Text = L"Prénom du stagiaire:";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Location = System::Drawing::Point(171, 55);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(168, 28);
			this->panel1->TabIndex = 21;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::Gray;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(0, 0);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(166, 26);
			this->textBox1->TabIndex = 8;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label23->Location = System::Drawing::Point(6, 60);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(145, 20);
			this->label23->TabIndex = 20;
			this->label23->Text = L"Nom du stagiaire:";
			this->label23->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button13
			// 
			this->button13->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->ForeColor = System::Drawing::Color::White;
			this->button13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button13.Image")));
			this->button13->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button13->Location = System::Drawing::Point(81, 368);
			this->button13->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(180, 45);
			this->button13->TabIndex = 19;
			this->button13->Text = L"Rechercher";
			this->button13->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &stagiaire2::button13_Click);
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(305, 5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(39, 29);
			this->button1->TabIndex = 18;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &stagiaire2::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(39, 169);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(95, 20);
			this->label2->TabIndex = 26;
			this->label2->Text = L"Résultat    :";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::White;
			this->label4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label4->Location = System::Drawing::Point(140, 174);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 13);
			this->label4->TabIndex = 29;
			// 
			// stagiaire2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gray;
			this->ClientSize = System::Drawing::Size(347, 413);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"stagiaire2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"stagiaire2";
			this->Load += gcnew System::EventHandler(this, &stagiaire2::stagiaire2_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		/////////////////////////////////FONCTION////////////////////////////////////////////////////////////////////////////////////
		System::String^ stringtostringspe(std::string myString) {
			System::String^ myLabelString = gcnew System::String(myString.c_str()); // convertir la chaîne en System::String^*/
			return myLabelString;
		}
		int convertStringToInt(String^ str)
		{
			int intValue = System::Int32::Parse(str);
			return intValue;
		}
		String^ GetNumEmp(int n) // Déclare une fonction qui prend un entier en paramètre et retourne une chaîne de caractères
		{
			String^ numStr = (n + 1).ToString("D4"); // Convertit l'entier en une chaîne de caractères remplie de zéros à gauche jusqu'à 4 chiffres
			return String::Format("Emp{0}", numStr); // Utilise la méthode String::Format() pour concaténer la chaîne "Emp" avec la chaîne numStr
		}
		void ecrireFichier(const std::string nomFichier, const std::string texte, const std::string texte2, int numexemp, int numexempldispo) {
			System::String^ filenamesp;
			System::String^ texte2str;
			System::String^ textestr;
			System::String^ numexemp1;
			System::String^ numexempldispo1;
			filenamesp = stringtostringspe(nomFichier);
			texte2str = stringtostringspe(texte);
			textestr = stringtostringspe(texte2);
			int n = countLines(nomFichier) - 1;
			System::IO::StreamWriter^ writer = gcnew System::IO::StreamWriter(filenamesp, true);
			String^ NumEmp;
			NumEmp = GetNumEmp(n);
			numexemp1 = numexemp.ToString();
			numexempldispo1 = numexempldispo.ToString();
			writer->WriteLine(NumEmp + "|" + textestr + "|" + texte2str + "|" + numexemp1 + "|" + numexempldispo1);
			writer->Close();

		}

		/////////////////////////////////////////// donne le numero des objets  /////////////////////////////////////////////////////////////

		int countLines(std::string  filename) {
			int count = 0;
			System::String^ filenamesp;
			filenamesp = stringtostringspe(filename);
			// Convertir le chemin du fichier en System::String^
			System::IO::StreamReader^ reader = gcnew System::IO::StreamReader(filenamesp);


			// Lire et afficher les lignes du fichier
			String^ line;
			while ((line = reader->ReadLine()) != nullptr)
			{
				// Afficher la ligne
				count++;
			}


			// Fermer le StreamReader
			reader->Close();
			return count;
		}

		/////////////////////////////////////////// return  un parametre de l'objet en entre le numero du champ  /////////////////////////////////////////////////////////////

		String^ Wordsoffieldline(String^ line, int numfield)
		{
			int ct = 0;
			// Lire le contenu du fichier ligne par ligne

			// Parcourir chaque ligne du fichier

			array<String^>^ words = line->Split('|');
			ct = 0;
			// Afficher chaque mot
			for each (String ^ word in words)
			{
				ct++;
				if (ct == numfield) {
					return word;
				}

			}


		}
		/////////////////////////////////////////// modifie une ligne /////////////////////////////////////////////////////////////

		String^ modifyline(String^ line, int numfield, String^ newword)
		{
			String^ line2 = "";
			int ct = 0;
			// Lire le contenu du fichier ligne par ligne

			// Parcourir chaque ligne du fichier

			array<String^>^ words = line->Split('|');
			ct = 0;
			// Afficher chaque mot
			for each (String ^ word in words)
			{
				ct++;

				if (ct == numfield) {
					line2 = line2 + newword + "|";
				}
				else {
					line2 = line2 + word;
					if (ct != 5) {
						line2 = line2 + "|";
					}
				}

			}
			return line2;

		}
		/////////////////////////////////////////// copie un fichier dans un autre /////////////////////////////////////////////////////////////

		void copyFileinFile(std::string mainfile, std::string filecopy)
		{
			System::String^ mainfile1;
			mainfile1 = stringtostringspe(mainfile);
			System::IO::StreamReader^ reader = gcnew System::IO::StreamReader(mainfile1);
			System::String^ filecopy2;
			filecopy2 = stringtostringspe(filecopy);
			System::IO::StreamWriter^ writer = gcnew System::IO::StreamWriter(filecopy2, false);
			{
				String^ line;
				while ((line = reader->ReadLine()) != nullptr)
				{
					writer->WriteLine(line);
				}
				reader->Close();
				writer->Close();
			}
		}
		///////////////////////////////////////////::modifie un parametre de l'objet /////////////////////////////////////////////////////////////

		void modifyWordInFile(std::string filenameam, std::string filenametemp, std::string keyword1, int numfieldofkeyword, std::string keyword2, int numfieldofkeyword2, int numfield, String^ newword)
		{
			System::String^ keyword;
			keyword = stringtostringspe(keyword1);
			System::String^ keywor;
			keywor = stringtostringspe(keyword2);
			System::String^ filenamesp1;
			filenamesp1 = stringtostringspe(filenameam);
			System::IO::StreamReader^ reader = gcnew System::IO::StreamReader(filenamesp1);
			System::String^ filenamesp2;
			filenamesp2 = stringtostringspe(filenametemp);
			System::IO::StreamWriter^ writer = gcnew System::IO::StreamWriter(filenamesp2, false);
			{
				String^ line;
				while ((line = reader->ReadLine()) != nullptr)
				{
					// Vérifier si le mot est présent dans la ligne
					if (Wordsoffieldline(line, numfieldofkeyword) == keyword && Wordsoffieldline(line, numfieldofkeyword2) == keywor)
					{
						writer->WriteLine(modifyline(line, numfield, newword));
					}
					else { writer->WriteLine(line); }
				}
				reader->Close();
				writer->Close();
				copyFileinFile(filenametemp, filenameam);

			}

		}
		///////////////////////////////////////////::return 1 si l'objet deja existe et 0 si non /////////////////////////////////////////////////////////////

		int recherchedelobjet(std::string filenameam, std::string keyword1, int numfieldofkeyword)
		{
			System::String^ keyword;
			keyword = stringtostringspe(keyword1);
			System::String^ filenamesp1;
			filenamesp1 = stringtostringspe(filenameam);
			System::IO::StreamReader^ reader = gcnew System::IO::StreamReader(filenamesp1);
			{
				String^ line;
				while ((line = reader->ReadLine()) != nullptr)
				{
					if (Wordsoffieldline(line, numfieldofkeyword) == keyword)
					{
						reader->Close();
						return 1;
					}
				}

			}
			reader->Close();
			return 0;

		}
		///////////////////////////////////////////::return la line ayant les attribut voulu /////////////////////////////////////////////////////////////
		System::String^ rechercheduligne(std::string filenameam, std::string keyword1, int numfieldofkeyword, std::string keyword2, int numfieldofkeyword2)
		{
			System::String^ keyword;
			keyword = stringtostringspe(keyword1);
			System::String^ keyword22;
			keyword22 = stringtostringspe(keyword2);
			System::String^ filenamesp1;
			filenamesp1 = stringtostringspe(filenameam);
			System::IO::StreamReader^ reader = gcnew System::IO::StreamReader(filenamesp1);
			{
				String^ line;
				while ((line = reader->ReadLine()) != nullptr)
				{
					if (Wordsoffieldline(line, numfieldofkeyword) == keyword && Wordsoffieldline(line, numfieldofkeyword2) == keyword22)
					{
						reader->Close();
						return line;
					}
				}

			}
			reader->Close();
			return "ce stagiaire est introuvable";

		}
#pragma endregion
	private: System::Void stagiaire2_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	 System::String^ mysString = this->textBox1->Text;
	std::string code0 = msclr::interop::marshal_as<std::string>(mysString); 
	System::String^ mys = this->textBox2->Text; 
	std::string code1 = msclr::interop::marshal_as<std::string>(mys); 
	this->label4->Text = rechercheduligne("Stagiaire.txt", code0, 2, code1, 3);
}
};
}
