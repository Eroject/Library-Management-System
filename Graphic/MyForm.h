#pragma once
#include "MyForm1.h"
#include "BOOK2.h"
#include "stagiaire1.h"
#include "stagiaire2.h"
#include "emprunt.h"
#include "rendreunlivre.h"
#include <string.h>
#include <string>
#include <string>


namespace ProjectXTEST {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ pn_title_bar;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ pn_st_bar;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Panel^ pn_nav_bar;
	private: System::Windows::Forms::Panel^ panel12;
	private: System::Windows::Forms::Button^ btn_stag;
	private: System::Windows::Forms::Button^ btn_brrw;
	private: System::Windows::Forms::Button^ btn_bk;
	private: System::Windows::Forms::Button^ btn_st;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ pn_info;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ btn_home;
    private: System::Windows::Forms::Panel^ pn_home;
    private: System::Windows::Forms::Panel^ panel_books;
    private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel2;
    private: System::Windows::Forms::Panel^ panel10;
    private: System::Windows::Forms::Label^ label18;
    private: System::Windows::Forms::Label^ label10;
    private: System::Windows::Forms::Label^ label22;
    private: System::Windows::Forms::Label^ label23;
    private: System::Windows::Forms::PictureBox^ pictureBox7;
    private: System::Windows::Forms::Panel^ panel7;
    private: System::Windows::Forms::Button^ button13;
    private: System::Windows::Forms::Button^ button11;
    private: System::Windows::Forms::Button^ button14;
    private: System::Windows::Forms::Panel^ pn_stag;
    private: System::Windows::Forms::Panel^ panel19;
    private: System::Windows::Forms::Button^ button16;
    private: System::Windows::Forms::Button^ button15;
    private: System::Windows::Forms::Button^ button18;
    private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel4;
    private: System::Windows::Forms::Panel^ panel20;
    private: System::Windows::Forms::Label^ label49;
    private: System::Windows::Forms::Label^ label50;
    private: System::Windows::Forms::Label^ label51;
    private: System::Windows::Forms::Label^ label52;
    private: System::Windows::Forms::PictureBox^ pictureBox13;
    private: System::Windows::Forms::Panel^ panel18;
    private: System::Windows::Forms::Label^ label57;
    private: System::Windows::Forms::Label^ label58;
    private: System::Windows::Forms::Label^ label59;
    private: System::Windows::Forms::Label^ label60;
    private: System::Windows::Forms::PictureBox^ pictureBox15;
    private: System::Windows::Forms::Panel^ panel_home;
    private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
    private: System::Windows::Forms::Panel^ panel3;
    private: System::Windows::Forms::Label^ label9;
    private: System::Windows::Forms::Label^ label13;
    private: System::Windows::Forms::PictureBox^ pictureBox2;
    private: System::Windows::Forms::Panel^ panel4;
    private: System::Windows::Forms::Label^ label14;
    private: System::Windows::Forms::Label^ label15;
    private: System::Windows::Forms::PictureBox^ pictureBox3;
    private: System::Windows::Forms::Panel^ panel5;
    private: System::Windows::Forms::Label^ label16;
    private: System::Windows::Forms::Label^ label17;
    private: System::Windows::Forms::PictureBox^ pictureBox4;
    private: System::Windows::Forms::Panel^ panel2;
    private: System::Windows::Forms::Panel^ panel6;
    private: System::Windows::Forms::Panel^ pn_emprunt;



    private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel5;
    private: System::Windows::Forms::Panel^ panel26;
    private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::Label^ label68;
    private: System::Windows::Forms::Panel^ panel_borrow;
    private: System::Windows::Forms::Panel^ panel13;
    private: System::Windows::Forms::Button^ button6;
    private: System::Windows::Forms::Button^ button7;
    private: System::Windows::Forms::Button^ button8;
    private: System::Windows::Forms::Button^ button9;
    private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel3;
    private: System::Windows::Forms::Panel^ panel14;
    private: System::Windows::Forms::Label^ label33;
    private: System::Windows::Forms::Label^ label34;
    private: System::Windows::Forms::Label^ label35;
    private: System::Windows::Forms::Label^ label36;
    private: System::Windows::Forms::PictureBox^ pictureBox9;
    private: System::Windows::Forms::Panel^ panel15;
    private: System::Windows::Forms::Label^ label37;
    private: System::Windows::Forms::Label^ label38;
    private: System::Windows::Forms::Label^ label39;
    private: System::Windows::Forms::Label^ label40;
    private: System::Windows::Forms::PictureBox^ pictureBox10;
    private: System::Windows::Forms::Panel^ panel16;
    private: System::Windows::Forms::Label^ label41;
    private: System::Windows::Forms::Label^ label42;
    private: System::Windows::Forms::Label^ label43;
    private: System::Windows::Forms::Label^ label44;
    private: System::Windows::Forms::PictureBox^ pictureBox11;
    private: System::Windows::Forms::Panel^ panel17;
    private: System::Windows::Forms::Label^ label45;
    private: System::Windows::Forms::Label^ label46;
    private: System::Windows::Forms::Label^ label47;
    private: System::Windows::Forms::Label^ label48;
    private: System::Windows::Forms::PictureBox^ pictureBox12;
    private: System::Windows::Forms::Panel^ panel_borrow1;
    private: System::Windows::Forms::Label^ label11;
    private: System::Windows::Forms::Panel^ panel_student;
    private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::Panel^ panel8;
private: System::Windows::Forms::Button^ button12;
private: System::Windows::Forms::Panel^ panel25;
private: System::Windows::Forms::Button^ button20;
private: System::Windows::Forms::Button^ button23;
private: System::Windows::Forms::Button^ button17;


    protected:



















































































































	protected:

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
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
            this->pn_title_bar = (gcnew System::Windows::Forms::Panel());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->button5 = (gcnew System::Windows::Forms::Button());
            this->button4 = (gcnew System::Windows::Forms::Button());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->pn_st_bar = (gcnew System::Windows::Forms::Panel());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->pn_nav_bar = (gcnew System::Windows::Forms::Panel());
            this->panel12 = (gcnew System::Windows::Forms::Panel());
            this->btn_stag = (gcnew System::Windows::Forms::Button());
            this->btn_brrw = (gcnew System::Windows::Forms::Button());
            this->btn_bk = (gcnew System::Windows::Forms::Button());
            this->btn_st = (gcnew System::Windows::Forms::Button());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->pn_info = (gcnew System::Windows::Forms::Panel());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->button10 = (gcnew System::Windows::Forms::Button());
            this->btn_home = (gcnew System::Windows::Forms::Button());
            this->pn_home = (gcnew System::Windows::Forms::Panel());
            this->pn_stag = (gcnew System::Windows::Forms::Panel());
            this->flowLayoutPanel4 = (gcnew System::Windows::Forms::FlowLayoutPanel());
            this->panel20 = (gcnew System::Windows::Forms::Panel());
            this->label49 = (gcnew System::Windows::Forms::Label());
            this->label50 = (gcnew System::Windows::Forms::Label());
            this->label51 = (gcnew System::Windows::Forms::Label());
            this->label52 = (gcnew System::Windows::Forms::Label());
            this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
            this->panel18 = (gcnew System::Windows::Forms::Panel());
            this->label57 = (gcnew System::Windows::Forms::Label());
            this->label58 = (gcnew System::Windows::Forms::Label());
            this->label59 = (gcnew System::Windows::Forms::Label());
            this->label60 = (gcnew System::Windows::Forms::Label());
            this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
            this->panel19 = (gcnew System::Windows::Forms::Panel());
            this->button16 = (gcnew System::Windows::Forms::Button());
            this->button15 = (gcnew System::Windows::Forms::Button());
            this->button18 = (gcnew System::Windows::Forms::Button());
            this->pn_emprunt = (gcnew System::Windows::Forms::Panel());
            this->flowLayoutPanel5 = (gcnew System::Windows::Forms::FlowLayoutPanel());
            this->panel26 = (gcnew System::Windows::Forms::Panel());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->label68 = (gcnew System::Windows::Forms::Label());
            this->panel25 = (gcnew System::Windows::Forms::Panel());
            this->button17 = (gcnew System::Windows::Forms::Button());
            this->button20 = (gcnew System::Windows::Forms::Button());
            this->button23 = (gcnew System::Windows::Forms::Button());
            this->panel_home = (gcnew System::Windows::Forms::Panel());
            this->panel8 = (gcnew System::Windows::Forms::Panel());
            this->button12 = (gcnew System::Windows::Forms::Button());
            this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
            this->panel3 = (gcnew System::Windows::Forms::Panel());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->label13 = (gcnew System::Windows::Forms::Label());
            this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
            this->panel4 = (gcnew System::Windows::Forms::Panel());
            this->label14 = (gcnew System::Windows::Forms::Label());
            this->label15 = (gcnew System::Windows::Forms::Label());
            this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
            this->panel5 = (gcnew System::Windows::Forms::Panel());
            this->label16 = (gcnew System::Windows::Forms::Label());
            this->label17 = (gcnew System::Windows::Forms::Label());
            this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            this->panel6 = (gcnew System::Windows::Forms::Panel());
            this->panel_books = (gcnew System::Windows::Forms::Panel());
            this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
            this->panel10 = (gcnew System::Windows::Forms::Panel());
            this->label18 = (gcnew System::Windows::Forms::Label());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->label22 = (gcnew System::Windows::Forms::Label());
            this->label23 = (gcnew System::Windows::Forms::Label());
            this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
            this->panel7 = (gcnew System::Windows::Forms::Panel());
            this->button13 = (gcnew System::Windows::Forms::Button());
            this->button11 = (gcnew System::Windows::Forms::Button());
            this->button14 = (gcnew System::Windows::Forms::Button());
            this->panel_borrow = (gcnew System::Windows::Forms::Panel());
            this->panel13 = (gcnew System::Windows::Forms::Panel());
            this->button6 = (gcnew System::Windows::Forms::Button());
            this->button7 = (gcnew System::Windows::Forms::Button());
            this->button8 = (gcnew System::Windows::Forms::Button());
            this->button9 = (gcnew System::Windows::Forms::Button());
            this->flowLayoutPanel3 = (gcnew System::Windows::Forms::FlowLayoutPanel());
            this->panel14 = (gcnew System::Windows::Forms::Panel());
            this->label33 = (gcnew System::Windows::Forms::Label());
            this->label34 = (gcnew System::Windows::Forms::Label());
            this->label35 = (gcnew System::Windows::Forms::Label());
            this->label36 = (gcnew System::Windows::Forms::Label());
            this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
            this->panel15 = (gcnew System::Windows::Forms::Panel());
            this->label37 = (gcnew System::Windows::Forms::Label());
            this->label38 = (gcnew System::Windows::Forms::Label());
            this->label39 = (gcnew System::Windows::Forms::Label());
            this->label40 = (gcnew System::Windows::Forms::Label());
            this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
            this->panel16 = (gcnew System::Windows::Forms::Panel());
            this->label41 = (gcnew System::Windows::Forms::Label());
            this->label42 = (gcnew System::Windows::Forms::Label());
            this->label43 = (gcnew System::Windows::Forms::Label());
            this->label44 = (gcnew System::Windows::Forms::Label());
            this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
            this->panel17 = (gcnew System::Windows::Forms::Panel());
            this->label45 = (gcnew System::Windows::Forms::Label());
            this->label46 = (gcnew System::Windows::Forms::Label());
            this->label47 = (gcnew System::Windows::Forms::Label());
            this->label48 = (gcnew System::Windows::Forms::Label());
            this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
            this->panel_borrow1 = (gcnew System::Windows::Forms::Panel());
            this->label11 = (gcnew System::Windows::Forms::Label());
            this->panel_student = (gcnew System::Windows::Forms::Panel());
            this->label12 = (gcnew System::Windows::Forms::Label());
            this->pn_title_bar->SuspendLayout();
            this->pn_st_bar->SuspendLayout();
            this->pn_nav_bar->SuspendLayout();
            this->panel1->SuspendLayout();
            this->pn_info->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            this->pn_home->SuspendLayout();
            this->pn_stag->SuspendLayout();
            this->flowLayoutPanel4->SuspendLayout();
            this->panel20->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
            this->panel18->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
            this->panel19->SuspendLayout();
            this->pn_emprunt->SuspendLayout();
            this->flowLayoutPanel5->SuspendLayout();
            this->panel26->SuspendLayout();
            this->panel25->SuspendLayout();
            this->panel_home->SuspendLayout();
            this->panel8->SuspendLayout();
            this->flowLayoutPanel1->SuspendLayout();
            this->panel3->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
            this->panel4->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
            this->panel5->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
            this->panel2->SuspendLayout();
            this->panel_books->SuspendLayout();
            this->flowLayoutPanel2->SuspendLayout();
            this->panel10->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
            this->panel7->SuspendLayout();
            this->panel_borrow->SuspendLayout();
            this->panel13->SuspendLayout();
            this->flowLayoutPanel3->SuspendLayout();
            this->panel14->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
            this->panel15->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
            this->panel16->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
            this->panel17->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
            this->panel_borrow1->SuspendLayout();
            this->panel_student->SuspendLayout();
            this->SuspendLayout();
            // 
            // pn_title_bar
            // 
            this->pn_title_bar->BackColor = System::Drawing::Color::Gray;
            this->pn_title_bar->Controls->Add(this->label1);
            this->pn_title_bar->Controls->Add(this->button5);
            this->pn_title_bar->Controls->Add(this->button4);
            this->pn_title_bar->Controls->Add(this->button3);
            this->pn_title_bar->Controls->Add(this->button2);
            this->pn_title_bar->Controls->Add(this->button1);
            this->pn_title_bar->Dock = System::Windows::Forms::DockStyle::Top;
            this->pn_title_bar->Location = System::Drawing::Point(0, 0);
            this->pn_title_bar->Name = L"pn_title_bar";
            this->pn_title_bar->Size = System::Drawing::Size(830, 29);
            this->pn_title_bar->TabIndex = 1;
            // 
            // label1
            // 
            this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label1->AutoSize = true;
            this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label1->Location = System::Drawing::Point(362, 9);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(34, 13);
            this->label1->TabIndex = 1;
            this->label1->Text = L"library";
            // 
            // button5
            // 
            this->button5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
            this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
            this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->button5->FlatAppearance->BorderSize = 0;
            this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button5->Location = System::Drawing::Point(752, 0);
            this->button5->Name = L"button5";
            this->button5->Size = System::Drawing::Size(36, 26);
            this->button5->TabIndex = 0;
            this->button5->UseVisualStyleBackColor = true;
            // 
            // button4
            // 
            this->button4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
            this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
            this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->button4->FlatAppearance->BorderSize = 0;
            this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button4->Location = System::Drawing::Point(794, 0);
            this->button4->Name = L"button4";
            this->button4->Size = System::Drawing::Size(36, 26);
            this->button4->TabIndex = 0;
            this->button4->UseVisualStyleBackColor = true;
            // 
            // button3
            // 
            this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
            this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->button3->FlatAppearance->BorderSize = 0;
            this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button3->Location = System::Drawing::Point(84, 0);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(36, 26);
            this->button3->TabIndex = 0;
            this->button3->UseVisualStyleBackColor = true;
            this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
            // 
            // button2
            // 
            this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
            this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->button2->FlatAppearance->BorderSize = 0;
            this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button2->Location = System::Drawing::Point(42, 0);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(36, 26);
            this->button2->TabIndex = 0;
            this->button2->UseVisualStyleBackColor = true;
            this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
            // 
            // button1
            // 
            this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
            this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->button1->FlatAppearance->BorderSize = 0;
            this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button1->Location = System::Drawing::Point(0, 0);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(36, 26);
            this->button1->TabIndex = 0;
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
            // 
            // pn_st_bar
            // 
            this->pn_st_bar->BackColor = System::Drawing::Color::Gray;
            this->pn_st_bar->Controls->Add(this->label8);
            this->pn_st_bar->Controls->Add(this->label4);
            this->pn_st_bar->Controls->Add(this->label5);
            this->pn_st_bar->Dock = System::Windows::Forms::DockStyle::Bottom;
            this->pn_st_bar->Location = System::Drawing::Point(0, 418);
            this->pn_st_bar->Name = L"pn_st_bar";
            this->pn_st_bar->Size = System::Drawing::Size(830, 36);
            this->pn_st_bar->TabIndex = 2;
            // 
            // label8
            // 
            this->label8->Anchor = System::Windows::Forms::AnchorStyles::Left;
            this->label8->AutoSize = true;
            this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label8->Location = System::Drawing::Point(3, 9);
            this->label8->Name = L"label8";
            this->label8->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
            this->label8->Size = System::Drawing::Size(53, 17);
            this->label8->TabIndex = 1;
            this->label8->Text = L"V 1.0.0";
            // 
            // label4
            // 
            this->label4->Anchor = System::Windows::Forms::AnchorStyles::Right;
            this->label4->AutoSize = true;
            this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label4->ForeColor = System::Drawing::Color::Cyan;
            this->label4->Location = System::Drawing::Point(448, 8);
            this->label4->Name = L"label4";
            this->label4->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
            this->label4->Size = System::Drawing::Size(326, 22);
            this->label4->TabIndex = 1;
            this->label4->Text = L"AJALE  Saad / BOUZZAFOUR Mortada";
            // 
            // label5
            // 
            this->label5->Anchor = System::Windows::Forms::AnchorStyles::Right;
            this->label5->AutoSize = true;
            this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label5->ForeColor = System::Drawing::Color::Coral;
            this->label5->Location = System::Drawing::Point(403, 8);
            this->label5->Name = L"label5";
            this->label5->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
            this->label5->Size = System::Drawing::Size(43, 20);
            this->label5->TabIndex = 1;
            this->label5->Text = L": BY ";
            // 
            // pn_nav_bar
            // 
            this->pn_nav_bar->BackColor = System::Drawing::Color::Gray;
            this->pn_nav_bar->Controls->Add(this->panel12);
            this->pn_nav_bar->Controls->Add(this->btn_stag);
            this->pn_nav_bar->Controls->Add(this->btn_brrw);
            this->pn_nav_bar->Controls->Add(this->btn_bk);
            this->pn_nav_bar->Controls->Add(this->btn_st);
            this->pn_nav_bar->Controls->Add(this->panel1);
            this->pn_nav_bar->Controls->Add(this->btn_home);
            this->pn_nav_bar->Dock = System::Windows::Forms::DockStyle::Right;
            this->pn_nav_bar->Location = System::Drawing::Point(676, 29);
            this->pn_nav_bar->Name = L"pn_nav_bar";
            this->pn_nav_bar->Size = System::Drawing::Size(154, 389);
            this->pn_nav_bar->TabIndex = 3;
            // 
            // panel12
            // 
            this->panel12->Location = System::Drawing::Point(7, 330);
            this->panel12->Name = L"panel12";
            this->panel12->Size = System::Drawing::Size(140, 65);
            this->panel12->TabIndex = 4;
            // 
            // btn_stag
            // 
            this->btn_stag->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
            this->btn_stag->FlatAppearance->BorderSize = 0;
            this->btn_stag->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_stag->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->btn_stag->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_stag.Image")));
            this->btn_stag->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
            this->btn_stag->Location = System::Drawing::Point(6, 274);
            this->btn_stag->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
            this->btn_stag->Name = L"btn_stag";
            this->btn_stag->Size = System::Drawing::Size(141, 43);
            this->btn_stag->TabIndex = 3;
            this->btn_stag->Text = L"          stagiaire";
            this->btn_stag->UseVisualStyleBackColor = true;
            this->btn_stag->Click += gcnew System::EventHandler(this, &MyForm::btn_stag_Click);
            // 
            // btn_brrw
            // 
            this->btn_brrw->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
            this->btn_brrw->FlatAppearance->BorderSize = 0;
            this->btn_brrw->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_brrw->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->btn_brrw->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_brrw.Image")));
            this->btn_brrw->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
            this->btn_brrw->Location = System::Drawing::Point(6, 330);
            this->btn_brrw->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
            this->btn_brrw->Name = L"btn_brrw";
            this->btn_brrw->Size = System::Drawing::Size(141, 43);
            this->btn_brrw->TabIndex = 3;
            this->btn_brrw->Text = L"          Borrow";
            this->btn_brrw->UseVisualStyleBackColor = true;
            // 
            // btn_bk
            // 
            this->btn_bk->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
            this->btn_bk->FlatAppearance->BorderSize = 0;
            this->btn_bk->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_bk->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->btn_bk->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_bk.Image")));
            this->btn_bk->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
            this->btn_bk->Location = System::Drawing::Point(6, 220);
            this->btn_bk->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
            this->btn_bk->Name = L"btn_bk";
            this->btn_bk->Size = System::Drawing::Size(141, 43);
            this->btn_bk->TabIndex = 2;
            this->btn_bk->Text = L"         Books";
            this->btn_bk->UseVisualStyleBackColor = true;
            this->btn_bk->Click += gcnew System::EventHandler(this, &MyForm::btn_bk_Click);
            // 
            // btn_st
            // 
            this->btn_st->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
            this->btn_st->FlatAppearance->BorderSize = 0;
            this->btn_st->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_st->ForeColor = System::Drawing::Color::Transparent;
            this->btn_st->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_st.Image")));
            this->btn_st->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
            this->btn_st->Location = System::Drawing::Point(6, 166);
            this->btn_st->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
            this->btn_st->Name = L"btn_st";
            this->btn_st->Size = System::Drawing::Size(141, 43);
            this->btn_st->TabIndex = 1;
            this->btn_st->Text = L"          emprunt";
            this->btn_st->UseVisualStyleBackColor = true;
            this->btn_st->Click += gcnew System::EventHandler(this, &MyForm::btn_st_Click);
            // 
            // panel1
            // 
            this->panel1->BackColor = System::Drawing::Color::DimGray;
            this->panel1->Controls->Add(this->pn_info);
            this->panel1->Controls->Add(this->button10);
            this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
            this->panel1->Location = System::Drawing::Point(0, 0);
            this->panel1->Name = L"panel1";
            this->panel1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
            this->panel1->Size = System::Drawing::Size(154, 95);
            this->panel1->TabIndex = 0;
            // 
            // pn_info
            // 
            this->pn_info->Controls->Add(this->label3);
            this->pn_info->Controls->Add(this->label2);
            this->pn_info->Controls->Add(this->pictureBox1);
            this->pn_info->Location = System::Drawing::Point(35, 4);
            this->pn_info->Name = L"pn_info";
            this->pn_info->RightToLeft = System::Windows::Forms::RightToLeft::No;
            this->pn_info->Size = System::Drawing::Size(112, 87);
            this->pn_info->TabIndex = 2;
            // 
            // label3
            // 
            this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label3->AutoSize = true;
            this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->ForeColor = System::Drawing::Color::Cyan;
            this->label3->Location = System::Drawing::Point(13, 75);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(33, 9);
            this->label3->TabIndex = 2;
            this->label3->Text = L"Director";
            // 
            // label2
            // 
            this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->ForeColor = System::Drawing::Color::Coral;
            this->label2->Location = System::Drawing::Point(38, 55);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(51, 16);
            this->label2->TabIndex = 3;
            this->label2->Text = L"AJALE ";
            // 
            // pictureBox1
            // 
            this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
            this->pictureBox1->Location = System::Drawing::Point(10, 0);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(97, 47);
            this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox1->TabIndex = 4;
            this->pictureBox1->TabStop = false;
            // 
            // button10
            // 
            this->button10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button10.BackgroundImage")));
            this->button10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->button10->FlatAppearance->BorderSize = 0;
            this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button10->Location = System::Drawing::Point(2, 3);
            this->button10->Name = L"button10";
            this->button10->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
            this->button10->Size = System::Drawing::Size(36, 26);
            this->button10->TabIndex = 0;
            this->button10->UseVisualStyleBackColor = true;
            this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
            // 
            // btn_home
            // 
            this->btn_home->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
            this->btn_home->FlatAppearance->BorderSize = 0;
            this->btn_home->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btn_home->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btn_home->ForeColor = System::Drawing::Color::Transparent;
            this->btn_home->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_home.Image")));
            this->btn_home->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
            this->btn_home->Location = System::Drawing::Point(6, 112);
            this->btn_home->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
            this->btn_home->Name = L"btn_home";
            this->btn_home->Size = System::Drawing::Size(141, 43);
            this->btn_home->TabIndex = 0;
            this->btn_home->Text = L"         Home";
            this->btn_home->UseVisualStyleBackColor = true;
            this->btn_home->Click += gcnew System::EventHandler(this, &MyForm::btn_home_Click);
            // 
            // pn_home
            // 
            this->pn_home->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->pn_home->Controls->Add(this->panel_books);
            this->pn_home->Controls->Add(this->pn_stag);
            this->pn_home->Controls->Add(this->pn_emprunt);
            this->pn_home->Controls->Add(this->panel_home);
            this->pn_home->Controls->Add(this->panel_borrow);
            this->pn_home->Controls->Add(this->panel_borrow1);
            this->pn_home->Controls->Add(this->panel_student);
            this->pn_home->Dock = System::Windows::Forms::DockStyle::Fill;
            this->pn_home->Location = System::Drawing::Point(0, 29);
            this->pn_home->Name = L"pn_home";
            this->pn_home->Size = System::Drawing::Size(676, 389);
            this->pn_home->TabIndex = 4;
            // 
            // pn_stag
            // 
            this->pn_stag->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->pn_stag->Controls->Add(this->flowLayoutPanel4);
            this->pn_stag->Controls->Add(this->panel19);
            this->pn_stag->Dock = System::Windows::Forms::DockStyle::Fill;
            this->pn_stag->Location = System::Drawing::Point(0, 0);
            this->pn_stag->Name = L"pn_stag";
            this->pn_stag->Size = System::Drawing::Size(676, 389);
            this->pn_stag->TabIndex = 9;
            // 
            // flowLayoutPanel4
            // 
            this->flowLayoutPanel4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->flowLayoutPanel4->AutoScroll = true;
            this->flowLayoutPanel4->Controls->Add(this->panel20);
            this->flowLayoutPanel4->Controls->Add(this->panel18);
            this->flowLayoutPanel4->Location = System::Drawing::Point(0, 0);
            this->flowLayoutPanel4->Name = L"flowLayoutPanel4";
            this->flowLayoutPanel4->Size = System::Drawing::Size(676, 290);
            this->flowLayoutPanel4->TabIndex = 11;
            // 
            // panel20
            // 
            this->panel20->BackColor = System::Drawing::Color::Gray;
            this->panel20->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel20->Controls->Add(this->label49);
            this->panel20->Controls->Add(this->label50);
            this->panel20->Controls->Add(this->label51);
            this->panel20->Controls->Add(this->label52);
            this->panel20->Controls->Add(this->pictureBox13);
            this->panel20->Location = System::Drawing::Point(10, 10);
            this->panel20->Margin = System::Windows::Forms::Padding(10);
            this->panel20->Name = L"panel20";
            this->panel20->Size = System::Drawing::Size(219, 129);
            this->panel20->TabIndex = 2;
            // 
            // label49
            // 
            this->label49->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label49->AutoSize = true;
            this->label49->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label49->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label49->Location = System::Drawing::Point(103, 68);
            this->label49->Name = L"label49";
            this->label49->RightToLeft = System::Windows::Forms::RightToLeft::No;
            this->label49->Size = System::Drawing::Size(120, 20);
            this->label49->TabIndex = 3;
            this->label49->Text = L"Id:Adh_St001";
            // 
            // label50
            // 
            this->label50->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label50->AutoSize = true;
            this->label50->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label50->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label50->Location = System::Drawing::Point(102, 40);
            this->label50->Name = L"label50";
            this->label50->RightToLeft = System::Windows::Forms::RightToLeft::No;
            this->label50->Size = System::Drawing::Size(121, 20);
            this->label50->TabIndex = 3;
            this->label50->Text = L"Prénom : Saad";
            // 
            // label51
            // 
            this->label51->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label51->AutoSize = true;
            this->label51->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label51->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label51->Location = System::Drawing::Point(103, 10);
            this->label51->Name = L"label51";
            this->label51->RightToLeft = System::Windows::Forms::RightToLeft::No;
            this->label51->Size = System::Drawing::Size(123, 20);
            this->label51->TabIndex = 3;
            this->label51->Text = L"nom : AJALE ";
            // 
            // label52
            // 
            this->label52->AutoSize = true;
            this->label52->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label52->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label52->Location = System::Drawing::Point(60, 98);
            this->label52->Name = L"label52";
            this->label52->Size = System::Drawing::Size(86, 20);
            this->label52->TabIndex = 2;
            this->label52->Text = L"stagiaire 1";
            this->label52->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // pictureBox13
            // 
            this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.Image")));
            this->pictureBox13->Location = System::Drawing::Point(0, 8);
            this->pictureBox13->Name = L"pictureBox13";
            this->pictureBox13->Size = System::Drawing::Size(97, 76);
            this->pictureBox13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox13->TabIndex = 1;
            this->pictureBox13->TabStop = false;
            // 
            // panel18
            // 
            this->panel18->BackColor = System::Drawing::Color::Gray;
            this->panel18->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel18->Controls->Add(this->label57);
            this->panel18->Controls->Add(this->label58);
            this->panel18->Controls->Add(this->label59);
            this->panel18->Controls->Add(this->label60);
            this->panel18->Controls->Add(this->pictureBox15);
            this->panel18->Location = System::Drawing::Point(249, 10);
            this->panel18->Margin = System::Windows::Forms::Padding(10);
            this->panel18->Name = L"panel18";
            this->panel18->Size = System::Drawing::Size(219, 129);
            this->panel18->TabIndex = 2;
            // 
            // label57
            // 
            this->label57->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label57->AutoSize = true;
            this->label57->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label57->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label57->Location = System::Drawing::Point(104, 68);
            this->label57->Name = L"label57";
            this->label57->RightToLeft = System::Windows::Forms::RightToLeft::No;
            this->label57->Size = System::Drawing::Size(120, 20);
            this->label57->TabIndex = 3;
            this->label57->Text = L"Id:Adh_St002";
            // 
            // label58
            // 
            this->label58->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label58->AutoSize = true;
            this->label58->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label58->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label58->Location = System::Drawing::Point(102, 40);
            this->label58->Name = L"label58";
            this->label58->RightToLeft = System::Windows::Forms::RightToLeft::No;
            this->label58->Size = System::Drawing::Size(124, 20);
            this->label58->TabIndex = 3;
            this->label58->Text = L"Prénom : Mota";
            // 
            // label59
            // 
            this->label59->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label59->AutoSize = true;
            this->label59->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label59->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label59->Location = System::Drawing::Point(103, 10);
            this->label59->Name = L"label59";
            this->label59->RightToLeft = System::Windows::Forms::RightToLeft::No;
            this->label59->Size = System::Drawing::Size(112, 20);
            this->label59->TabIndex = 3;
            this->label59->Text = L"nom : BOUZ";
            // 
            // label60
            // 
            this->label60->AutoSize = true;
            this->label60->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label60->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label60->Location = System::Drawing::Point(60, 98);
            this->label60->Name = L"label60";
            this->label60->Size = System::Drawing::Size(86, 20);
            this->label60->TabIndex = 2;
            this->label60->Text = L"stagiaire 2";
            this->label60->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // pictureBox15
            // 
            this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.Image")));
            this->pictureBox15->Location = System::Drawing::Point(0, 8);
            this->pictureBox15->Name = L"pictureBox15";
            this->pictureBox15->Size = System::Drawing::Size(97, 76);
            this->pictureBox15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox15->TabIndex = 1;
            this->pictureBox15->TabStop = false;
            // 
            // panel19
            // 
            this->panel19->Controls->Add(this->button16);
            this->panel19->Controls->Add(this->button15);
            this->panel19->Controls->Add(this->button18);
            this->panel19->Dock = System::Windows::Forms::DockStyle::Fill;
            this->panel19->Location = System::Drawing::Point(0, 0);
            this->panel19->Name = L"panel19";
            this->panel19->Size = System::Drawing::Size(676, 389);
            this->panel19->TabIndex = 10;
            // 
            // button16
            // 
            this->button16->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
            this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button16->ForeColor = System::Drawing::Color::Silver;
            this->button16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button16.Image")));
            this->button16->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
            this->button16->Location = System::Drawing::Point(274, 298);
            this->button16->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
            this->button16->Name = L"button16";
            this->button16->Size = System::Drawing::Size(128, 90);
            this->button16->TabIndex = 7;
            this->button16->Text = L"actualiser";
            this->button16->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
            this->button16->UseVisualStyleBackColor = true;
            this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
            // 
            // button15
            // 
            this->button15->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
            this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button15->ForeColor = System::Drawing::Color::Silver;
            this->button15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button15.Image")));
            this->button15->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
            this->button15->Location = System::Drawing::Point(106, 298);
            this->button15->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
            this->button15->Name = L"button15";
            this->button15->Size = System::Drawing::Size(128, 90);
            this->button15->TabIndex = 3;
            this->button15->Text = L"chercher";
            this->button15->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
            this->button15->UseVisualStyleBackColor = true;
            this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
            // 
            // button18
            // 
            this->button18->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
            this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button18->ForeColor = System::Drawing::Color::Silver;
            this->button18->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button18.Image")));
            this->button18->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
            this->button18->Location = System::Drawing::Point(442, 298);
            this->button18->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
            this->button18->Name = L"button18";
            this->button18->Size = System::Drawing::Size(128, 90);
            this->button18->TabIndex = 6;
            this->button18->Text = L"Add";
            this->button18->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
            this->button18->UseVisualStyleBackColor = true;
            this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
            // 
            // pn_emprunt
            // 
            this->pn_emprunt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->pn_emprunt->Controls->Add(this->flowLayoutPanel5);
            this->pn_emprunt->Controls->Add(this->panel25);
            this->pn_emprunt->Dock = System::Windows::Forms::DockStyle::Fill;
            this->pn_emprunt->Location = System::Drawing::Point(0, 0);
            this->pn_emprunt->Name = L"pn_emprunt";
            this->pn_emprunt->Size = System::Drawing::Size(676, 389);
            this->pn_emprunt->TabIndex = 10;
            // 
            // flowLayoutPanel5
            // 
            this->flowLayoutPanel5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->flowLayoutPanel5->AutoScroll = true;
            this->flowLayoutPanel5->Controls->Add(this->panel26);
            this->flowLayoutPanel5->Location = System::Drawing::Point(0, 0);
            this->flowLayoutPanel5->Name = L"flowLayoutPanel5";
            this->flowLayoutPanel5->Size = System::Drawing::Size(676, 290);
            this->flowLayoutPanel5->TabIndex = 11;
            // 
            // panel26
            // 
            this->panel26->BackColor = System::Drawing::Color::Gray;
            this->panel26->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel26->Controls->Add(this->label7);
            this->panel26->Controls->Add(this->label6);
            this->panel26->Controls->Add(this->label68);
            this->panel26->Location = System::Drawing::Point(10, 10);
            this->panel26->Margin = System::Windows::Forms::Padding(10);
            this->panel26->Name = L"panel26";
            this->panel26->Size = System::Drawing::Size(219, 129);
            this->panel26->TabIndex = 2;
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label7->Location = System::Drawing::Point(11, 48);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(164, 20);
            this->label7->TabIndex = 2;
            this->label7->Text = L"Livre: Les misérable";
            this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label6->Location = System::Drawing::Point(11, 83);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(192, 20);
            this->label6->TabIndex = 2;
            this->label6->Text = L"Id stagiaire: Adh_St001";
            this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label68
            // 
            this->label68->AutoSize = true;
            this->label68->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label68->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label68->Location = System::Drawing::Point(10, 10);
            this->label68->Name = L"label68";
            this->label68->Size = System::Drawing::Size(201, 20);
            this->label68->TabIndex = 2;
            this->label68->Text = L"Code d\'emprunt: EM001";
            this->label68->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // panel25
            // 
            this->panel25->Controls->Add(this->button17);
            this->panel25->Controls->Add(this->button20);
            this->panel25->Controls->Add(this->button23);
            this->panel25->Dock = System::Windows::Forms::DockStyle::Fill;
            this->panel25->Location = System::Drawing::Point(0, 0);
            this->panel25->Name = L"panel25";
            this->panel25->Size = System::Drawing::Size(676, 389);
            this->panel25->TabIndex = 10;
            // 
            // button17
            // 
            this->button17->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
            this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button17->ForeColor = System::Drawing::Color::Silver;
            this->button17->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button17.Image")));
            this->button17->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
            this->button17->Location = System::Drawing::Point(448, 298);
            this->button17->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
            this->button17->Name = L"button17";
            this->button17->Size = System::Drawing::Size(128, 91);
            this->button17->TabIndex = 7;
            this->button17->Text = L"Rendre un livre";
            this->button17->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
            this->button17->UseVisualStyleBackColor = true;
            this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
            // 
            // button20
            // 
            this->button20->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
            this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button20->ForeColor = System::Drawing::Color::Silver;
            this->button20->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button20.Image")));
            this->button20->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
            this->button20->Location = System::Drawing::Point(274, 299);
            this->button20->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
            this->button20->Name = L"button20";
            this->button20->Size = System::Drawing::Size(128, 90);
            this->button20->TabIndex = 6;
            this->button20->Text = L"actualiser";
            this->button20->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
            this->button20->UseVisualStyleBackColor = true;
            this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
            // 
            // button23
            // 
            this->button23->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
            this->button23->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button23->ForeColor = System::Drawing::Color::Silver;
            this->button23->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button23.Image")));
            this->button23->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
            this->button23->Location = System::Drawing::Point(116, 299);
            this->button23->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
            this->button23->Name = L"button23";
            this->button23->Size = System::Drawing::Size(128, 90);
            this->button23->TabIndex = 6;
            this->button23->Text = L"emprunter";
            this->button23->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
            this->button23->UseVisualStyleBackColor = true;
            this->button23->Click += gcnew System::EventHandler(this, &MyForm::button23_Click);
            // 
            // panel_home
            // 
            this->panel_home->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->panel_home->Controls->Add(this->panel8);
            this->panel_home->Controls->Add(this->flowLayoutPanel1);
            this->panel_home->Controls->Add(this->panel2);
            this->panel_home->Dock = System::Windows::Forms::DockStyle::Fill;
            this->panel_home->Location = System::Drawing::Point(0, 0);
            this->panel_home->Name = L"panel_home";
            this->panel_home->Size = System::Drawing::Size(676, 389);
            this->panel_home->TabIndex = 7;
            // 
            // panel8
            // 
            this->panel8->Controls->Add(this->button12);
            this->panel8->Dock = System::Windows::Forms::DockStyle::Fill;
            this->panel8->Location = System::Drawing::Point(0, 290);
            this->panel8->Name = L"panel8";
            this->panel8->Size = System::Drawing::Size(676, 99);
            this->panel8->TabIndex = 11;
            // 
            // button12
            // 
            this->button12->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
            this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button12->ForeColor = System::Drawing::Color::Silver;
            this->button12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button12.Image")));
            this->button12->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
            this->button12->Location = System::Drawing::Point(260, 8);
            this->button12->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
            this->button12->Name = L"button12";
            this->button12->Size = System::Drawing::Size(128, 90);
            this->button12->TabIndex = 6;
            this->button12->Text = L"actualiser";
            this->button12->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
            this->button12->UseVisualStyleBackColor = true;
            this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
            // 
            // flowLayoutPanel1
            // 
            this->flowLayoutPanel1->Controls->Add(this->panel3);
            this->flowLayoutPanel1->Controls->Add(this->panel4);
            this->flowLayoutPanel1->Controls->Add(this->panel5);
            this->flowLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Top;
            this->flowLayoutPanel1->Location = System::Drawing::Point(0, 0);
            this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
            this->flowLayoutPanel1->Size = System::Drawing::Size(676, 290);
            this->flowLayoutPanel1->TabIndex = 9;
            this->flowLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::flowLayoutPanel1_Paint);
            // 
            // panel3
            // 
            this->panel3->BackColor = System::Drawing::Color::Gray;
            this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel3->Controls->Add(this->label9);
            this->panel3->Controls->Add(this->label13);
            this->panel3->Controls->Add(this->pictureBox2);
            this->panel3->Location = System::Drawing::Point(10, 10);
            this->panel3->Margin = System::Windows::Forms::Padding(10);
            this->panel3->Name = L"panel3";
            this->panel3->Size = System::Drawing::Size(167, 98);
            this->panel3->TabIndex = 0;
            // 
            // label9
            // 
            this->label9->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label9->AutoSize = true;
            this->label9->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label9->Location = System::Drawing::Point(2, 4);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(19, 20);
            this->label9->TabIndex = 3;
            this->label9->Text = L"7";
            // 
            // label13
            // 
            this->label13->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label13->AutoSize = true;
            this->label13->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label13->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label13->Location = System::Drawing::Point(11, 67);
            this->label13->Name = L"label13";
            this->label13->Size = System::Drawing::Size(158, 20);
            this->label13->TabIndex = 2;
            this->label13->Text = L"nombre de stagiaire";
            // 
            // pictureBox2
            // 
            this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
            this->pictureBox2->Location = System::Drawing::Point(87, 3);
            this->pictureBox2->Name = L"pictureBox2";
            this->pictureBox2->Size = System::Drawing::Size(77, 56);
            this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox2->TabIndex = 1;
            this->pictureBox2->TabStop = false;
            // 
            // panel4
            // 
            this->panel4->BackColor = System::Drawing::Color::Gray;
            this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel4->Controls->Add(this->label14);
            this->panel4->Controls->Add(this->label15);
            this->panel4->Controls->Add(this->pictureBox3);
            this->panel4->Location = System::Drawing::Point(197, 10);
            this->panel4->Margin = System::Windows::Forms::Padding(10);
            this->panel4->Name = L"panel4";
            this->panel4->Size = System::Drawing::Size(167, 98);
            this->panel4->TabIndex = 1;
            // 
            // label14
            // 
            this->label14->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label14->AutoSize = true;
            this->label14->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label14->Location = System::Drawing::Point(2, 4);
            this->label14->Name = L"label14";
            this->label14->Size = System::Drawing::Size(29, 20);
            this->label14->TabIndex = 3;
            this->label14->Text = L"15";
            // 
            // label15
            // 
            this->label15->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label15->AutoSize = true;
            this->label15->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label15->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label15->Location = System::Drawing::Point(11, 67);
            this->label15->Name = L"label15";
            this->label15->Size = System::Drawing::Size(144, 20);
            this->label15->TabIndex = 2;
            this->label15->Text = L"nombre des livres";
            // 
            // pictureBox3
            // 
            this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
            this->pictureBox3->Location = System::Drawing::Point(87, 3);
            this->pictureBox3->Name = L"pictureBox3";
            this->pictureBox3->Size = System::Drawing::Size(77, 56);
            this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox3->TabIndex = 1;
            this->pictureBox3->TabStop = false;
            // 
            // panel5
            // 
            this->panel5->BackColor = System::Drawing::Color::Gray;
            this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel5->Controls->Add(this->label16);
            this->panel5->Controls->Add(this->label17);
            this->panel5->Controls->Add(this->pictureBox4);
            this->panel5->Location = System::Drawing::Point(384, 10);
            this->panel5->Margin = System::Windows::Forms::Padding(10);
            this->panel5->Name = L"panel5";
            this->panel5->Size = System::Drawing::Size(167, 98);
            this->panel5->TabIndex = 2;
            // 
            // label16
            // 
            this->label16->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label16->AutoSize = true;
            this->label16->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label16->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label16->Location = System::Drawing::Point(2, 4);
            this->label16->Name = L"label16";
            this->label16->Size = System::Drawing::Size(29, 20);
            this->label16->TabIndex = 3;
            this->label16->Text = L"10";
            // 
            // label17
            // 
            this->label17->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label17->AutoSize = true;
            this->label17->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label17->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label17->Location = System::Drawing::Point(-5, 68);
            this->label17->Name = L"label17";
            this->label17->Size = System::Drawing::Size(174, 20);
            this->label17->TabIndex = 2;
            this->label17->Text = L"nombre des emprunts";
            // 
            // pictureBox4
            // 
            this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
            this->pictureBox4->Location = System::Drawing::Point(87, 3);
            this->pictureBox4->Name = L"pictureBox4";
            this->pictureBox4->Size = System::Drawing::Size(77, 56);
            this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox4->TabIndex = 1;
            this->pictureBox4->TabStop = false;
            // 
            // panel2
            // 
            this->panel2->Controls->Add(this->panel6);
            this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
            this->panel2->Location = System::Drawing::Point(0, 0);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(676, 389);
            this->panel2->TabIndex = 3;
            // 
            // panel6
            // 
            this->panel6->Dock = System::Windows::Forms::DockStyle::Fill;
            this->panel6->Location = System::Drawing::Point(0, 0);
            this->panel6->Name = L"panel6";
            this->panel6->Size = System::Drawing::Size(676, 389);
            this->panel6->TabIndex = 3;
            // 
            // panel_books
            // 
            this->panel_books->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->panel_books->Controls->Add(this->flowLayoutPanel2);
            this->panel_books->Controls->Add(this->panel7);
            this->panel_books->Dock = System::Windows::Forms::DockStyle::Fill;
            this->panel_books->Location = System::Drawing::Point(0, 0);
            this->panel_books->Name = L"panel_books";
            this->panel_books->Size = System::Drawing::Size(676, 389);
            this->panel_books->TabIndex = 5;
            // 
            // flowLayoutPanel2
            // 
            this->flowLayoutPanel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->flowLayoutPanel2->AutoScroll = true;
            this->flowLayoutPanel2->Controls->Add(this->panel10);
            this->flowLayoutPanel2->Location = System::Drawing::Point(0, 0);
            this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
            this->flowLayoutPanel2->Size = System::Drawing::Size(676, 290);
            this->flowLayoutPanel2->TabIndex = 11;
            // 
            // panel10
            // 
            this->panel10->BackColor = System::Drawing::Color::Gray;
            this->panel10->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel10->Controls->Add(this->label18);
            this->panel10->Controls->Add(this->label10);
            this->panel10->Controls->Add(this->label22);
            this->panel10->Controls->Add(this->label23);
            this->panel10->Controls->Add(this->pictureBox7);
            this->panel10->Location = System::Drawing::Point(10, 10);
            this->panel10->Margin = System::Windows::Forms::Padding(10);
            this->panel10->Name = L"panel10";
            this->panel10->Size = System::Drawing::Size(262, 129);
            this->panel10->TabIndex = 2;
            // 
            // label18
            // 
            this->label18->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label18->AutoSize = true;
            this->label18->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label18->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label18->Location = System::Drawing::Point(124, 67);
            this->label18->Name = L"label18";
            this->label18->RightToLeft = System::Windows::Forms::RightToLeft::No;
            this->label18->Size = System::Drawing::Size(121, 20);
            this->label18->TabIndex = 3;
            this->label18->Text = L"Auteur : Hugo";
            // 
            // label10
            // 
            this->label10->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label10->AutoSize = true;
            this->label10->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label10->ForeColor = System::Drawing::Color::Tomato;
            this->label10->Location = System::Drawing::Point(125, 39);
            this->label10->Name = L"label10";
            this->label10->RightToLeft = System::Windows::Forms::RightToLeft::No;
            this->label10->Size = System::Drawing::Size(137, 20);
            this->label10->TabIndex = 3;
            this->label10->Text = L"Nom: miserables";
            // 
            // label22
            // 
            this->label22->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label22->AutoSize = true;
            this->label22->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label22->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label22->Location = System::Drawing::Point(126, 10);
            this->label22->Name = L"label22";
            this->label22->RightToLeft = System::Windows::Forms::RightToLeft::No;
            this->label22->Size = System::Drawing::Size(142, 20);
            this->label22->TabIndex = 3;
            this->label22->Text = L"Code : Liv_0001";
            // 
            // label23
            // 
            this->label23->AutoSize = true;
            this->label23->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label23->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label23->Location = System::Drawing::Point(96, 98);
            this->label23->Name = L"label23";
            this->label23->Size = System::Drawing::Size(50, 20);
            this->label23->TabIndex = 2;
            this->label23->Text = L"Livre";
            this->label23->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // pictureBox7
            // 
            this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
            this->pictureBox7->Location = System::Drawing::Point(3, 8);
            this->pictureBox7->Name = L"pictureBox7";
            this->pictureBox7->Size = System::Drawing::Size(106, 72);
            this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox7->TabIndex = 1;
            this->pictureBox7->TabStop = false;
            // 
            // panel7
            // 
            this->panel7->Controls->Add(this->button13);
            this->panel7->Controls->Add(this->button11);
            this->panel7->Controls->Add(this->button14);
            this->panel7->Dock = System::Windows::Forms::DockStyle::Fill;
            this->panel7->Location = System::Drawing::Point(0, 0);
            this->panel7->Name = L"panel7";
            this->panel7->Size = System::Drawing::Size(676, 389);
            this->panel7->TabIndex = 10;
            // 
            // button13
            // 
            this->button13->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
            this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button13->ForeColor = System::Drawing::Color::Silver;
            this->button13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button13.Image")));
            this->button13->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
            this->button13->Location = System::Drawing::Point(280, 298);
            this->button13->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
            this->button13->Name = L"button13";
            this->button13->Size = System::Drawing::Size(116, 85);
            this->button13->TabIndex = 9;
            this->button13->Text = L"actualiser";
            this->button13->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
            this->button13->UseVisualStyleBackColor = true;
            this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
            // 
            // button11
            // 
            this->button11->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
            this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button11->ForeColor = System::Drawing::Color::Silver;
            this->button11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button11.Image")));
            this->button11->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
            this->button11->Location = System::Drawing::Point(103, 298);
            this->button11->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
            this->button11->Name = L"button11";
            this->button11->Size = System::Drawing::Size(116, 85);
            this->button11->TabIndex = 3;
            this->button11->Text = L"chercher";
            this->button11->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
            this->button11->UseVisualStyleBackColor = true;
            this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
            // 
            // button14
            // 
            this->button14->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
            this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button14->ForeColor = System::Drawing::Color::Silver;
            this->button14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button14.Image")));
            this->button14->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
            this->button14->Location = System::Drawing::Point(457, 299);
            this->button14->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
            this->button14->Name = L"button14";
            this->button14->Size = System::Drawing::Size(116, 85);
            this->button14->TabIndex = 6;
            this->button14->Text = L"Add";
            this->button14->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
            this->button14->UseVisualStyleBackColor = true;
            this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
            // 
            // panel_borrow
            // 
            this->panel_borrow->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->panel_borrow->Controls->Add(this->panel13);
            this->panel_borrow->Controls->Add(this->flowLayoutPanel3);
            this->panel_borrow->Dock = System::Windows::Forms::DockStyle::Fill;
            this->panel_borrow->Location = System::Drawing::Point(0, 0);
            this->panel_borrow->Name = L"panel_borrow";
            this->panel_borrow->Size = System::Drawing::Size(676, 389);
            this->panel_borrow->TabIndex = 8;
            // 
            // panel13
            // 
            this->panel13->Controls->Add(this->button6);
            this->panel13->Controls->Add(this->button7);
            this->panel13->Controls->Add(this->button8);
            this->panel13->Controls->Add(this->button9);
            this->panel13->Dock = System::Windows::Forms::DockStyle::Fill;
            this->panel13->Location = System::Drawing::Point(0, 304);
            this->panel13->Name = L"panel13";
            this->panel13->Size = System::Drawing::Size(676, 85);
            this->panel13->TabIndex = 10;
            // 
            // button6
            // 
            this->button6->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
            this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button6->ForeColor = System::Drawing::Color::Silver;
            this->button6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.Image")));
            this->button6->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
            this->button6->Location = System::Drawing::Point(366, -1);
            this->button6->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
            this->button6->Name = L"button6";
            this->button6->Size = System::Drawing::Size(106, 77);
            this->button6->TabIndex = 3;
            this->button6->Text = L"chercher";
            this->button6->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
            this->button6->UseVisualStyleBackColor = true;
            // 
            // button7
            // 
            this->button7->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
            this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button7->ForeColor = System::Drawing::Color::Silver;
            this->button7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.Image")));
            this->button7->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
            this->button7->Location = System::Drawing::Point(204, -1);
            this->button7->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
            this->button7->Name = L"button7";
            this->button7->Size = System::Drawing::Size(106, 77);
            this->button7->TabIndex = 4;
            this->button7->Text = L"Add";
            this->button7->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
            this->button7->UseVisualStyleBackColor = true;
            // 
            // button8
            // 
            this->button8->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
            this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button8->ForeColor = System::Drawing::Color::Silver;
            this->button8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.Image")));
            this->button8->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
            this->button8->Location = System::Drawing::Point(42, -1);
            this->button8->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
            this->button8->Name = L"button8";
            this->button8->Size = System::Drawing::Size(106, 77);
            this->button8->TabIndex = 5;
            this->button8->Text = L"Add";
            this->button8->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
            this->button8->UseVisualStyleBackColor = true;
            // 
            // button9
            // 
            this->button9->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
            this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button9->ForeColor = System::Drawing::Color::Silver;
            this->button9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button9.Image")));
            this->button9->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
            this->button9->Location = System::Drawing::Point(528, -1);
            this->button9->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
            this->button9->Name = L"button9";
            this->button9->Size = System::Drawing::Size(106, 77);
            this->button9->TabIndex = 6;
            this->button9->Text = L"Add";
            this->button9->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
            this->button9->UseVisualStyleBackColor = true;
            // 
            // flowLayoutPanel3
            // 
            this->flowLayoutPanel3->Controls->Add(this->panel14);
            this->flowLayoutPanel3->Controls->Add(this->panel15);
            this->flowLayoutPanel3->Controls->Add(this->panel16);
            this->flowLayoutPanel3->Controls->Add(this->panel17);
            this->flowLayoutPanel3->Dock = System::Windows::Forms::DockStyle::Top;
            this->flowLayoutPanel3->Location = System::Drawing::Point(0, 0);
            this->flowLayoutPanel3->Name = L"flowLayoutPanel3";
            this->flowLayoutPanel3->Size = System::Drawing::Size(676, 304);
            this->flowLayoutPanel3->TabIndex = 11;
            // 
            // panel14
            // 
            this->panel14->BackColor = System::Drawing::Color::Gray;
            this->panel14->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel14->Controls->Add(this->label33);
            this->panel14->Controls->Add(this->label34);
            this->panel14->Controls->Add(this->label35);
            this->panel14->Controls->Add(this->label36);
            this->panel14->Controls->Add(this->pictureBox9);
            this->panel14->Location = System::Drawing::Point(10, 10);
            this->panel14->Margin = System::Windows::Forms::Padding(10);
            this->panel14->Name = L"panel14";
            this->panel14->Size = System::Drawing::Size(219, 129);
            this->panel14->TabIndex = 2;
            // 
            // label33
            // 
            this->label33->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label33->AutoSize = true;
            this->label33->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label33->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label33->Location = System::Drawing::Point(138, 70);
            this->label33->Name = L"label33";
            this->label33->RightToLeft = System::Windows::Forms::RightToLeft::No;
            this->label33->Size = System::Drawing::Size(80, 20);
            this->label33->TabIndex = 3;
            this->label33->Text = L" age : 22 ";
            // 
            // label34
            // 
            this->label34->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label34->AutoSize = true;
            this->label34->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label34->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label34->Location = System::Drawing::Point(138, 40);
            this->label34->Name = L"label34";
            this->label34->RightToLeft = System::Windows::Forms::RightToLeft::No;
            this->label34->Size = System::Drawing::Size(80, 20);
            this->label34->TabIndex = 3;
            this->label34->Text = L" age : 22 ";
            // 
            // label35
            // 
            this->label35->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label35->AutoSize = true;
            this->label35->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label35->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label35->Location = System::Drawing::Point(138, 10);
            this->label35->Name = L"label35";
            this->label35->RightToLeft = System::Windows::Forms::RightToLeft::No;
            this->label35->Size = System::Drawing::Size(80, 20);
            this->label35->TabIndex = 3;
            this->label35->Text = L" age : 22 ";
            // 
            // label36
            // 
            this->label36->AutoSize = true;
            this->label36->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label36->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label36->Location = System::Drawing::Point(60, 98);
            this->label36->Name = L"label36";
            this->label36->Size = System::Drawing::Size(85, 20);
            this->label36->TabIndex = 2;
            this->label36->Text = L"etudiant 1";
            this->label36->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // pictureBox9
            // 
            this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
            this->pictureBox9->Location = System::Drawing::Point(3, 8);
            this->pictureBox9->Name = L"pictureBox9";
            this->pictureBox9->Size = System::Drawing::Size(106, 72);
            this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox9->TabIndex = 1;
            this->pictureBox9->TabStop = false;
            // 
            // panel15
            // 
            this->panel15->BackColor = System::Drawing::Color::Gray;
            this->panel15->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel15->Controls->Add(this->label37);
            this->panel15->Controls->Add(this->label38);
            this->panel15->Controls->Add(this->label39);
            this->panel15->Controls->Add(this->label40);
            this->panel15->Controls->Add(this->pictureBox10);
            this->panel15->Location = System::Drawing::Point(249, 10);
            this->panel15->Margin = System::Windows::Forms::Padding(10);
            this->panel15->Name = L"panel15";
            this->panel15->Size = System::Drawing::Size(219, 129);
            this->panel15->TabIndex = 3;
            // 
            // label37
            // 
            this->label37->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label37->AutoSize = true;
            this->label37->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label37->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label37->Location = System::Drawing::Point(138, 70);
            this->label37->Name = L"label37";
            this->label37->RightToLeft = System::Windows::Forms::RightToLeft::No;
            this->label37->Size = System::Drawing::Size(80, 20);
            this->label37->TabIndex = 3;
            this->label37->Text = L" age : 22 ";
            // 
            // label38
            // 
            this->label38->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label38->AutoSize = true;
            this->label38->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label38->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label38->Location = System::Drawing::Point(138, 40);
            this->label38->Name = L"label38";
            this->label38->RightToLeft = System::Windows::Forms::RightToLeft::No;
            this->label38->Size = System::Drawing::Size(80, 20);
            this->label38->TabIndex = 3;
            this->label38->Text = L" age : 22 ";
            // 
            // label39
            // 
            this->label39->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label39->AutoSize = true;
            this->label39->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label39->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label39->Location = System::Drawing::Point(138, 10);
            this->label39->Name = L"label39";
            this->label39->RightToLeft = System::Windows::Forms::RightToLeft::No;
            this->label39->Size = System::Drawing::Size(80, 20);
            this->label39->TabIndex = 3;
            this->label39->Text = L" age : 22 ";
            // 
            // label40
            // 
            this->label40->AutoSize = true;
            this->label40->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label40->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label40->Location = System::Drawing::Point(60, 98);
            this->label40->Name = L"label40";
            this->label40->Size = System::Drawing::Size(85, 20);
            this->label40->TabIndex = 2;
            this->label40->Text = L"etudiant 1";
            this->label40->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // pictureBox10
            // 
            this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
            this->pictureBox10->Location = System::Drawing::Point(3, 8);
            this->pictureBox10->Name = L"pictureBox10";
            this->pictureBox10->Size = System::Drawing::Size(106, 72);
            this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox10->TabIndex = 1;
            this->pictureBox10->TabStop = false;
            // 
            // panel16
            // 
            this->panel16->BackColor = System::Drawing::Color::Gray;
            this->panel16->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel16->Controls->Add(this->label41);
            this->panel16->Controls->Add(this->label42);
            this->panel16->Controls->Add(this->label43);
            this->panel16->Controls->Add(this->label44);
            this->panel16->Controls->Add(this->pictureBox11);
            this->panel16->Location = System::Drawing::Point(10, 159);
            this->panel16->Margin = System::Windows::Forms::Padding(10);
            this->panel16->Name = L"panel16";
            this->panel16->Size = System::Drawing::Size(219, 129);
            this->panel16->TabIndex = 4;
            // 
            // label41
            // 
            this->label41->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label41->AutoSize = true;
            this->label41->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label41->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label41->Location = System::Drawing::Point(138, 70);
            this->label41->Name = L"label41";
            this->label41->RightToLeft = System::Windows::Forms::RightToLeft::No;
            this->label41->Size = System::Drawing::Size(80, 20);
            this->label41->TabIndex = 3;
            this->label41->Text = L" age : 22 ";
            // 
            // label42
            // 
            this->label42->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label42->AutoSize = true;
            this->label42->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label42->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label42->Location = System::Drawing::Point(138, 40);
            this->label42->Name = L"label42";
            this->label42->RightToLeft = System::Windows::Forms::RightToLeft::No;
            this->label42->Size = System::Drawing::Size(80, 20);
            this->label42->TabIndex = 3;
            this->label42->Text = L" age : 22 ";
            // 
            // label43
            // 
            this->label43->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label43->AutoSize = true;
            this->label43->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label43->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label43->Location = System::Drawing::Point(138, 10);
            this->label43->Name = L"label43";
            this->label43->RightToLeft = System::Windows::Forms::RightToLeft::No;
            this->label43->Size = System::Drawing::Size(80, 20);
            this->label43->TabIndex = 3;
            this->label43->Text = L" age : 22 ";
            // 
            // label44
            // 
            this->label44->AutoSize = true;
            this->label44->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label44->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label44->Location = System::Drawing::Point(60, 98);
            this->label44->Name = L"label44";
            this->label44->Size = System::Drawing::Size(85, 20);
            this->label44->TabIndex = 2;
            this->label44->Text = L"etudiant 1";
            this->label44->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // pictureBox11
            // 
            this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
            this->pictureBox11->Location = System::Drawing::Point(3, 8);
            this->pictureBox11->Name = L"pictureBox11";
            this->pictureBox11->Size = System::Drawing::Size(106, 72);
            this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox11->TabIndex = 1;
            this->pictureBox11->TabStop = false;
            // 
            // panel17
            // 
            this->panel17->BackColor = System::Drawing::Color::Gray;
            this->panel17->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel17->Controls->Add(this->label45);
            this->panel17->Controls->Add(this->label46);
            this->panel17->Controls->Add(this->label47);
            this->panel17->Controls->Add(this->label48);
            this->panel17->Controls->Add(this->pictureBox12);
            this->panel17->Location = System::Drawing::Point(249, 159);
            this->panel17->Margin = System::Windows::Forms::Padding(10);
            this->panel17->Name = L"panel17";
            this->panel17->Size = System::Drawing::Size(219, 129);
            this->panel17->TabIndex = 5;
            // 
            // label45
            // 
            this->label45->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label45->AutoSize = true;
            this->label45->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label45->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label45->Location = System::Drawing::Point(138, 70);
            this->label45->Name = L"label45";
            this->label45->RightToLeft = System::Windows::Forms::RightToLeft::No;
            this->label45->Size = System::Drawing::Size(80, 20);
            this->label45->TabIndex = 3;
            this->label45->Text = L" age : 22 ";
            // 
            // label46
            // 
            this->label46->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label46->AutoSize = true;
            this->label46->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label46->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label46->Location = System::Drawing::Point(138, 40);
            this->label46->Name = L"label46";
            this->label46->RightToLeft = System::Windows::Forms::RightToLeft::No;
            this->label46->Size = System::Drawing::Size(80, 20);
            this->label46->TabIndex = 3;
            this->label46->Text = L" age : 22 ";
            // 
            // label47
            // 
            this->label47->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label47->AutoSize = true;
            this->label47->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label47->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->label47->Location = System::Drawing::Point(138, 10);
            this->label47->Name = L"label47";
            this->label47->RightToLeft = System::Windows::Forms::RightToLeft::No;
            this->label47->Size = System::Drawing::Size(80, 20);
            this->label47->TabIndex = 3;
            this->label47->Text = L" age : 22 ";
            // 
            // label48
            // 
            this->label48->AutoSize = true;
            this->label48->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label48->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label48->Location = System::Drawing::Point(60, 98);
            this->label48->Name = L"label48";
            this->label48->Size = System::Drawing::Size(85, 20);
            this->label48->TabIndex = 2;
            this->label48->Text = L"etudiant 1";
            this->label48->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // pictureBox12
            // 
            this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
            this->pictureBox12->Location = System::Drawing::Point(3, 8);
            this->pictureBox12->Name = L"pictureBox12";
            this->pictureBox12->Size = System::Drawing::Size(106, 72);
            this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox12->TabIndex = 1;
            this->pictureBox12->TabStop = false;
            // 
            // panel_borrow1
            // 
            this->panel_borrow1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->panel_borrow1->Controls->Add(this->label11);
            this->panel_borrow1->Dock = System::Windows::Forms::DockStyle::Fill;
            this->panel_borrow1->Location = System::Drawing::Point(0, 0);
            this->panel_borrow1->Name = L"panel_borrow1";
            this->panel_borrow1->Size = System::Drawing::Size(676, 389);
            this->panel_borrow1->TabIndex = 6;
            // 
            // label11
            // 
            this->label11->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label11->AutoSize = true;
            this->label11->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label11->Location = System::Drawing::Point(259, -48);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(39, 13);
            this->label11->TabIndex = 2;
            this->label11->Text = L"borrow";
            // 
            // panel_student
            // 
            this->panel_student->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(64)));
            this->panel_student->Controls->Add(this->label12);
            this->panel_student->Dock = System::Windows::Forms::DockStyle::Fill;
            this->panel_student->Location = System::Drawing::Point(0, 0);
            this->panel_student->Name = L"panel_student";
            this->panel_student->Size = System::Drawing::Size(676, 389);
            this->panel_student->TabIndex = 4;
            // 
            // label12
            // 
            this->label12->Anchor = System::Windows::Forms::AnchorStyles::None;
            this->label12->AutoSize = true;
            this->label12->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->label12->Location = System::Drawing::Point(258, 27);
            this->label12->Name = L"label12";
            this->label12->Size = System::Drawing::Size(42, 13);
            this->label12->TabIndex = 2;
            this->label12->Text = L"student";
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(830, 454);
            this->Controls->Add(this->pn_home);
            this->Controls->Add(this->pn_nav_bar);
            this->Controls->Add(this->pn_st_bar);
            this->Controls->Add(this->pn_title_bar);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
            this->Name = L"MyForm";
            this->Text = L"MyForm";
            this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
            this->pn_title_bar->ResumeLayout(false);
            this->pn_title_bar->PerformLayout();
            this->pn_st_bar->ResumeLayout(false);
            this->pn_st_bar->PerformLayout();
            this->pn_nav_bar->ResumeLayout(false);
            this->panel1->ResumeLayout(false);
            this->pn_info->ResumeLayout(false);
            this->pn_info->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            this->pn_home->ResumeLayout(false);
            this->pn_stag->ResumeLayout(false);
            this->flowLayoutPanel4->ResumeLayout(false);
            this->panel20->ResumeLayout(false);
            this->panel20->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
            this->panel18->ResumeLayout(false);
            this->panel18->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
            this->panel19->ResumeLayout(false);
            this->pn_emprunt->ResumeLayout(false);
            this->flowLayoutPanel5->ResumeLayout(false);
            this->panel26->ResumeLayout(false);
            this->panel26->PerformLayout();
            this->panel25->ResumeLayout(false);
            this->panel_home->ResumeLayout(false);
            this->panel8->ResumeLayout(false);
            this->flowLayoutPanel1->ResumeLayout(false);
            this->panel3->ResumeLayout(false);
            this->panel3->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
            this->panel4->ResumeLayout(false);
            this->panel4->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
            this->panel5->ResumeLayout(false);
            this->panel5->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
            this->panel2->ResumeLayout(false);
            this->panel_books->ResumeLayout(false);
            this->flowLayoutPanel2->ResumeLayout(false);
            this->panel10->ResumeLayout(false);
            this->panel10->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
            this->panel7->ResumeLayout(false);
            this->panel_borrow->ResumeLayout(false);
            this->panel13->ResumeLayout(false);
            this->flowLayoutPanel3->ResumeLayout(false);
            this->panel14->ResumeLayout(false);
            this->panel14->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
            this->panel15->ResumeLayout(false);
            this->panel15->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
            this->panel16->ResumeLayout(false);
            this->panel16->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
            this->panel17->ResumeLayout(false);
            this->panel17->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
            this->panel_borrow1->ResumeLayout(false);
            this->panel_borrow1->PerformLayout();
            this->panel_student->ResumeLayout(false);
            this->panel_student->PerformLayout();
            this->ResumeLayout(false);

        }
        System::String^ stringtostringspe(std::string myString) {
            System::String^ myLabelString = gcnew System::String(myString.c_str()); // convertir la chaîne en System::String^*/
            return myLabelString;
        }
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
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm1^ Frm = gcnew MyForm1;
		Frm->Show();
		Frm->SetDesktopLocation(680, 220);

	}
    private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
        MyForm1^ Frm = gcnew MyForm1;
        Frm->Show();
        Frm->SetDesktopLocation(680, 220);
    }
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
    Environment::Exit(0);
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
    if (this->WindowState == FormWindowState::Maximized) {
        this->WindowState = FormWindowState::Normal;
    }
    else { this->WindowState = FormWindowState::Maximized; }

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
    this->WindowState = FormWindowState::Minimized;

}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
    BOOK2^ BK = gcnew BOOK2;
    BK->Show();
    BK->SetDesktopLocation(300, 220);
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
     stagiaire1^ st = gcnew stagiaire1;
    st->Show();
    st->SetDesktopLocation(680, 220);
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
    stagiaire2^ st2 = gcnew stagiaire2;
    st2->Show();
    st2->SetDesktopLocation(300, 220);
}
private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
    emprunt^ empr = gcnew emprunt;
    empr ->Show();
    empr ->SetDesktopLocation(300, 220);
}
private: System::Void btn_home_Click(System::Object^ sender, System::EventArgs^ e) {
    panel_home->BringToFront();
}
private: System::Void btn_st_Click(System::Object^ sender, System::EventArgs^ e) {
    pn_emprunt->BringToFront();

}
private: System::Void btn_bk_Click(System::Object^ sender, System::EventArgs^ e) {
    panel_books->BringToFront();

}
private: System::Void btn_stag_Click(System::Object^ sender, System::EventArgs^ e) {
    pn_stag->BringToFront();

}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
    if (pn_nav_bar->Width == 55) {
        pn_nav_bar->Width = 165;
        btn_home->RightToLeft = System::Windows::Forms::RightToLeft::No;
        btn_bk->RightToLeft = System::Windows::Forms::RightToLeft::No;
        btn_brrw->RightToLeft = System::Windows::Forms::RightToLeft::No;
        btn_st->RightToLeft = System::Windows::Forms::RightToLeft::No;
        btn_stag->RightToLeft = System::Windows::Forms::RightToLeft::No;
        pn_info->Visible = true;
    }
    else {
        pn_nav_bar->Width = 55;
        btn_home->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
        btn_bk->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
        btn_brrw->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
        btn_st->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
        btn_stag->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
        pn_info->Visible = false;
    }
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) 
{

    while (flowLayoutPanel2->Controls->Count > 0)
    {
        Control^ control = flowLayoutPanel2->Controls[0];
        flowLayoutPanel2->Controls->Remove(control);
        delete control;
    }

    System::IO::StreamReader^ reader = gcnew System::IO::StreamReader("livre.txt");
    System::String^ myLabelString;
    System::String^ myLabelString2;
    System::String^ myLabelString3;
    String^ line;
    while ((line = reader->ReadLine()) != nullptr)
    {
        int ct;
        array<String^>^ words = line->Split('|');
        // Afficher chaque mot
        ct = 0;
        // Afficher chaque mot
        for each (String ^ word in words)
        {
            ct++;
            if (ct == 3) {
                myLabelString3 = word;
            }
            if (ct == 1) {
                myLabelString2 = word;
            }
            if (ct == 2) {
                myLabelString = word;
            }
        }




        Panel^ newPanel = gcnew Panel();


        newPanel->BackColor = Color::Red;
        newPanel->BackColor = System::Drawing::Color::Gray;
        newPanel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
        newPanel->Location = System::Drawing::Point(10, 10);
        newPanel->Margin = System::Windows::Forms::Padding(10);
        newPanel->Size = System::Drawing::Size(250, 170);
        newPanel->TabIndex = 2;

        Label^ label = gcnew Label();
        label->Anchor = System::Windows::Forms::AnchorStyles::None;
        label->AutoSize = true;
        label->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        label->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
            static_cast<System::Int32>(static_cast<System::Byte>(0)));
        label->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
        label->Location = Point(0, 0); // set the location of the text box inside the panel
        label->Location = System::Drawing::Point(0, 0);
        label->RightToLeft = System::Windows::Forms::RightToLeft::No;
        label->Size = System::Drawing::Size(80, 20);
        label->TabIndex = 3;
        label->Text = L" \n\n            Livre:  " + myLabelString + "\n\n            code livre:  " + myLabelString2 + "\n\n            Auteur :  " + myLabelString3;

        PictureBox^ pictureBox = gcnew PictureBox();
        System::Drawing::Image^ myImage = Image::FromFile("books_40px.png");
        pictureBox->Image = myImage;
        pictureBox->Location = System::Drawing::Point(0, 0);
        pictureBox->Size = System::Drawing::Size(60, 72);
        pictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
        pictureBox->TabIndex = 1;
        pictureBox->TabStop = false;

        newPanel->Controls->Add(pictureBox);
        newPanel->Controls->Add(label);
        flowLayoutPanel2->Controls->Add(newPanel);
    }
    reader->Close();
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
    while (flowLayoutPanel4->Controls->Count > 0)
    {
        Control^ control = flowLayoutPanel4->Controls[0];
        flowLayoutPanel4->Controls->Remove(control);
        delete control;
    }

    System::IO::StreamReader^ reader = gcnew System::IO::StreamReader("Stagiaire.txt");
    System::String^ myLabelString;
    System::String^ myLabelString2;
    System::String^ myLabelString3;
    String^ line;
    while ((line = reader->ReadLine()) != nullptr)
    {
        int ct;
        array<String^>^ words = line->Split('|');
        // Afficher chaque mot
        ct = 0;
        // Afficher chaque mot
        for each (String ^ word in words)
        {
            ct++;
            if (ct == 3) {
                myLabelString3 = word;
            }
            if (ct == 1) {
                myLabelString2 = word;
            }
            if (ct == 2) {
                myLabelString = word;
            }
        }




        Panel^ newPanel = gcnew Panel();


        newPanel->BackColor = Color::Red;
        newPanel->BackColor = System::Drawing::Color::Gray;
        newPanel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
        newPanel->Location = System::Drawing::Point(10, 10);
        newPanel->Margin = System::Windows::Forms::Padding(10);
        newPanel->Size = System::Drawing::Size(300, 170);
        newPanel->TabIndex = 2;

        Label^ label = gcnew Label();
        label->Anchor = System::Windows::Forms::AnchorStyles::None;
        label->AutoSize = true;
        label->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        label->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
            static_cast<System::Int32>(static_cast<System::Byte>(0)));
        label->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
        label->Location = Point(0, 0); // set the location of the text box inside the panel
        label->Location = System::Drawing::Point(0, 0);
        label->RightToLeft = System::Windows::Forms::RightToLeft::No;
        label->Size = System::Drawing::Size(80, 20);
        label->TabIndex = 3;
        label->Text = L" \n\n            Nom Stagiaire:  " + myLabelString + "\n\n            code Stagiaire:  " + myLabelString2 + "\n\n            Prénom stagiaire :  " + myLabelString3;

        PictureBox^ pictureBox = gcnew PictureBox();
        System::Drawing::Image^ myImage = Image::FromFile("user_filled_40px.png");
        pictureBox->Image = myImage;
        pictureBox->Location = System::Drawing::Point(0, 0);
        pictureBox->Size = System::Drawing::Size(60, 72);
        pictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
        pictureBox->TabIndex = 1;
        pictureBox->TabStop = false;

        newPanel->Controls->Add(pictureBox);
        newPanel->Controls->Add(label);

        flowLayoutPanel4->Controls->Add(newPanel);
    }
    reader->Close();
}
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
    while (flowLayoutPanel5->Controls->Count > 0)
    {
        Control^ control = flowLayoutPanel5->Controls[0];
        flowLayoutPanel5->Controls->Remove(control);
        delete control;
    }

    System::IO::StreamReader^ reader = gcnew System::IO::StreamReader("Emprunt.txt");
    System::String^ myLabelString;
    System::String^ myLabelString2;
    System::String^ myLabelString3;
    System::String^ myLabelString4;
    System::String^ myLabelString5;
    System::String^ myLabelString6;
    String^ line;
    while ((line = reader->ReadLine()) != nullptr)
    {
        int ct;
        array<String^>^ words = line->Split('|');
        // Afficher chaque mot
        ct = 0;
        // Afficher chaque mot
        for each (String ^ word in words)
        {
            ct++;
            if (ct == 3) {
                myLabelString3 = word;
            }
            if (ct == 1) {
                myLabelString2 = word;
            }
            if (ct == 2) {
                myLabelString = word;
            }
            if (ct == 4) {
                myLabelString4 = word;
            }
            if (ct == 5) {
                myLabelString5 = word;
            }
            if (ct == 6) {
                myLabelString6 = word;
            }
        }




        Panel^ newPanel = gcnew Panel();


        newPanel->BackColor = Color::Red;
        newPanel->BackColor = System::Drawing::Color::Gray;
        newPanel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
        newPanel->Location = System::Drawing::Point(10, 10);
        newPanel->Margin = System::Windows::Forms::Padding(10);
        newPanel->Size = System::Drawing::Size(350, 300);
        newPanel->TabIndex = 2;

        Label^ label = gcnew Label();
        label->Anchor = System::Windows::Forms::AnchorStyles::None;
        label->AutoSize = true;
        label->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(0)));
        label->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
            static_cast<System::Int32>(static_cast<System::Byte>(0)));
        label->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
        label->Location = Point(0, 0); // set the location of the text box inside the panel
        label->Location = System::Drawing::Point(0, 0);
        label->RightToLeft = System::Windows::Forms::RightToLeft::No;
        label->Size = System::Drawing::Size(80, 20);
        label->TabIndex = 3;
        label->Text = L" \n\n            code d'emprunt:  " + myLabelString2 + "\n\n            Nom de livre:  " + myLabelString + "\n\n            Auteur de livre :  " + myLabelString3 + "\n\n            nom stagiaire :  " + myLabelString4 + "\n\n            Prénom stagiaire :  " + myLabelString5 + "\n\n            Date de retour :  " + myLabelString6;

        PictureBox^ pictureBox = gcnew PictureBox();
        System::Drawing::Image^ myImage = Image::FromFile("borrow_book_40px.png");
        pictureBox->Image = myImage;
        pictureBox->Location = System::Drawing::Point(0, 0);
        pictureBox->Size = System::Drawing::Size(60, 72);
        pictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
        pictureBox->TabIndex = 1;
        pictureBox->TabStop = false;

        newPanel->Controls->Add(pictureBox);
        newPanel->Controls->Add(label);

        flowLayoutPanel5->Controls->Add(newPanel);
    }
    reader->Close();
}
private: System::Void flowLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
    int n1=countLines("Stagiaire.txt");
    int n2 = countLines("Livre.txt");
    int n3 = countLines("Emprunt.txt");
    String^ numStr1 = n1.ToString();
    String^ numStr2 = n2.ToString();
    String^ numStr3 = n3.ToString();
    this->label9->Text = numStr1;
    this->label14->Text = numStr2;
    this->label16->Text = numStr3;
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
    rendreunlivre^ rendreliv = gcnew rendreunlivre;
    rendreliv->Show();
    rendreliv->SetDesktopLocation(680, 220);
}
};
}

