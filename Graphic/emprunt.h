#pragma once

namespace ProjectXTEST {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for emprunt
	/// </summary>
	public ref class emprunt : public System::Windows::Forms::Form
	{
	public:
		emprunt(void)
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
		~emprunt()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:






	private: System::Windows::Forms::Label^ label2;






	public: System::Windows::Forms::Button^ button13;

	public:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label3;


	private:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(emprunt::typeid));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(-27, 77);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(29, 20);
			this->label2->TabIndex = 24;
			this->label2->Text = L"o :";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
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
			this->button13->Location = System::Drawing::Point(85, 365);
			this->button13->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(180, 45);
			this->button13->TabIndex = 19;
			this->button13->Text = L"         Add";
			this->button13->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &emprunt::button13_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(159, 76);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 13);
			this->label1->TabIndex = 40;
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(303, 1);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(40, 36);
			this->button2->TabIndex = 38;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &emprunt::button2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(113, 278);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(116, 84);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 37;
			this->pictureBox1->TabStop = false;
			// 
			// panel2
			// 
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->textBox2);
			this->panel2->Location = System::Drawing::Point(158, 90);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(185, 28);
			this->panel2->TabIndex = 36;
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
			this->textBox2->Size = System::Drawing::Size(183, 26);
			this->textBox2->TabIndex = 8;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label5->Location = System::Drawing::Point(12, 91);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(129, 20);
			this->label5->TabIndex = 35;
			this->label5->Text = L"Auteur de livre ";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Location = System::Drawing::Point(158, 44);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(185, 28);
			this->panel1->TabIndex = 34;
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
			this->textBox1->Size = System::Drawing::Size(183, 26);
			this->textBox1->TabIndex = 8;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label23->Location = System::Drawing::Point(12, 49);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(107, 20);
			this->label23->TabIndex = 33;
			this->label23->Text = L"Titre de livre";
			this->label23->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label6->Location = System::Drawing::Point(12, 139);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(110, 20);
			this->label6->TabIndex = 33;
			this->label6->Text = L"Nom stagière";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel3
			// 
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel3->Controls->Add(this->textBox3);
			this->panel3->Location = System::Drawing::Point(158, 135);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(185, 28);
			this->panel3->TabIndex = 34;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::Gray;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(0, 0);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(183, 26);
			this->textBox3->TabIndex = 8;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label7->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label7->Location = System::Drawing::Point(12, 187);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(136, 20);
			this->label7->TabIndex = 35;
			this->label7->Text = L"Prenom de livre ";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel4
			// 
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel4->Controls->Add(this->textBox4);
			this->panel4->Location = System::Drawing::Point(158, 185);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(185, 28);
			this->panel4->TabIndex = 36;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::Gray;
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(0, 0);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(183, 26);
			this->textBox4->TabIndex = 8;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(160, 167);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(0, 13);
			this->label8->TabIndex = 40;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(158, 216);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(0, 13);
			this->label9->TabIndex = 39;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Red;
			this->label10->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label10->Location = System::Drawing::Point(158, 216);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(0, 16);
			this->label10->TabIndex = 41;
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label11->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label11->Location = System::Drawing::Point(12, 239);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(117, 20);
			this->label11->TabIndex = 35;
			this->label11->Text = L"Date de retour";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel5
			// 
			this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel5->Controls->Add(this->textBox5);
			this->panel5->Location = System::Drawing::Point(158, 237);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(185, 28);
			this->panel5->TabIndex = 36;
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::Gray;
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(0, 0);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(183, 26);
			this->textBox5->TabIndex = 8;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(162, 120);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 13);
			this->label3->TabIndex = 42;
			// 
			// emprunt
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gray;
			this->ClientSize = System::Drawing::Size(347, 413);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button13);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"emprunt";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"emprunt";
			this->Load += gcnew System::EventHandler(this, &emprunt::emprunt_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
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
			String^ numStr = (n + 1).ToString("D3"); // Convertit l'entier en une chaîne de caractères remplie de zéros à gauche jusqu'à 4 chiffres
			return String::Format("Liv{0}", numStr); // Utilise la méthode String::Format() pour concaténer la chaîne "Emp" avec la chaîne numStr
		}
		void ecrireFichierE(const std::string nomFichier, const std::string titrelivre, const std::string auteurlivre, const std::string nomadherant, const std::string prenomadherant, const std::string dateretour) {
			System::String^ filenamesp;
			System::String^ titrelivrestr;
			System::String^ auteurlivrestr;
			System::String^ nomadherantstr;
			System::String^ prenomadherantstr;
			System::String^ dateretourstr;
			filenamesp = stringtostringspe(nomFichier);
			auteurlivrestr = stringtostringspe(auteurlivre);
			titrelivrestr = stringtostringspe(titrelivre);
			nomadherantstr = stringtostringspe(nomadherant);
			prenomadherantstr = stringtostringspe(prenomadherant);
			dateretourstr = stringtostringspe(dateretour);
			int n = countLines(nomFichier) - 1;
			System::IO::StreamWriter^ writer = gcnew System::IO::StreamWriter(filenamesp, true);
			String^ NumEmp;
			NumEmp = GetNumEmp(n);
			writer->WriteLine(NumEmp + "|" + auteurlivrestr + "|" + titrelivrestr + "|" + nomadherantstr + "|" + prenomadherantstr + "|"+dateretourstr);
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
					line2 = line2 + newword ;
					if (ct != 5) {
						line2 = line2 + "|";
					}
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
			return "ce livrre est introuvable";

		}

#pragma endregion
	private: System::Void emprunt_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
	private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
		System::String^ mysString = this->textBox1->Text;
		std::string code0 = msclr::interop::marshal_as<std::string>(mysString);
		System::String^ mys = this->textBox2->Text;
		std::string code1 = msclr::interop::marshal_as<std::string>(mys);
		System::String^ mys2 = this->textBox3->Text;
		std::string code2 = msclr::interop::marshal_as<std::string>(mys2);
		System::String^ mys3 = this->textBox4->Text;
		std::string code3 = msclr::interop::marshal_as<std::string>(mys3);
		System::String^ mys4 = this->textBox5->Text;
		std::string code4 = msclr::interop::marshal_as<std::string>(mys4);
		if (code0 != "" && code1 != "" && code2 != "" && code3 != "") 
		{
			if (rechercheduligne("Livre.txt", code0, 2, code1, 3) == "ce livrre est introuvable")
			{
				this->label1->Text = "ce livre n'existe pas";
			}
			if (rechercheduligne("Stagiaire.txt", code2, 2, code3, 3) == "ce livrre est introuvable")
			{
				this->label8->Text = "ce stagiaire n'existe pas";
			}
			if (rechercheduligne("Livre.txt", code0, 2, code1, 3) != "ce livrre est introuvable" && rechercheduligne("Stagiaire.txt", code2, 2, code3, 3) != "ce livrre est introuvable")
			{
				int number1 = convertStringToInt(Wordsoffieldline(rechercheduligne("Livre.txt", code0, 2, code1, 3), 5));
				if (number1 - 1 >= 0) {
					number1 = number1 - 1;
					String^ numberStr1 = number1.ToString();
					modifyWordInFile("Livre.txt", "Livre2.txt", code0, 2, code1, 3, 5, numberStr1);
					ecrireFichierE("Emprunt.txt", code0, code1, code2, code3, code4);
					this->Close();
				}

				if (number1 - 1 < 0) {
					this->label1->Text = "ce livre n'est pas disponible ";
				}

			}


		}


		/*if (code0 == "") { this->label1->Text = "entrer un nom du livre valide"; }
		if (code1 == "") { this->label3->Text = "entrer un nom d'auteur valide"; }
		if (code2 == "") { this->label8->Text = "entrer un nom de stagiaire valide"; }
		if (code3 == "") { this->label9->Text = "entrer un prenom de stagiaire valide"; }*/
}
};
}
