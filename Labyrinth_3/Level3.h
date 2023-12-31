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
	/// Summary for Level3
	/// </summary>
	public ref class Level3 : BaseForm
	{
	public:
		Level3(void)
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
		~Level3()
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
	private: System::Windows::Forms::FlowLayoutPanel^ Panel14;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel4;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel5;

	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel2;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel3;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel6;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel7;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel8;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel9;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel10;

	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel12;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel13;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel14;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel15;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel11;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel16;
	private: System::Windows::Forms::PictureBox^ cat;
	private: System::Windows::Forms::Panel^ Exit;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::PictureBox^ pictureBox10;
	private: System::Windows::Forms::PictureBox^ pictureBox11;
	private: System::Windows::Forms::PictureBox^ pictureBox12;
	private: System::Windows::Forms::PictureBox^ pictureBox13;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Level3::typeid));
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->Panel14 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->flowLayoutPanel4 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->flowLayoutPanel5 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->flowLayoutPanel11 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->flowLayoutPanel3 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->flowLayoutPanel6 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->flowLayoutPanel7 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->flowLayoutPanel8 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->flowLayoutPanel9 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->flowLayoutPanel10 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->flowLayoutPanel12 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->flowLayoutPanel13 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->flowLayoutPanel14 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->flowLayoutPanel15 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->flowLayoutPanel16 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->cat = (gcnew System::Windows::Forms::PictureBox());
			this->Exit = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cat))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(193)));
			this->pictureBox6->Location = System::Drawing::Point(739, 203);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(10, 450);
			this->pictureBox6->TabIndex = 25;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(193)));
			this->pictureBox5->Location = System::Drawing::Point(739, 35);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(10, 82);
			this->pictureBox5->TabIndex = 24;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(193)));
			this->pictureBox4->Location = System::Drawing::Point(32, 35);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(10, 617);
			this->pictureBox4->TabIndex = 23;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(193)));
			this->pictureBox3->Location = System::Drawing::Point(32, 643);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(79, 10);
			this->pictureBox3->TabIndex = 22;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(193)));
			this->pictureBox2->Location = System::Drawing::Point(210, 643);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(539, 10);
			this->pictureBox2->TabIndex = 21;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(193)));
			this->pictureBox1->Location = System::Drawing::Point(32, 35);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(717, 10);
			this->pictureBox1->TabIndex = 20;
			this->pictureBox1->TabStop = false;
			// 
			// Panel14
			// 
			this->Panel14->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->Panel14->Location = System::Drawing::Point(116, 515);
			this->Panel14->Name = L"Panel14";
			this->Panel14->Size = System::Drawing::Size(275, 33);
			this->Panel14->TabIndex = 35;
			// 
			// flowLayoutPanel4
			// 
			this->flowLayoutPanel4->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->flowLayoutPanel4->Location = System::Drawing::Point(351, 399);
			this->flowLayoutPanel4->Name = L"flowLayoutPanel4";
			this->flowLayoutPanel4->Size = System::Drawing::Size(39, 149);
			this->flowLayoutPanel4->TabIndex = 39;
			// 
			// flowLayoutPanel5
			// 
			this->flowLayoutPanel5->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->flowLayoutPanel5->Location = System::Drawing::Point(351, 371);
			this->flowLayoutPanel5->Name = L"flowLayoutPanel5";
			this->flowLayoutPanel5->Size = System::Drawing::Size(136, 33);
			this->flowLayoutPanel5->TabIndex = 40;
			// 
			// flowLayoutPanel11
			// 
			this->flowLayoutPanel11->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->flowLayoutPanel11->Location = System::Drawing::Point(351, 371);
			this->flowLayoutPanel11->Name = L"flowLayoutPanel11";
			this->flowLayoutPanel11->Size = System::Drawing::Size(39, 177);
			this->flowLayoutPanel11->TabIndex = 54;
			// 
			// flowLayoutPanel2
			// 
			this->flowLayoutPanel2->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->flowLayoutPanel2->Location = System::Drawing::Point(585, 515);
			this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
			this->flowLayoutPanel2->Size = System::Drawing::Size(38, 129);
			this->flowLayoutPanel2->TabIndex = 42;
			// 
			// flowLayoutPanel3
			// 
			this->flowLayoutPanel3->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->flowLayoutPanel3->Location = System::Drawing::Point(624, 451);
			this->flowLayoutPanel3->Name = L"flowLayoutPanel3";
			this->flowLayoutPanel3->Size = System::Drawing::Size(115, 33);
			this->flowLayoutPanel3->TabIndex = 43;
			// 
			// flowLayoutPanel6
			// 
			this->flowLayoutPanel6->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->flowLayoutPanel6->Location = System::Drawing::Point(102, 45);
			this->flowLayoutPanel6->Name = L"flowLayoutPanel6";
			this->flowLayoutPanel6->Size = System::Drawing::Size(38, 229);
			this->flowLayoutPanel6->TabIndex = 44;
			// 
			// flowLayoutPanel7
			// 
			this->flowLayoutPanel7->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->flowLayoutPanel7->Location = System::Drawing::Point(228, 241);
			this->flowLayoutPanel7->Name = L"flowLayoutPanel7";
			this->flowLayoutPanel7->Size = System::Drawing::Size(39, 172);
			this->flowLayoutPanel7->TabIndex = 45;
			// 
			// flowLayoutPanel8
			// 
			this->flowLayoutPanel8->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->flowLayoutPanel8->Location = System::Drawing::Point(251, 241);
			this->flowLayoutPanel8->Name = L"flowLayoutPanel8";
			this->flowLayoutPanel8->Size = System::Drawing::Size(80, 33);
			this->flowLayoutPanel8->TabIndex = 46;
			// 
			// flowLayoutPanel9
			// 
			this->flowLayoutPanel9->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->flowLayoutPanel9->Location = System::Drawing::Point(427, 241);
			this->flowLayoutPanel9->Name = L"flowLayoutPanel9";
			this->flowLayoutPanel9->Size = System::Drawing::Size(115, 33);
			this->flowLayoutPanel9->TabIndex = 47;
			// 
			// flowLayoutPanel10
			// 
			this->flowLayoutPanel10->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->flowLayoutPanel10->Location = System::Drawing::Point(340, 130);
			this->flowLayoutPanel10->Name = L"flowLayoutPanel10";
			this->flowLayoutPanel10->Size = System::Drawing::Size(115, 33);
			this->flowLayoutPanel10->TabIndex = 48;
			// 
			// flowLayoutPanel12
			// 
			this->flowLayoutPanel12->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->flowLayoutPanel12->Location = System::Drawing::Point(427, 130);
			this->flowLayoutPanel12->Name = L"flowLayoutPanel12";
			this->flowLayoutPanel12->Size = System::Drawing::Size(39, 144);
			this->flowLayoutPanel12->TabIndex = 50;
			// 
			// flowLayoutPanel13
			// 
			this->flowLayoutPanel13->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->flowLayoutPanel13->Location = System::Drawing::Point(624, 241);
			this->flowLayoutPanel13->Name = L"flowLayoutPanel13";
			this->flowLayoutPanel13->Size = System::Drawing::Size(115, 33);
			this->flowLayoutPanel13->TabIndex = 42;
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->flowLayoutPanel1->Location = System::Drawing::Point(511, 142);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(36, 132);
			this->flowLayoutPanel1->TabIndex = 51;
			// 
			// flowLayoutPanel14
			// 
			this->flowLayoutPanel14->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->flowLayoutPanel14->Location = System::Drawing::Point(624, 142);
			this->flowLayoutPanel14->Name = L"flowLayoutPanel14";
			this->flowLayoutPanel14->Size = System::Drawing::Size(36, 132);
			this->flowLayoutPanel14->TabIndex = 52;
			// 
			// flowLayoutPanel15
			// 
			this->flowLayoutPanel15->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->flowLayoutPanel15->Location = System::Drawing::Point(511, 130);
			this->flowLayoutPanel15->Name = L"flowLayoutPanel15";
			this->flowLayoutPanel15->Size = System::Drawing::Size(149, 33);
			this->flowLayoutPanel15->TabIndex = 53;
			// 
			// flowLayoutPanel16
			// 
			this->flowLayoutPanel16->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->flowLayoutPanel16->Location = System::Drawing::Point(482, 371);
			this->flowLayoutPanel16->Name = L"flowLayoutPanel16";
			this->flowLayoutPanel16->Size = System::Drawing::Size(75, 33);
			this->flowLayoutPanel16->TabIndex = 55;
			// 
			// cat
			// 
			this->cat->BackColor = System::Drawing::Color::Transparent;
			this->cat->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cat.Image")));
			this->cat->Location = System::Drawing::Point(134, 593);
			this->cat->Name = L"cat";
			this->cat->Size = System::Drawing::Size(70, 60);
			this->cat->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->cat->TabIndex = 56;
			this->cat->TabStop = false;
			// 
			// Exit
			// 
			this->Exit->Location = System::Drawing::Point(739, 115);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(95, 82);
			this->Exit->TabIndex = 57;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::HotPink;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(483, 679);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(164, 50);
			this->label1->TabIndex = 58;
			this->label1->Text = L"LEVEL 3";
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(512, 573);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(45, 48);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox7->TabIndex = 59;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(671, 385);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(45, 48);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox8->TabIndex = 60;
			this->pictureBox8->TabStop = false;
			// 
			// pictureBox9
			// 
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(562, 190);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(45, 48);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox9->TabIndex = 61;
			this->pictureBox9->TabStop = false;
			// 
			// pictureBox10
			// 
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(48, 308);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(45, 48);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox10->TabIndex = 62;
			this->pictureBox10->TabStop = false;
			// 
			// pictureBox11
			// 
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(286, 298);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(45, 48);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox11->TabIndex = 63;
			this->pictureBox11->TabStop = false;
			// 
			// pictureBox12
			// 
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(351, 179);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(45, 48);
			this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox12->TabIndex = 64;
			this->pictureBox12->TabStop = false;
			// 
			// pictureBox13
			// 
			this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.Image")));
			this->pictureBox13->Location = System::Drawing::Point(193, 69);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(45, 48);
			this->pictureBox13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox13->TabIndex = 65;
			this->pictureBox13->TabStop = false;
			// 
			// Level3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Aqua;
			this->ClientSize = System::Drawing::Size(840, 748);
			this->Controls->Add(this->pictureBox13);
			this->Controls->Add(this->pictureBox12);
			this->Controls->Add(this->pictureBox11);
			this->Controls->Add(this->pictureBox10);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->flowLayoutPanel16);
			this->Controls->Add(this->flowLayoutPanel11);
			this->Controls->Add(this->flowLayoutPanel5);
			this->Controls->Add(this->Exit);
			this->Controls->Add(this->flowLayoutPanel15);
			this->Controls->Add(this->flowLayoutPanel14);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->flowLayoutPanel13);
			this->Controls->Add(this->flowLayoutPanel9);
			this->Controls->Add(this->flowLayoutPanel12);
			this->Controls->Add(this->flowLayoutPanel10);
			this->Controls->Add(this->flowLayoutPanel8);
			this->Controls->Add(this->flowLayoutPanel7);
			this->Controls->Add(this->flowLayoutPanel6);
			this->Controls->Add(this->flowLayoutPanel3);
			this->Controls->Add(this->flowLayoutPanel2);
			this->Controls->Add(this->flowLayoutPanel4);
			this->Controls->Add(this->Panel14);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->cat);
			this->Name = L"Level3";
			this->Text = L"Level3";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Level3::Level3_KeyDown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cat))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	   bool move = false;
	   bool EndLevel = false;
	   Keys lastKeyPressed;
		private: System::Void Level3_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
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
			 System::Collections::Generic::List<PictureBox^>^ allCoins = coinsList();
			 Check_Bounds(rectangles, outRectangles,allCoins, this->cat, this->Exit, move,
				 EndLevel, System::Drawing::Color::IndianRed, lastKeyPressed);
			 if (EndLevel) {
				 ShowMessageBox(30);
				 
			 }
		 }
	public: virtual System::Collections::Generic::List<Panel^>^ allRect() override {
		System::Collections::Generic::List<Panel^>^ rectangles
			= gcnew System::Collections::Generic::List<Panel^>();
		rectangles->Add(flowLayoutPanel1);
		rectangles->Add(flowLayoutPanel2);
		rectangles->Add(flowLayoutPanel3);
		rectangles->Add(flowLayoutPanel4);
		rectangles->Add(flowLayoutPanel5);
		rectangles->Add(flowLayoutPanel6);
		rectangles->Add(flowLayoutPanel7);
		rectangles->Add(flowLayoutPanel8);
		rectangles->Add(flowLayoutPanel9);
		rectangles->Add(flowLayoutPanel10);
		rectangles->Add(flowLayoutPanel11);
		rectangles->Add(flowLayoutPanel12);
		rectangles->Add(flowLayoutPanel13);
		rectangles->Add(flowLayoutPanel14);
		rectangles->Add(flowLayoutPanel15);
		rectangles->Add(flowLayoutPanel16);
		return rectangles;
	}
		  public: virtual System::Collections::Generic::List<PictureBox^>^ coinsList() override {
			  System::Collections::Generic::List<PictureBox^>^ allCoins
				  = gcnew System::Collections::Generic::List<PictureBox^>();
			  allCoins->Add(pictureBox7);
			  allCoins->Add(pictureBox8);
			  allCoins->Add(pictureBox9);
			  allCoins->Add(pictureBox10);
			  allCoins->Add(pictureBox11);
			  allCoins->Add(pictureBox12);
			  allCoins->Add(pictureBox13);

			  return allCoins;
		  }


};
}
