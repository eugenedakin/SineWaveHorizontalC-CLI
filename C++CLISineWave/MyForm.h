#pragma once

namespace CCLISineWave {

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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ TBXStart;

	private: System::Windows::Forms::TextBox^ TBY;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ TBAmplitude;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ TBPeriod;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ TBYStart;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button1;
	protected:


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->TBXStart = (gcnew System::Windows::Forms::TextBox());
			this->TBY = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->TBAmplitude = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->TBPeriod = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->TBYStart = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(426, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(40, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"x Start:";
			// 
			// TBXStart
			// 
			this->TBXStart->Location = System::Drawing::Point(472, 22);
			this->TBXStart->Name = L"TBXStart";
			this->TBXStart->Size = System::Drawing::Size(100, 20);
			this->TBXStart->TabIndex = 1;
			this->TBXStart->Text = L"50";
			// 
			// TBY
			// 
			this->TBY->Location = System::Drawing::Point(472, 48);
			this->TBY->Name = L"TBY";
			this->TBY->Size = System::Drawing::Size(100, 20);
			this->TBY->TabIndex = 3;
			this->TBY->Text = L"300";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(415, 51);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(51, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"y Length:";
			// 
			// TBAmplitude
			// 
			this->TBAmplitude->Location = System::Drawing::Point(472, 74);
			this->TBAmplitude->Name = L"TBAmplitude";
			this->TBAmplitude->Size = System::Drawing::Size(100, 20);
			this->TBAmplitude->TabIndex = 5;
			this->TBAmplitude->Text = L"75";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(410, 77);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(56, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Amplitude:";
			// 
			// TBPeriod
			// 
			this->TBPeriod->Location = System::Drawing::Point(472, 100);
			this->TBPeriod->Name = L"TBPeriod";
			this->TBPeriod->Size = System::Drawing::Size(100, 20);
			this->TBPeriod->TabIndex = 7;
			this->TBPeriod->Text = L"0.09";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(426, 103);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(40, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Period:";
			// 
			// TBYStart
			// 
			this->TBYStart->Location = System::Drawing::Point(472, 126);
			this->TBYStart->Name = L"TBYStart";
			this->TBYStart->Size = System::Drawing::Size(100, 20);
			this->TBYStart->TabIndex = 9;
			this->TBYStart->Text = L"200";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(426, 129);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(40, 13);
			this->label5->TabIndex = 8;
			this->label5->Text = L"y Start:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(481, 171);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Update";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::Button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(584, 361);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->TBYStart);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->TBPeriod);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->TBAmplitude);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->TBY);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->TBXStart);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"Sine Wave";
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::MyForm_Paint);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Void DrawWavyLine(Graphics^ g1, double XStart, double YLength, double Amp, double Period, double YStart, Rectangle rect) {
			Pen^ RedPen = gcnew Pen(Color::Red);
			RedPen->Width = 1;
			for (int i = 0; i < YLength; i++) {
				Int32 x1 = (i + XStart);
				Int32 y1 = (Amp * Math::Sin(Period * (i)) + YStart);
				Int32 x2 = (i + 1 + XStart);
				Int32 y2 = (Amp * Math::Sin(Period * (i + 1)) + YStart);
				Pen^ RedPen = gcnew Pen(Color::Red);
				g1->DrawLine(RedPen, x1, y1, x2, y2);
			}
			Pen^ BlackPen = gcnew Pen(Color::Black);
			BlackPen->Width = 1;
			g1->DrawRectangle(BlackPen, rect);
		}
	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm::Invalidate();
	}
	private: System::Void MyForm_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		Graphics^ g = e->Graphics;
		Rectangle CanvasRect;
		CanvasRect.X = 0;
		CanvasRect.Y = 0;
		CanvasRect.Width = 400;
		CanvasRect.Height = 400;

		double XStart1, Y1, YStart1, Amp1, Per1;
		XStart1 = System::Convert::ToDouble(TBXStart->Text);
		Y1 = System::Convert::ToDouble(TBY->Text);
		Amp1 = System::Convert::ToDouble(TBAmplitude->Text);
		Per1 = System::Convert::ToDouble(TBPeriod->Text);
		YStart1 = System::Convert::ToDouble(TBYStart->Text);

		DrawWavyLine(g, XStart1, Y1, Amp1, Per1, YStart1, CanvasRect);
	}
};
}
