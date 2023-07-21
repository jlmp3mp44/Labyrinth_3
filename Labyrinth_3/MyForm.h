#pragma once
#include <vector>
#include <cliext/vector>
#include <cliext/adapter>
#include <iostream>
#include "Level2.h"

namespace Labyrinth3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for main
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
	private: System::Windows::Forms::FlowLayoutPanel^ Panel1;
	protected:

	private: System::Windows::Forms::FlowLayoutPanel^ Panel2;
	protected:

	private: System::Windows::Forms::FlowLayoutPanel^ Panel3;
	private: System::Windows::Forms::FlowLayoutPanel^ Panel4;



	private: System::Windows::Forms::FlowLayoutPanel^ Panel5;

	private: System::Windows::Forms::FlowLayoutPanel^ Panel6;

	private: System::Windows::Forms::FlowLayoutPanel^ Panel7;

	private: System::Windows::Forms::FlowLayoutPanel^ Panel8;
	private: System::Windows::Forms::FlowLayoutPanel^ Panel9;
	private: System::Windows::Forms::FlowLayoutPanel^ Panel10;



	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ cat;
	private: System::Windows::Forms::Panel^ Exit;
	private: System::Windows::Forms::Label^ label1;





	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->Panel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->Panel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->Panel3 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->Panel4 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->Panel5 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->Panel6 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->Panel7 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->Panel8 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->Panel9 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->Panel10 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->cat = (gcnew System::Windows::Forms::PictureBox());
			this->Exit = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cat))->BeginInit();
			this->SuspendLayout();
			// 
			// Panel1
			// 
			this->Panel1->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->Panel1->Location = System::Drawing::Point(162, 412);
			this->Panel1->Name = L"Panel1";
			this->Panel1->Size = System::Drawing::Size(188, 40);
			this->Panel1->TabIndex = 0;
			// 
			// Panel2
			// 
			this->Panel2->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->Panel2->Location = System::Drawing::Point(160, 287);
			this->Panel2->Name = L"Panel2";
			this->Panel2->Size = System::Drawing::Size(43, 165);
			this->Panel2->TabIndex = 1;
			// 
			// Panel3
			// 
			this->Panel3->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->Panel3->Location = System::Drawing::Point(87, 261);
			this->Panel3->Name = L"Panel3";
			this->Panel3->Size = System::Drawing::Size(116, 42);
			this->Panel3->TabIndex = 2;
			// 
			// Panel4
			// 
			this->Panel4->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->Panel4->Location = System::Drawing::Point(322, 261);
			this->Panel4->Name = L"Panel4";
			this->Panel4->Size = System::Drawing::Size(48, 191);
			this->Panel4->TabIndex = 3;
			// 
			// Panel5
			// 
			this->Panel5->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->Panel5->Location = System::Drawing::Point(160, 117);
			this->Panel5->Name = L"Panel5";
			this->Panel5->Size = System::Drawing::Size(42, 186);
			this->Panel5->TabIndex = 4;
			// 
			// Panel6
			// 
			this->Panel6->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->Panel6->Location = System::Drawing::Point(162, 117);
			this->Panel6->Name = L"Panel6";
			this->Panel6->Size = System::Drawing::Size(208, 40);
			this->Panel6->TabIndex = 1;
			// 
			// Panel7
			// 
			this->Panel7->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->Panel7->Location = System::Drawing::Point(349, 117);
			this->Panel7->Name = L"Panel7";
			this->Panel7->Size = System::Drawing::Size(193, 40);
			this->Panel7->TabIndex = 5;
			// 
			// Panel8
			// 
			this->Panel8->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->Panel8->Location = System::Drawing::Point(497, 136);
			this->Panel8->Name = L"Panel8";
			this->Panel8->Size = System::Drawing::Size(45, 131);
			this->Panel8->TabIndex = 6;
			// 
			// Panel9
			// 
			this->Panel9->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->Panel9->Location = System::Drawing::Point(497, 261);
			this->Panel9->Name = L"Panel9";
			this->Panel9->Size = System::Drawing::Size(45, 191);
			this->Panel9->TabIndex = 1;
			// 
			// Panel10
			// 
			this->Panel10->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->Panel10->Location = System::Drawing::Point(497, 261);
			this->Panel10->Name = L"Panel10";
			this->Panel10->Size = System::Drawing::Size(102, 40);
			this->Panel10->TabIndex = 7;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(193)));
			this->pictureBox1->Location = System::Drawing::Point(71, 27);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(630, 10);
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(193)));
			this->pictureBox2->Location = System::Drawing::Point(259, 538);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(443, 10);
			this->pictureBox2->TabIndex = 9;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(193)));
			this->pictureBox3->Location = System::Drawing::Point(71, 538);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(79, 10);
			this->pictureBox3->TabIndex = 10;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(193)));
			this->pictureBox4->Location = System::Drawing::Point(71, 27);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(10, 521);
			this->pictureBox4->TabIndex = 11;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(193)));
			this->pictureBox5->Location = System::Drawing::Point(691, 27);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(10, 82);
			this->pictureBox5->TabIndex = 12;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(193)));
			this->pictureBox6->Location = System::Drawing::Point(691, 195);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(10, 352);
			this->pictureBox6->TabIndex = 13;
			this->pictureBox6->TabStop = false;
			// 
			// cat
			// 
			this->cat->BackColor = System::Drawing::Color::Transparent;
			this->cat->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cat.Image")));
			this->cat->Location = System::Drawing::Point(152, 459);
			this->cat->Name = L"cat";
			this->cat->Size = System::Drawing::Size(101, 89);
			this->cat->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->cat->TabIndex = 0;
			this->cat->TabStop = false;
			// 
			// Exit
			// 
			this->Exit->BackColor = System::Drawing::Color::Transparent;
			this->Exit->ForeColor = System::Drawing::SystemColors::AppWorkspace;
			this->Exit->Location = System::Drawing::Point(661, 106);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(118, 93);
			this->Exit->TabIndex = 14;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::HotPink;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(340, 592);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(164, 50);
			this->label1->TabIndex = 15;
			this->label1->Text = L"LEVEL 1";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Aquamarine;
			this->ClientSize = System::Drawing::Size(771, 681);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Panel10);
			this->Controls->Add(this->Panel9);
			this->Controls->Add(this->Panel8);
			this->Controls->Add(this->Panel7);
			this->Controls->Add(this->Panel6);
			this->Controls->Add(this->Panel5);
			this->Controls->Add(this->Panel4);
			this->Controls->Add(this->Panel3);
			this->Controls->Add(this->Panel2);
			this->Controls->Add(this->Panel1);
			this->Controls->Add(this->Exit);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->cat);
			this->Name = L"MyForm";
			this->Text = L"main";
			this->Load += gcnew System::EventHandler(this, &MyForm::main_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::Main_KeyDown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cat))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		bool move = false;
		bool accept_move = true;
		Keys lastPressed;
		String^ nameMain = "a"; // Змінна для збереження посилання на поточний прямокутник
		bool EndLevel = false;
  private: System::Void main_Load(System::Object^ sender, System::EventArgs^ e) {

  }

  private: System::Void Main_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	  System::Drawing::Point catPosition = this->cat->Location;
	  int catStartX = catPosition.X; // Координата X елемента cat
	  int catStartY = catPosition.Y;
	  move = false;

	  if (e->KeyCode == Keys::Up && accept_move) {
		  this->cat->Location = System::Drawing::Point(catStartX, catStartY - 10);
		  move = true;
	  }
	  else if (e->KeyCode == Keys::Down && accept_move) {
		  this->cat->Location = System::Drawing::Point(catStartX, catStartY + 10);
		  move = true;
	  }
	  else if (e->KeyCode == Keys::Left && accept_move) {
		  this->cat->Location = System::Drawing::Point(catStartX - 10, catStartY);
		  move = true;
	  }
	  else if (e->KeyCode == Keys::Right && accept_move) {
		  this->cat->Location = System::Drawing::Point(catStartX + 10, catStartY);
		  move = true;
	  }

	  if (e->KeyCode == Keys::Space) {
		  accept_move = true;

	  }
	  Check_Bounds();
  }

  private: System::Void Check_Bounds() {
	  System::Collections::Generic::List<Panel^>^ rectangles = allRect();


	  if (move && accept_move) {
		  if (this->cat->Bounds.IntersectsWith(this->Exit->Bounds)) {
			  this->Exit->BackColor = System::Drawing::Color::Blue;
			  EndLevel = true;
			  MessageBox::Show(this, "You pass the level");
			  new_Level();
		  }

		  else {
			
			  String^ nameNow = "b";
			  for (int i = 0; i < rectangles->Count; i++) {
				  Rectangle rectBounds = rectangles[i]->Bounds;
				  if (this->cat->Bounds.IntersectsWith(rectBounds) &&
					  ((String::Equals(nameMain, nameNow, StringComparison::OrdinalIgnoreCase))!=0)) {
					  nameNow = rectangles[i]->Name;
					  System::Console::WriteLine(nameMain); // Виводимо nameMain
					  System::Console::WriteLine(nameNow);
					  std::cout << i << std::endl;
					  accept_move = false;
					  break;
				  }
			  }
			  nameMain = nameNow;
		  }
	  }
  }

		 System::Collections::Generic::List<Panel^>^ allRect() {
			 System::Collections::Generic::List<Panel^>^ rectangles
				 = gcnew System::Collections::Generic::List<Panel^>();
			 rectangles->Add(Panel1);
			 rectangles->Add(Panel2);
			 rectangles->Add(Panel3);
			 rectangles->Add(Panel4);
			 rectangles->Add(Panel5);
			 rectangles->Add(Panel6);
			 rectangles->Add(Panel7);
			 rectangles->Add(Panel8);
			 rectangles->Add(Panel9);
			 rectangles->Add(Panel10);
			 return rectangles;
		 }

		
void new_Level() {
	Level2^ level2 = gcnew Level2();
	level2->Show();
	MyForm::Hide();
}
};
}