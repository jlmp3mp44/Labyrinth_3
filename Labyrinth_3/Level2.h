#pragma once
#include "BaseForm.h"



namespace Labyrinth3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Level2
	/// </summary>
	public ref class Level2 : public BaseForm
	{
	public:
		Level2(void)
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
		~Level2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ cat;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::FlowLayoutPanel^ Panel8;
	private: System::Windows::Forms::FlowLayoutPanel^ Panel1;
	private: System::Windows::Forms::FlowLayoutPanel^ Panel2;
	private: System::Windows::Forms::FlowLayoutPanel^ Panel3;
	private: System::Windows::Forms::FlowLayoutPanel^ Panel4;




	private: System::Windows::Forms::FlowLayoutPanel^ Panel5;

	private: System::Windows::Forms::FlowLayoutPanel^ Panel6;
	private: System::Windows::Forms::FlowLayoutPanel^ Panel7;
	private: System::Windows::Forms::FlowLayoutPanel^ Panel15;



	private: System::Windows::Forms::FlowLayoutPanel^ Panel9;
	private: System::Windows::Forms::FlowLayoutPanel^ Panel10;


	private: System::Windows::Forms::FlowLayoutPanel^ Panel11;
	private: System::Windows::Forms::FlowLayoutPanel^ Panel12;


	private: System::Windows::Forms::FlowLayoutPanel^ Panel13;

	private: System::Windows::Forms::FlowLayoutPanel^ Panel14;
	private: System::Windows::Forms::Panel^ Exit;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Level2::typeid));
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->cat = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Panel8 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->Panel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->Panel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->Panel3 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->Panel4 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->Panel5 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->Panel6 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->Panel7 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->Panel15 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->Panel9 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->Panel10 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->Panel11 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->Panel12 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->Panel13 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->Panel14 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->Exit = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cat))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(193)));
			this->pictureBox6->Location = System::Drawing::Point(649, 206);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(10, 352);
			this->pictureBox6->TabIndex = 19;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(193)));
			this->pictureBox5->Location = System::Drawing::Point(649, 38);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(10, 82);
			this->pictureBox5->TabIndex = 18;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(193)));
			this->pictureBox4->Location = System::Drawing::Point(29, 38);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(10, 521);
			this->pictureBox4->TabIndex = 17;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(193)));
			this->pictureBox3->Location = System::Drawing::Point(29, 549);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(79, 10);
			this->pictureBox3->TabIndex = 16;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(193)));
			this->pictureBox2->Location = System::Drawing::Point(217, 549);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(443, 10);
			this->pictureBox2->TabIndex = 15;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(193)));
			this->pictureBox1->Location = System::Drawing::Point(29, 38);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(630, 10);
			this->pictureBox1->TabIndex = 14;
			this->pictureBox1->TabStop = false;
			// 
			// cat
			// 
			this->cat->BackColor = System::Drawing::Color::Transparent;
			this->cat->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cat.Image")));
			this->cat->Location = System::Drawing::Point(110, 497);
			this->cat->Name = L"cat";
			this->cat->Size = System::Drawing::Size(70, 50);
			this->cat->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->cat->TabIndex = 0;
			this->cat->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Violet;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(384, 584);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(164, 50);
			this->label1->TabIndex = 21;
			this->label1->Text = L"LEVEL 2";
			// 
			// Panel8
			// 
			this->Panel8->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->Panel8->Location = System::Drawing::Point(100, 401);
			this->Panel8->Name = L"Panel8";
			this->Panel8->Size = System::Drawing::Size(125, 41);
			this->Panel8->TabIndex = 22;
			// 
			// Panel1
			// 
			this->Panel1->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->Panel1->Location = System::Drawing::Point(180, 298);
			this->Panel1->Name = L"Panel1";
			this->Panel1->Size = System::Drawing::Size(45, 131);
			this->Panel1->TabIndex = 23;
			// 
			// Panel2
			// 
			this->Panel2->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->Panel2->Location = System::Drawing::Point(98, 281);
			this->Panel2->Name = L"Panel2";
			this->Panel2->Size = System::Drawing::Size(127, 42);
			this->Panel2->TabIndex = 24;
			// 
			// Panel3
			// 
			this->Panel3->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->Panel3->Location = System::Drawing::Point(180, 120);
			this->Panel3->Name = L"Panel3";
			this->Panel3->Size = System::Drawing::Size(45, 172);
			this->Panel3->TabIndex = 25;
			// 
			// Panel4
			// 
			this->Panel4->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->Panel4->Location = System::Drawing::Point(315, 412);
			this->Panel4->Name = L"Panel4";
			this->Panel4->Size = System::Drawing::Size(45, 131);
			this->Panel4->TabIndex = 26;
			// 
			// Panel5
			// 
			this->Panel5->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->Panel5->Location = System::Drawing::Point(315, 281);
			this->Panel5->Name = L"Panel5";
			this->Panel5->Size = System::Drawing::Size(45, 131);
			this->Panel5->TabIndex = 7;
			// 
			// Panel6
			// 
			this->Panel6->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->Panel6->Location = System::Drawing::Point(315, 161);
			this->Panel6->Name = L"Panel6";
			this->Panel6->Size = System::Drawing::Size(45, 131);
			this->Panel6->TabIndex = 7;
			// 
			// Panel7
			// 
			this->Panel7->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->Panel7->Location = System::Drawing::Point(315, 370);
			this->Panel7->Name = L"Panel7";
			this->Panel7->Size = System::Drawing::Size(123, 42);
			this->Panel7->TabIndex = 27;
			// 
			// Panel15
			// 
			this->Panel15->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->Panel15->Location = System::Drawing::Point(434, 54);
			this->Panel15->Name = L"Panel15";
			this->Panel15->Size = System::Drawing::Size(45, 131);
			this->Panel15->TabIndex = 28;
			// 
			// Panel9
			// 
			this->Panel9->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->Panel9->Location = System::Drawing::Point(434, 180);
			this->Panel9->Name = L"Panel9";
			this->Panel9->Size = System::Drawing::Size(45, 131);
			this->Panel9->TabIndex = 29;
			// 
			// Panel10
			// 
			this->Panel10->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->Panel10->Location = System::Drawing::Point(557, 264);
			this->Panel10->Name = L"Panel10";
			this->Panel10->Size = System::Drawing::Size(45, 131);
			this->Panel10->TabIndex = 30;
			// 
			// Panel11
			// 
			this->Panel11->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->Panel11->Location = System::Drawing::Point(434, 370);
			this->Panel11->Name = L"Panel11";
			this->Panel11->Size = System::Drawing::Size(45, 102);
			this->Panel11->TabIndex = 31;
			// 
			// Panel12
			// 
			this->Panel12->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->Panel12->Location = System::Drawing::Point(557, 264);
			this->Panel12->Name = L"Panel12";
			this->Panel12->Size = System::Drawing::Size(94, 47);
			this->Panel12->TabIndex = 32;
			// 
			// Panel13
			// 
			this->Panel13->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->Panel13->Location = System::Drawing::Point(557, 385);
			this->Panel13->Name = L"Panel13";
			this->Panel13->Size = System::Drawing::Size(45, 131);
			this->Panel13->TabIndex = 33;
			// 
			// Panel14
			// 
			this->Panel14->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->Panel14->Location = System::Drawing::Point(63, 401);
			this->Panel14->Name = L"Panel14";
			this->Panel14->Size = System::Drawing::Size(45, 131);
			this->Panel14->TabIndex = 34;
			// 
			// Exit
			// 
			this->Exit->Location = System::Drawing::Point(636, 120);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(74, 100);
			this->Exit->TabIndex = 35;
			// 
			// Level2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::RoyalBlue;
			this->ClientSize = System::Drawing::Size(748, 659);
			this->Controls->Add(this->Exit);
			this->Controls->Add(this->Panel11);
			this->Controls->Add(this->Panel14);
			this->Controls->Add(this->Panel13);
			this->Controls->Add(this->Panel10);
			this->Controls->Add(this->Panel12);
			this->Controls->Add(this->Panel9);
			this->Controls->Add(this->Panel15);
			this->Controls->Add(this->Panel7);
			this->Controls->Add(this->Panel6);
			this->Controls->Add(this->Panel5);
			this->Controls->Add(this->Panel4);
			this->Controls->Add(this->Panel3);
			this->Controls->Add(this->Panel2);
			this->Controls->Add(this->Panel1);
			this->Controls->Add(this->Panel8);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->cat);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"Level2";
			this->Text = L"Level2";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Level2::Main_KeyDown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cat))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		bool move = false;
		bool EndLevel = false;
		Keys lastKeyPressed;
		 private: System::Void Main_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
			 System::Drawing::Point catPosition = this->cat->Location;
			 int catStartX = catPosition.X; // Координата X елемента cat
			 int catStartY = catPosition.Y;
			 move = false;
			 if (e->KeyCode == Keys::Up && keyUp) {
				 this->cat->Location = System::Drawing::Point(catStartX, catStartY - 10);
				 lastKeyPressed = Keys::Up;
				 move = true;
				 keyDown = keyLeft = keyRight = true;
			 }
			 else if (e->KeyCode == Keys::Down && keyDown) {
				 this->cat->Location = System::Drawing::Point(catStartX, catStartY + 10);
				 move = true;
				 lastKeyPressed = Keys::Down;
				 keyLeft = keyUp = keyRight = true;
			 }
			 else if (e->KeyCode == Keys::Left && keyLeft) {
				 this->cat->Location = System::Drawing::Point(catStartX - 10, catStartY);
				 move = true;
				 lastKeyPressed = Keys::Left;
				 keyDown = keyUp = keyRight = true;
			 }
			 else if (e->KeyCode == Keys::Right && keyRight) {
				 this->cat->Location = System::Drawing::Point(catStartX + 10, catStartY);
				 move = true;
				 lastKeyPressed = Keys::Right;
				 keyDown = keyLeft = keyUp = true;
			 }

			System::Collections::Generic::List<Panel^>^ rectangles = allRect();
			System::Collections::Generic::List<PictureBox^>^ outRectangles = allOutRect(pictureBox1, pictureBox2,
				pictureBox3, pictureBox4, pictureBox5, pictureBox6);
			Check_Bounds(rectangles,outRectangles, this->cat, this->Exit, move,
				 EndLevel, System::Drawing::Color::Aqua, lastKeyPressed);
			if (EndLevel) {
				score += 20;
				String^ scoreStr = score.ToString();
				MessageBox::Show(this, "You pass the level, YOUR SCORE", scoreStr);
				//new_Level();
			}
		}
	public: virtual System::Collections::Generic::List<Panel^>^ allRect() override {
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
				   rectangles->Add(Panel11);
				   rectangles->Add(Panel12);
				   rectangles->Add(Panel13);
				   rectangles->Add(Panel14);
				   rectangles->Add(Panel15);
				   return rectangles;
			   }

	
	};
}
