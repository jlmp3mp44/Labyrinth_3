#pragma once
#include <iostream>

namespace Labyrinth3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for BaseForm
	/// </summary>
	public ref class BaseForm : public System::Windows::Forms::Form
	{
	public:
		BaseForm(void)
		{
			InitializeComponent();
			
			
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~BaseForm()
		{
			if (components)
			{
				delete components;
			}
		}

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
			this->SuspendLayout();

			// 
			// BaseForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(282, 253);
			this->Name = L"BaseForm";
			this->Text = L"BaseForm";
			this->Load += gcnew System::EventHandler(this, &BaseForm::BaseForm_Load);
			this->ResumeLayout(false);

		}
    public: static int score = 0;
	public: bool keyLeft = true;
		  bool keyRight = true;
		  bool keyDown =  true;
		  bool keyUp =  true;
#pragma endregion
	public: void Check_Bounds
		  (System ::Collections::Generic::List<Panel^>^ rectangles,
			  System::Collections::Generic::List<PictureBox^>^ outRectangles,
		PictureBox^% cat, Panel^% Exit,
		bool% move, bool% EndLevel,
		Color color, Keys% lastKeyPressed) {
		
		
		if (move) {
			if (cat->Bounds.IntersectsWith(Exit->Bounds)) {
				Exit->BackColor = color;
				EndLevel = true;
				//new_Level();
				return;
			}

			else {
				for (int i = 0; i < rectangles->Count; i++) {
					Rectangle rectBounds = rectangles[i]->Bounds;
					if (cat->Bounds.IntersectsWith(rectBounds)) {
						switch (lastKeyPressed) {
						case Keys::Up: keyUp = false; break;
						case Keys::Down: keyDown = false; break;
						case Keys::Left: keyLeft = false; break;
						case Keys::Right: keyRight = false; break;
						default: return;
						}
						
						break;
					}
				}
				for (int i = 0; i < outRectangles->Count; i++) {
					Rectangle outRectBounds = outRectangles[i]->Bounds;
					if (cat->Bounds.IntersectsWith(outRectBounds)) {
						switch (lastKeyPressed) {
						case Keys::Up: keyUp = false; break;
						case Keys::Down: keyDown = false; break;
						case Keys::Left: keyLeft = false; break;
						case Keys::Right: keyRight = false; break;
						default: return;
						}

						break;
					}
				}
			}
		}
	}


	public: virtual System::Collections::Generic::List<System::Windows::Forms::Panel^>^ allRect()
	{
		System::Collections::Generic::List<System::Windows::Forms::Panel^>^ rectangles
			= gcnew System::Collections::Generic::List<System::Windows::Forms::Panel^>();

		return rectangles;
	}
	
	public:  System::Collections::Generic::List<PictureBox^>^ allOutRect(PictureBox^ pictureBox1,
		PictureBox^ pictureBox2, PictureBox^ pictureBox3,
		PictureBox^ pictureBox4, PictureBox^ pictureBox5,
		PictureBox^ pictureBox6) {
		System::Collections::Generic::List<PictureBox^>^ rectangles
			= gcnew System::Collections::Generic::List<PictureBox^>();
		rectangles->Add(pictureBox1);
		rectangles->Add(pictureBox2);
		rectangles->Add(pictureBox3);
		rectangles->Add(pictureBox4);
		rectangles->Add(pictureBox5);
		rectangles->Add(pictureBox6);
		return rectangles;
	}
	
	private: System::Void BaseForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
