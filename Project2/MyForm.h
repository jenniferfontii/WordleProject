#pragma once
#include <iostream>
#include <string>
#include "WordDatabaseWrapper.h"

namespace Project2 {
	//use graphical namespaces to draw the window
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		//round is the row the user is currently filling
		int round = 0;
		//check if the game is won
		int won = 0;
		//instance of Word database to use the getRandomWord
		WordDatabaseWrapper^ wdb = gcnew WordDatabaseWrapper();
	private: System::Windows::Forms::TextBox^ Welcome;
	public:
		System::String^ solution = wdb->getRandomWord();

		//initialize the window
		MyForm(void)
		{
			InitializeComponent();
			
		}

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	//declaration of all the graphic components
	private: System::Windows::Forms::TextBox^ textBox31;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox30;
	private: System::Windows::Forms::TextBox^ textBox29;
	private: System::Windows::Forms::TextBox^ textBox28;
	private: System::Windows::Forms::TextBox^ textBox27;
	private: System::Windows::Forms::TextBox^ textBox26;
	private: System::Windows::Forms::TextBox^ textBox25;
	private: System::Windows::Forms::TextBox^ textBox24;
	private: System::Windows::Forms::TextBox^ textBox23;
	private: System::Windows::Forms::TextBox^ textBox22;
	private: System::Windows::Forms::TextBox^ textBox21;
	private: System::Windows::Forms::TextBox^ textBox20;
	private: System::Windows::Forms::TextBox^ textBox19;
	private: System::Windows::Forms::TextBox^ textBox18;
	private: System::Windows::Forms::TextBox^ textBox17;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel4;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button21;

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
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox30 = (gcnew System::Windows::Forms::TextBox());
			this->textBox29 = (gcnew System::Windows::Forms::TextBox());
			this->textBox28 = (gcnew System::Windows::Forms::TextBox());
			this->textBox27 = (gcnew System::Windows::Forms::TextBox());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->textBox31 = (gcnew System::Windows::Forms::TextBox());
			this->Welcome = (gcnew System::Windows::Forms::TextBox());
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			this->tableLayoutPanel4->SuspendLayout();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 5;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				79)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				83)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				77)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				81)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				172)));
			this->tableLayoutPanel1->Controls->Add(this->textBox2, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->textBox30, 4, 5);
			this->tableLayoutPanel1->Controls->Add(this->textBox29, 3, 5);
			this->tableLayoutPanel1->Controls->Add(this->textBox28, 2, 5);
			this->tableLayoutPanel1->Controls->Add(this->textBox27, 1, 5);
			this->tableLayoutPanel1->Controls->Add(this->textBox26, 0, 5);
			this->tableLayoutPanel1->Controls->Add(this->textBox25, 4, 4);
			this->tableLayoutPanel1->Controls->Add(this->textBox24, 3, 4);
			this->tableLayoutPanel1->Controls->Add(this->textBox23, 2, 4);
			this->tableLayoutPanel1->Controls->Add(this->textBox22, 1, 4);
			this->tableLayoutPanel1->Controls->Add(this->textBox21, 0, 4);
			this->tableLayoutPanel1->Controls->Add(this->textBox20, 4, 3);
			this->tableLayoutPanel1->Controls->Add(this->textBox19, 3, 3);
			this->tableLayoutPanel1->Controls->Add(this->textBox18, 2, 3);
			this->tableLayoutPanel1->Controls->Add(this->textBox17, 1, 3);
			this->tableLayoutPanel1->Controls->Add(this->textBox16, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->textBox15, 4, 2);
			this->tableLayoutPanel1->Controls->Add(this->textBox14, 3, 2);
			this->tableLayoutPanel1->Controls->Add(this->textBox13, 2, 2);
			this->tableLayoutPanel1->Controls->Add(this->textBox12, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->textBox11, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->textBox10, 4, 1);
			this->tableLayoutPanel1->Controls->Add(this->textBox9, 3, 1);
			this->tableLayoutPanel1->Controls->Add(this->textBox8, 2, 1);
			this->tableLayoutPanel1->Controls->Add(this->textBox7, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->textBox6, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->textBox5, 4, 0);
			this->tableLayoutPanel1->Controls->Add(this->textBox4, 3, 0);
			this->tableLayoutPanel1->Controls->Add(this->textBox3, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->textBox1, 0, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(167, 112);
			this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(4);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 6;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 68)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 68)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 68)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 68)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 68)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 68)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(400, 407);
			this->tableLayoutPanel1->TabIndex = 0;
			this->tableLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::tableLayoutPanel1_Paint);
			// 
			// textBox2
			// 
			this->textBox2->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Impact", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(82, 3);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(73, 56);
			this->textBox2->TabIndex = 30;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox30
			// 
			this->textBox30->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBox30->Font = (gcnew System::Drawing::Font(L"Impact", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox30->Location = System::Drawing::Point(323, 343);
			this->textBox30->Name = L"textBox30";
			this->textBox30->ReadOnly = true;
			this->textBox30->Size = System::Drawing::Size(73, 56);
			this->textBox30->TabIndex = 29;
			this->textBox30->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox29
			// 
			this->textBox29->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBox29->Font = (gcnew System::Drawing::Font(L"Impact", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox29->Location = System::Drawing::Point(242, 343);
			this->textBox29->Name = L"textBox29";
			this->textBox29->ReadOnly = true;
			this->textBox29->Size = System::Drawing::Size(73, 56);
			this->textBox29->TabIndex = 28;
			this->textBox29->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox28
			// 
			this->textBox28->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBox28->Font = (gcnew System::Drawing::Font(L"Impact", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox28->Location = System::Drawing::Point(165, 343);
			this->textBox28->Name = L"textBox28";
			this->textBox28->ReadOnly = true;
			this->textBox28->Size = System::Drawing::Size(71, 56);
			this->textBox28->TabIndex = 27;
			this->textBox28->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox27
			// 
			this->textBox27->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBox27->Font = (gcnew System::Drawing::Font(L"Impact", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox27->Location = System::Drawing::Point(82, 343);
			this->textBox27->Name = L"textBox27";
			this->textBox27->ReadOnly = true;
			this->textBox27->Size = System::Drawing::Size(73, 56);
			this->textBox27->TabIndex = 26;
			this->textBox27->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox26
			// 
			this->textBox26->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBox26->Font = (gcnew System::Drawing::Font(L"Impact", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox26->Location = System::Drawing::Point(3, 343);
			this->textBox26->Name = L"textBox26";
			this->textBox26->ReadOnly = true;
			this->textBox26->Size = System::Drawing::Size(73, 56);
			this->textBox26->TabIndex = 25;
			this->textBox26->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox25
			// 
			this->textBox25->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBox25->Font = (gcnew System::Drawing::Font(L"Impact", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox25->Location = System::Drawing::Point(323, 275);
			this->textBox25->Name = L"textBox25";
			this->textBox25->ReadOnly = true;
			this->textBox25->Size = System::Drawing::Size(73, 56);
			this->textBox25->TabIndex = 24;
			this->textBox25->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox24
			// 
			this->textBox24->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBox24->Font = (gcnew System::Drawing::Font(L"Impact", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox24->Location = System::Drawing::Point(242, 275);
			this->textBox24->Name = L"textBox24";
			this->textBox24->ReadOnly = true;
			this->textBox24->Size = System::Drawing::Size(73, 56);
			this->textBox24->TabIndex = 23;
			this->textBox24->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox23
			// 
			this->textBox23->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBox23->Font = (gcnew System::Drawing::Font(L"Impact", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox23->Location = System::Drawing::Point(165, 275);
			this->textBox23->Name = L"textBox23";
			this->textBox23->ReadOnly = true;
			this->textBox23->Size = System::Drawing::Size(71, 56);
			this->textBox23->TabIndex = 22;
			this->textBox23->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox22
			// 
			this->textBox22->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBox22->Font = (gcnew System::Drawing::Font(L"Impact", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox22->Location = System::Drawing::Point(82, 275);
			this->textBox22->Name = L"textBox22";
			this->textBox22->ReadOnly = true;
			this->textBox22->Size = System::Drawing::Size(73, 56);
			this->textBox22->TabIndex = 21;
			this->textBox22->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox21
			// 
			this->textBox21->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBox21->Font = (gcnew System::Drawing::Font(L"Impact", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox21->Location = System::Drawing::Point(3, 275);
			this->textBox21->Name = L"textBox21";
			this->textBox21->ReadOnly = true;
			this->textBox21->Size = System::Drawing::Size(73, 56);
			this->textBox21->TabIndex = 20;
			this->textBox21->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox20
			// 
			this->textBox20->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBox20->Font = (gcnew System::Drawing::Font(L"Impact", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox20->Location = System::Drawing::Point(323, 207);
			this->textBox20->Name = L"textBox20";
			this->textBox20->ReadOnly = true;
			this->textBox20->Size = System::Drawing::Size(73, 56);
			this->textBox20->TabIndex = 19;
			this->textBox20->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox19
			// 
			this->textBox19->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBox19->Font = (gcnew System::Drawing::Font(L"Impact", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox19->Location = System::Drawing::Point(242, 207);
			this->textBox19->Name = L"textBox19";
			this->textBox19->ReadOnly = true;
			this->textBox19->Size = System::Drawing::Size(73, 56);
			this->textBox19->TabIndex = 18;
			this->textBox19->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox18
			// 
			this->textBox18->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBox18->Font = (gcnew System::Drawing::Font(L"Impact", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox18->Location = System::Drawing::Point(165, 207);
			this->textBox18->Name = L"textBox18";
			this->textBox18->ReadOnly = true;
			this->textBox18->Size = System::Drawing::Size(71, 56);
			this->textBox18->TabIndex = 17;
			this->textBox18->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox17
			// 
			this->textBox17->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBox17->Font = (gcnew System::Drawing::Font(L"Impact", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox17->Location = System::Drawing::Point(82, 207);
			this->textBox17->Name = L"textBox17";
			this->textBox17->ReadOnly = true;
			this->textBox17->Size = System::Drawing::Size(73, 56);
			this->textBox17->TabIndex = 16;
			this->textBox17->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox16
			// 
			this->textBox16->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBox16->Font = (gcnew System::Drawing::Font(L"Impact", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox16->Location = System::Drawing::Point(3, 207);
			this->textBox16->Name = L"textBox16";
			this->textBox16->ReadOnly = true;
			this->textBox16->Size = System::Drawing::Size(73, 56);
			this->textBox16->TabIndex = 15;
			this->textBox16->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox15
			// 
			this->textBox15->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBox15->Font = (gcnew System::Drawing::Font(L"Impact", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox15->Location = System::Drawing::Point(323, 139);
			this->textBox15->Name = L"textBox15";
			this->textBox15->ReadOnly = true;
			this->textBox15->Size = System::Drawing::Size(73, 56);
			this->textBox15->TabIndex = 14;
			this->textBox15->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox14
			// 
			this->textBox14->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBox14->Font = (gcnew System::Drawing::Font(L"Impact", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox14->Location = System::Drawing::Point(242, 139);
			this->textBox14->Name = L"textBox14";
			this->textBox14->ReadOnly = true;
			this->textBox14->Size = System::Drawing::Size(73, 56);
			this->textBox14->TabIndex = 13;
			this->textBox14->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox13
			// 
			this->textBox13->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBox13->Font = (gcnew System::Drawing::Font(L"Impact", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox13->Location = System::Drawing::Point(165, 139);
			this->textBox13->Name = L"textBox13";
			this->textBox13->ReadOnly = true;
			this->textBox13->Size = System::Drawing::Size(71, 56);
			this->textBox13->TabIndex = 12;
			this->textBox13->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox12
			// 
			this->textBox12->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBox12->Font = (gcnew System::Drawing::Font(L"Impact", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox12->Location = System::Drawing::Point(82, 139);
			this->textBox12->Name = L"textBox12";
			this->textBox12->ReadOnly = true;
			this->textBox12->Size = System::Drawing::Size(73, 56);
			this->textBox12->TabIndex = 11;
			this->textBox12->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox11
			// 
			this->textBox11->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Impact", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox11->Location = System::Drawing::Point(3, 139);
			this->textBox11->Name = L"textBox11";
			this->textBox11->ReadOnly = true;
			this->textBox11->Size = System::Drawing::Size(73, 56);
			this->textBox11->TabIndex = 10;
			this->textBox11->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox10
			// 
			this->textBox10->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Impact", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox10->Location = System::Drawing::Point(323, 71);
			this->textBox10->Name = L"textBox10";
			this->textBox10->ReadOnly = true;
			this->textBox10->Size = System::Drawing::Size(73, 56);
			this->textBox10->TabIndex = 9;
			this->textBox10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox9
			// 
			this->textBox9->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Impact", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox9->Location = System::Drawing::Point(242, 71);
			this->textBox9->Name = L"textBox9";
			this->textBox9->ReadOnly = true;
			this->textBox9->Size = System::Drawing::Size(73, 56);
			this->textBox9->TabIndex = 8;
			this->textBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox8
			// 
			this->textBox8->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Impact", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox8->Location = System::Drawing::Point(165, 71);
			this->textBox8->Name = L"textBox8";
			this->textBox8->ReadOnly = true;
			this->textBox8->Size = System::Drawing::Size(71, 56);
			this->textBox8->TabIndex = 7;
			this->textBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox7
			// 
			this->textBox7->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Impact", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->Location = System::Drawing::Point(82, 71);
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(73, 56);
			this->textBox7->TabIndex = 6;
			this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox6
			// 
			this->textBox6->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Impact", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(3, 71);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(73, 56);
			this->textBox6->TabIndex = 5;
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox5
			// 
			this->textBox5->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Impact", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(323, 3);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(73, 56);
			this->textBox5->TabIndex = 4;
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox4
			// 
			this->textBox4->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Impact", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(242, 3);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(73, 56);
			this->textBox4->TabIndex = 3;
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox3
			// 
			this->textBox3->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Impact", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(165, 3);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(71, 56);
			this->textBox3->TabIndex = 2;
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox1
			// 
			this->textBox1->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Impact", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(3, 3);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(73, 56);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 10;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				46)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				49)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				47)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				47)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				46)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				46)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				47)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				50)));
			this->tableLayoutPanel2->Controls->Add(this->button9, 8, 0);
			this->tableLayoutPanel2->Controls->Add(this->button8, 7, 0);
			this->tableLayoutPanel2->Controls->Add(this->button7, 6, 0);
			this->tableLayoutPanel2->Controls->Add(this->button6, 5, 0);
			this->tableLayoutPanel2->Controls->Add(this->button5, 4, 0);
			this->tableLayoutPanel2->Controls->Add(this->button4, 3, 0);
			this->tableLayoutPanel2->Controls->Add(this->button3, 2, 0);
			this->tableLayoutPanel2->Controls->Add(this->button1, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->button2, 1, 0);
			this->tableLayoutPanel2->Controls->Add(this->button10, 9, 0);
			this->tableLayoutPanel2->Location = System::Drawing::Point(125, 555);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 1;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(466, 42);
			this->tableLayoutPanel2->TabIndex = 1;
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(372, 3);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(41, 36);
			this->button9->TabIndex = 8;
			this->button9->Text = L"O";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(326, 3);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(40, 36);
			this->button8->TabIndex = 7;
			this->button8->Text = L"I";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(280, 3);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(40, 36);
			this->button7->TabIndex = 6;
			this->button7->Text = L"U";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(233, 3);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(41, 36);
			this->button6->TabIndex = 5;
			this->button6->Text = L"Y";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(186, 3);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(41, 36);
			this->button5->TabIndex = 4;
			this->button5->Text = L"T";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(137, 3);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(41, 36);
			this->button4->TabIndex = 3;
			this->button4->Text = L"R";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(91, 3);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(40, 36);
			this->button3->TabIndex = 2;
			this->button3->Text = L"E";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(3, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(38, 36);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Q";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(47, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(38, 36);
			this->button2->TabIndex = 1;
			this->button2->Text = L"W";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(419, 3);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(41, 36);
			this->button10->TabIndex = 9;
			this->button10->Text = L"P";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->ColumnCount = 9;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				49.45055F)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50.54945F)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				48)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				48)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				47)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				47)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				47)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				49)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				56)));
			this->tableLayoutPanel3->Controls->Add(this->button12, 8, 0);
			this->tableLayoutPanel3->Controls->Add(this->button13, 7, 0);
			this->tableLayoutPanel3->Controls->Add(this->button14, 6, 0);
			this->tableLayoutPanel3->Controls->Add(this->button15, 5, 0);
			this->tableLayoutPanel3->Controls->Add(this->button16, 4, 0);
			this->tableLayoutPanel3->Controls->Add(this->button17, 3, 0);
			this->tableLayoutPanel3->Controls->Add(this->button19, 1, 0);
			this->tableLayoutPanel3->Controls->Add(this->button20, 0, 0);
			this->tableLayoutPanel3->Controls->Add(this->button18, 2, 0);
			this->tableLayoutPanel3->Location = System::Drawing::Point(142, 603);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 1;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(425, 42);
			this->tableLayoutPanel3->TabIndex = 2;
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(371, 3);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(41, 36);
			this->button12->TabIndex = 8;
			this->button12->Text = L"L";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(322, 3);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(41, 36);
			this->button13->TabIndex = 7;
			this->button13->Text = L"K";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->Location = System::Drawing::Point(275, 3);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(39, 36);
			this->button14->TabIndex = 6;
			this->button14->Text = L"J";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->Location = System::Drawing::Point(228, 3);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(41, 36);
			this->button15->TabIndex = 5;
			this->button15->Text = L"H";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->Location = System::Drawing::Point(181, 3);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(41, 36);
			this->button16->TabIndex = 4;
			this->button16->Text = L"G";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->Location = System::Drawing::Point(133, 3);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(41, 36);
			this->button17->TabIndex = 3;
			this->button17->Text = L"F";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button19
			// 
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->Location = System::Drawing::Point(44, 3);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(35, 36);
			this->button19->TabIndex = 1;
			this->button19->Text = L"S";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button20->Location = System::Drawing::Point(3, 3);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(35, 36);
			this->button20->TabIndex = 0;
			this->button20->Text = L"A";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->Location = System::Drawing::Point(85, 3);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(41, 36);
			this->button18->TabIndex = 2;
			this->button18->Text = L"D";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// tableLayoutPanel4
			// 
			this->tableLayoutPanel4->ColumnCount = 7;
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				48.51485F)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				51.48515F)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				43)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				47)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				51)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				48)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				56)));
			this->tableLayoutPanel4->Controls->Add(this->button22, 6, 0);
			this->tableLayoutPanel4->Controls->Add(this->button23, 5, 0);
			this->tableLayoutPanel4->Controls->Add(this->button24, 4, 0);
			this->tableLayoutPanel4->Controls->Add(this->button25, 3, 0);
			this->tableLayoutPanel4->Controls->Add(this->button26, 1, 0);
			this->tableLayoutPanel4->Controls->Add(this->button27, 0, 0);
			this->tableLayoutPanel4->Controls->Add(this->button28, 2, 0);
			this->tableLayoutPanel4->Location = System::Drawing::Point(190, 651);
			this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
			this->tableLayoutPanel4->RowCount = 1;
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel4->Size = System::Drawing::Size(329, 42);
			this->tableLayoutPanel4->TabIndex = 3;
			// 
			// button22
			// 
			this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button22->Location = System::Drawing::Point(275, 3);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(39, 36);
			this->button22->TabIndex = 6;
			this->button22->Text = L"M";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click);
			// 
			// button23
			// 
			this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button23->Location = System::Drawing::Point(227, 3);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(41, 36);
			this->button23->TabIndex = 5;
			this->button23->Text = L"N";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::button23_Click);
			// 
			// button24
			// 
			this->button24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button24->Location = System::Drawing::Point(176, 3);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(41, 36);
			this->button24->TabIndex = 4;
			this->button24->Text = L"B";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button24_Click);
			// 
			// button25
			// 
			this->button25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button25->Location = System::Drawing::Point(129, 3);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(41, 36);
			this->button25->TabIndex = 3;
			this->button25->Text = L"V";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::button25_Click);
			// 
			// button26
			// 
			this->button26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button26->Location = System::Drawing::Point(43, 3);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(35, 36);
			this->button26->TabIndex = 1;
			this->button26->Text = L"X";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::button26_Click);
			// 
			// button27
			// 
			this->button27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button27->Location = System::Drawing::Point(3, 3);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(32, 36);
			this->button27->TabIndex = 0;
			this->button27->Text = L"Z";
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::button27_Click);
			// 
			// button28
			// 
			this->button28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button28->Location = System::Drawing::Point(86, 3);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(37, 36);
			this->button28->TabIndex = 2;
			this->button28->Text = L"C";
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm::button28_Click);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(125, 654);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(53, 36);
			this->button11->TabIndex = 4;
			this->button11->Text = L"enter";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::Enter_Click);
			// 
			// button21
			// 
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button21->Location = System::Drawing::Point(525, 651);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(53, 36);
			this->button21->TabIndex = 5;
			this->button21->Text = L"del";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::Del_Click);
			// 
			// textBox31
			// 
			this->textBox31->AcceptsReturn = true;
			this->textBox31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox31->ForeColor = System::Drawing::Color::Transparent;
			this->textBox31->Location = System::Drawing::Point(108, 56);
			this->textBox31->Name = L"textBox31";
			this->textBox31->ReadOnly = true;
			this->textBox31->Size = System::Drawing::Size(530, 53);
			this->textBox31->TabIndex = 6;
			this->textBox31->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox31->Visible = false;
			// 
			// Welcome
			// 
			this->Welcome->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Welcome->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->Welcome->Location = System::Drawing::Point(66, 12);
			this->Welcome->Name = L"Welcome";
			this->Welcome->ReadOnly = true;
			this->Welcome->Size = System::Drawing::Size(611, 45);
			this->Welcome->TabIndex = 7;
			this->Welcome->Text = L"WORDLE by Jennifer Fonti";
			this->Welcome->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(718, 731);
			this->Controls->Add(this->Welcome);
			this->Controls->Add(this->textBox31);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->tableLayoutPanel4);
			this->Controls->Add(this->tableLayoutPanel3);
			this->Controls->Add(this->tableLayoutPanel2);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel3->ResumeLayout(false);
			this->tableLayoutPanel4->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	public: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		output(round, button1);
	}
	public: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		output(round, button2);
	}
	public: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		output(round, button3);
	}
	public: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		output(round, button4);
	}
	public: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		output(round, button5);
	}
	public: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		output(round, button6);
	}
	public: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		output(round, button7);
	}
	public: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		output(round, button8);
	}
	public: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		output(round, button9);
	}
	public: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		output(round, button10);
	}
	public: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
		output(round, button12);
	}
	public: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
		output(round, button13);
	}
	public: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
		output(round, button14);
	}
	public: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
		output(round, button15);
	}
	public: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
		output(round, button16);
	}
	public: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
		output(round, button17);
	}
	public: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
		output(round, button18);
	}
	public: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
		output(round, button19);
	}
	public: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
		output(round, button20);
	}
	public: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
		output(round, button22);
	}
	public: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
		output(round, button23);
	}
	public: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
		output(round, button24);
	}
	public: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
		output(round, button25);
	}
	public: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {
		output(round, button26);
	}
	public: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e) {
		output(round, button27);
	}
	public: System::Void button28_Click(System::Object^ sender, System::EventArgs^ e) {
		output(round, button28);
	}

	//enter button action listener
	public: System::Void Enter_Click(System::Object^ sender, System::EventArgs^ e) {
		//check which round and if all the boxes are full
		if (round == 0 && textBox1->Text != "" && textBox2->Text != "" && textBox3->Text != "" && textBox4->Text != "" && textBox5->Text != "") {
			//create a string guess with the content of the text boxes
			String^ guess = tbToString(round);
			//create a string to set the colors and set the colors
			String^ color = check(solution, guess);
			set_colors(color);
			//check if the user won
			check_vinto(guess);
			//increment the round so the row
			round = round + 1;
		}
		if (round == 1 && textBox6->Text != "" && textBox7->Text != "" && textBox8->Text != "" && textBox9->Text != "" && textBox10->Text != "") {
			String^ guess = tbToString(round);
			String^ color = check(solution, guess);
			set_colors(color);
			check_vinto(guess);
			round = round + 1;
		}
		if (round == 2 && textBox11->Text != "" && textBox12->Text != "" && textBox13->Text != "" && textBox14->Text != "" && textBox15->Text != "") {
			String^ guess = tbToString(round);
			String^ color = check(solution, guess);
			set_colors(color);
			check_vinto(guess);
			round = round + 1;
		}
		if (round == 3 && textBox16->Text != "" && textBox17->Text != "" && textBox18->Text != "" && textBox19->Text != "" && textBox20->Text != "") {
			String^ guess = tbToString(round);
			String^ color = check(solution, guess);
			set_colors(color);
			check_vinto(guess);
			round = round + 1;
		}
		if (round == 4 && textBox21->Text != "" && textBox22->Text != "" && textBox23->Text != "" && textBox24->Text != "" && textBox25->Text != "") {
			String^ guess = tbToString(round);
			String^ color = check(solution, guess);
			set_colors(color);
			check_vinto(guess);
			round = round + 1;
		}
		if (round == 5 && textBox26->Text != "" && textBox27->Text != "" && textBox28->Text != "" && textBox29->Text != "" && textBox30->Text != "") {
			String^ guess = tbToString(round);
			String^ color = check(solution, guess);
			set_colors(color);
			check_vinto(guess);
			round = round + 1;
			//if the user lost it displays the solution
			if (won == 0) {
				this->textBox31->Text = solution;
				this->textBox31->Visible = true;
			}
			
		}
		

	}
	//delete letter method, it checks which row is the user in and delete the letter the user wanted to delete
	public: System::Void Del_Click(System::Object^ sender, System::EventArgs^ e) {
		if (round == 0) {
			if (textBox2->Text == "") {
				textBox1->Text = "";
			}
			else if (textBox3->Text == "") {
				textBox2->Text = "";
			}
			else if (textBox4->Text == "") {
				textBox3->Text = "";
			}
			else if (textBox5->Text == "") {
				textBox4->Text = "";
			}
			else {
				textBox5->Text = "";
			}
		}
		else if (round == 1) {
			if (textBox7->Text == "") {
				textBox6->Text = "";
			}
			else if (textBox8->Text == "") {
				textBox7->Text = "";
			}
			else if (textBox9->Text == "") {
				textBox8->Text = "";
			}
			else if (textBox10->Text == "") {
				textBox9->Text = "";
			}
			else {
				textBox10->Text = "";
			}
		}
		else if (round == 2) {
			if (textBox12->Text == "") {
				textBox11->Text = "";
			}
			else if (textBox13->Text == "") {
				textBox12->Text = "";
			}
			else if (textBox14->Text == "") {
				textBox13->Text = "";
			}
			else if (textBox15->Text == "") {
				textBox14->Text = "";
			}
			else {
				textBox15->Text = "";
			}
		}
		else if (round == 3) {
			if (textBox17->Text == "") {
				textBox16->Text = "";
			}
			else if (textBox18->Text == "") {
				textBox17->Text = "";
			}
			else if (textBox19->Text == "") {
				textBox18->Text = "";
			}
			else if (textBox20->Text == "") {
				textBox19->Text = "";
			}
			else {
				textBox20->Text = "";
			}
		}
		else if (round == 4) {
			if (textBox22->Text == "") {
				textBox21->Text = "";
			}
			else if (textBox23->Text == "") {
				textBox22->Text = "";
			}
			else if (textBox24->Text == "") {
				textBox23->Text = "";
			}
			else if (textBox25->Text == "") {
				textBox24->Text = "";
			}
			else {
				textBox25->Text = "";
			}
		}
		else if (round == 5) {
			if (textBox27->Text == "") {
				textBox26->Text = "";
			}
			else if (textBox28->Text == "") {
				textBox27->Text = "";
			}
			else if (textBox29->Text == "") {
				textBox28->Text = "";
			}
			else if (textBox30->Text == "") {
				textBox29->Text = "";
			}
			else {
				textBox30->Text = "";
			}

		}
	}

	//print in the text area the content of the button pressed, is called by any letter button when pressed
	public: void output(int round, System::Windows::Forms::Button^ button) {
		
		if (round == 0) {
			if (textBox1->Text == "") {
				textBox1->Text = button->Text;
			}else if(textBox2->Text == "") {
				textBox2->Text = button->Text;
			}else if (textBox3->Text == "") {
				textBox3->Text = button->Text;
			}else if (textBox4->Text == "") {
				textBox4->Text = button->Text;
			}else if (textBox5->Text == "") {
				textBox5->Text = button->Text;
			}
		}else if (round == 1) {
			if (textBox6->Text == "") {
				textBox6->Text = button->Text;
			}else if (textBox7->Text == "") {
				textBox7->Text = button->Text;
			}else if (textBox8->Text == "") {
				textBox8->Text = button->Text;
			}else if (textBox9->Text == "") {
				textBox9->Text = button->Text;
			}else if (textBox10->Text == "") {
				textBox10->Text = button->Text;
			}
		}else if (round == 2) {
			if (textBox11->Text == "") {
				textBox11->Text = button->Text;
			}else if (textBox12->Text == "") {
				textBox12->Text = button->Text;
			}else if (textBox13->Text == "") {
				textBox13->Text = button->Text;
			}else if (textBox14->Text == "") {
				textBox14->Text = button->Text;
			}else if (textBox15->Text == "") {
				textBox15->Text = button->Text;
			}
		}else if (round == 3) {
			if (textBox16->Text == "") {
				textBox16->Text = button->Text;
			}else if (textBox17->Text == "") {
				textBox17->Text = button->Text;
			}else if (textBox18->Text == "") {
				textBox18->Text = button->Text;
			}else if (textBox19->Text == "") {
				textBox19->Text = button->Text;
			}else if (textBox20->Text == "") {
				textBox20->Text = button->Text;
			}
		}else if (round == 4) {
			if (textBox21->Text == "") {
				textBox21->Text = button->Text;
			}else if (textBox22->Text == "") {
				textBox22->Text = button->Text;
			}else if (textBox23->Text == "") {
				textBox23->Text = button->Text;
			}else if (textBox24->Text == "") {
				textBox24->Text = button->Text;
			}else if (textBox25->Text == "") {
				textBox25->Text = button->Text;
			}
		}else if (round == 5) {
			if (textBox26->Text == "") {
				textBox26->Text = button->Text;
			}
			else if (textBox27->Text == "") {
				textBox27->Text = button->Text;
			}
			else if (textBox28->Text == "") {
				textBox28->Text = button->Text;
			}
			else if (textBox29->Text == "") {
				textBox29->Text = button->Text;
			}
			else if (textBox30->Text == "") {
				textBox30->Text = button->Text;
			}
		}

	}
	String^ tbToString(int round) {
		String^ temp = "";
		if (round == 0) {
			temp += textBox1->Text;
			temp += textBox2->Text;
			temp += textBox3->Text;
			temp += textBox4->Text;
			temp += textBox5->Text;
		}
		if (round == 1) {
			temp += textBox6->Text;
			temp += textBox7->Text;
			temp += textBox8->Text;
			temp += textBox9->Text;
			temp += textBox10->Text;
		}
		if (round == 2) {
			temp += textBox11->Text;
			temp += textBox12->Text;
			temp += textBox13->Text;
			temp += textBox14->Text;
			temp += textBox15->Text;
		}
		if (round == 3) {
			temp += textBox16->Text;
			temp += textBox17->Text;
			temp += textBox18->Text;
			temp += textBox19->Text;
			temp += textBox20->Text;
		}
		if (round == 4) {
			temp += textBox21->Text;
			temp += textBox22->Text;
			temp += textBox23->Text;
			temp += textBox24->Text;
			temp += textBox25->Text;
		}
		if (round == 5) {
			temp += textBox26->Text;
			temp += textBox27->Text;
			temp += textBox28->Text;
			temp += textBox29->Text;
			temp += textBox30->Text;
		}
		return temp;
	}

	//checks if the letter is present and returns a string that will help to set the colors
	String^ check(String^ solution, String^ guess) {
		String^ colors = "";
		//check each letter with solution's letters
		for (int i = 0; i < 5; i++) {
			char letter = guess[i];
			int found = 0;
			int green = 0;
			for (int c = 0; c < 5; c++) {
				//if it finds the letter change found to one and then checks if it is in the right position
				if (letter == solution[c]) {
					found = 1;
					//if it is in the right position change green to one
					if (c == i) {
						green = 1;
					}
				}
			}
			//creates the output string
			if (found != 0) {
				if (green != 0) {
					//if the letter was found in the right position add G(as green) to the string
					colors += "G";
				}
				else {
					//if it was found but not in the right position add Y(as yellow) to the string
					colors += "Y";
				}
			}
			else {
				//if it wasn't found add W(as white) to the string
				colors += "W";
			}
		}
		//the return string should be something like "GYYGW" (example)
		return colors;
	}

	//this function get a character from the color string and it translates it in a color
	Color get_color(char c) {
		if (c == 'G') {
			return  System::Drawing::Color::SpringGreen;
		}
		else if (c == 'Y') {
			return  System::Drawing::Color::Yellow;
		}
		else {
			return  System::Drawing::Color::LightGray;
		}
	}

	//this method set the color to each cell checking on the color string
	void set_colors(String^color){
		//check the round and from the color string sets a color for each text box of that row
		if (round == 0) {
			this->textBox1->BackColor = get_color(color[0]);
			this->textBox2->BackColor = get_color(color[1]);
			this->textBox3->BackColor = get_color(color[2]);
			this->textBox4->BackColor = get_color(color[3]);
			this->textBox5->BackColor = get_color(color[4]);
		}
		if (round == 1) {
			this->textBox6->BackColor = get_color(color[0]);
			this->textBox7->BackColor = get_color(color[1]);
			this->textBox8->BackColor = get_color(color[2]);
			this->textBox9->BackColor = get_color(color[3]);
			this->textBox10->BackColor = get_color(color[4]);
		}
		if (round == 2) {
			this->textBox11->BackColor = get_color(color[0]);
			this->textBox12->BackColor = get_color(color[1]);
			this->textBox13->BackColor = get_color(color[2]);
			this->textBox14->BackColor = get_color(color[3]);
			this->textBox15->BackColor = get_color(color[4]);
		}
		if (round == 3) {
			this->textBox16->BackColor = get_color(color[0]);
			this->textBox17->BackColor = get_color(color[1]);
			this->textBox18->BackColor = get_color(color[2]);
			this->textBox19->BackColor = get_color(color[3]);
			this->textBox20->BackColor = get_color(color[4]);
		}
		if (round == 4) {
			this->textBox21->BackColor = get_color(color[0]);
			this->textBox22->BackColor = get_color(color[1]);
			this->textBox23->BackColor = get_color(color[2]);
			this->textBox24->BackColor = get_color(color[3]);
			this->textBox25->BackColor = get_color(color[4]);
		}
		if (round == 5) {
			this->textBox26->BackColor = get_color(color[0]);
			this->textBox27->BackColor = get_color(color[1]);
			this->textBox28->BackColor = get_color(color[2]);
			this->textBox29->BackColor = get_color(color[3]);
			this->textBox30->BackColor = get_color(color[4]);
		}

	}
	
	//chech if the guess is the same as the solution the user won
	void check_vinto(String^ guess) {
		if (guess == solution) {
			//set the round at 6 to avoid the user to keep writing
			round = 6;
			//set won at 1
			won = 1;
			//show a text box saying the user won
			this->textBox31->Text = "YOU WON";
			this->textBox31->Visible = true;
		}
	}
};
}
