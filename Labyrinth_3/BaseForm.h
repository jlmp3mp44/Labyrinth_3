#pragma once
#include <iostream>
#include <Windows.h>
#include <mmsystem.h>
#pragma comment(lib, "winmm.lib")

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
			//this->Load += gcnew System::EventHandler(this, &BaseForm::BaseForm_Load);
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
			  System::Collections::Generic::List<PictureBox^>^ allCoins,
		PictureBox^% cat, Panel^% Exit,
		bool% move, bool% EndLevel,
		Color color, Keys% lastKeyPressed) {
		
		
		if (move) {
			if (cat->Bounds.IntersectsWith(Exit->Bounds)) {
				Exit->BackColor = color;
				EndLevel = true;
				PlayAudio(L"D:/C++/Labyrinth_3/audio/meow.wav");
				Sleep(300);
				return;
			}

			else {
				for (int i = 0; i < rectangles->Count; i++) {
					Labyrinth3::Rectangle rectBounds = rectangles[i]->Bounds;
					if (cat->Bounds.IntersectsWith(rectBounds)) {
						minusScore(score);
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
					Labyrinth3::Rectangle outRectBounds = outRectangles[i]->Bounds;
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
				for (int i = 0; i <allCoins->Count; i++) {
					Labyrinth3::Rectangle coinBounds = allCoins[i]->Bounds;
					if (cat->Bounds.IntersectsWith(coinBounds)) {
						allCoins[i]->Location = System::Drawing::Point(-5,-5);
						this->Controls->Remove(allCoins[i]);

						allCoins->RemoveAt(i);

						plusScore(score);
						PlayAudio(L"D:/C++/Labyrinth_3/audio/coin.wav");

						i--;
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
	public: void PlayAudio(const wchar_t* audioFilePath) {
			  PlaySound(audioFilePath, NULL, SND_FILENAME | SND_ASYNC);
		  }

	 public: void ShowMessageBox(int changeScore) {
			 score += changeScore;
			 String^ message = score.ToString();
			 MessageBox::Show(message, "YOUR SCORE", MessageBoxButtons::OK);	 
	 }
	 public: void minusScore(int% score) {
		 score -= 1;
		 
	 }
	 public: void plusScore(int% score) {
				score += 1;

			}
	public: virtual System::Collections::Generic::List<PictureBox^>^ coinsList() {
		System::Collections::Generic::List<PictureBox^>^ coins
			= gcnew System::Collections::Generic::List<PictureBox^>();
		return coins;
	}
	};
}
