#pragma once

namespace My10amaliyotcalculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^  digit0;
	protected: 

	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Button^  digit2;
	private: System::Windows::Forms::Button^  digit3;


	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  digit1;
	private: System::Windows::Forms::Button^  digit5;
	private: System::Windows::Forms::Button^  digit6;



	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  digit4;
	private: System::Windows::Forms::Button^  digit8;


	private: System::Windows::Forms::Button^  digit9;


	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  digit7;

	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->digit0 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->digit2 = (gcnew System::Windows::Forms::Button());
			this->digit3 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->digit1 = (gcnew System::Windows::Forms::Button());
			this->digit5 = (gcnew System::Windows::Forms::Button());
			this->digit6 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->digit4 = (gcnew System::Windows::Forms::Button());
			this->digit8 = (gcnew System::Windows::Forms::Button());
			this->digit9 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->digit7 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// digit0
			// 
			this->digit0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->digit0->Location = System::Drawing::Point(83, 284);
			this->digit0->Name = L"digit0";
			this->digit0->Size = System::Drawing::Size(62, 51);
			this->digit0->TabIndex = 42;
			this->digit0->Text = L"0";
			this->digit0->UseVisualStyleBackColor = true;
			this->digit0->Click += gcnew System::EventHandler(this, &Form1::EnterNumber);
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button18->Location = System::Drawing::Point(151, 284);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(62, 51);
			this->button18->TabIndex = 41;
			this->button18->Text = L"+";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &Form1::EnterOperator);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button19->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button19->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Yellow;
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button19->Location = System::Drawing::Point(219, 284);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(62, 51);
			this->button19->TabIndex = 40;
			this->button19->Text = L"=";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &Form1::button19_Click);
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button20->Location = System::Drawing::Point(15, 284);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(62, 51);
			this->button20->TabIndex = 39;
			this->button20->Text = L",";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &Form1::button20_Click);
			// 
			// digit2
			// 
			this->digit2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->digit2->Location = System::Drawing::Point(83, 227);
			this->digit2->Name = L"digit2";
			this->digit2->Size = System::Drawing::Size(62, 51);
			this->digit2->TabIndex = 38;
			this->digit2->Text = L"2";
			this->digit2->UseVisualStyleBackColor = true;
			this->digit2->Click += gcnew System::EventHandler(this, &Form1::EnterNumber);
			// 
			// digit3
			// 
			this->digit3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->digit3->Location = System::Drawing::Point(151, 227);
			this->digit3->Name = L"digit3";
			this->digit3->Size = System::Drawing::Size(62, 51);
			this->digit3->TabIndex = 37;
			this->digit3->Text = L"3";
			this->digit3->UseVisualStyleBackColor = true;
			this->digit3->Click += gcnew System::EventHandler(this, &Form1::EnterNumber);
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button15->Location = System::Drawing::Point(219, 227);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(62, 51);
			this->button15->TabIndex = 36;
			this->button15->Text = L"-";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &Form1::EnterOperator);
			// 
			// digit1
			// 
			this->digit1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->digit1->Location = System::Drawing::Point(15, 227);
			this->digit1->Name = L"digit1";
			this->digit1->Size = System::Drawing::Size(62, 51);
			this->digit1->TabIndex = 35;
			this->digit1->Text = L"1";
			this->digit1->UseVisualStyleBackColor = true;
			this->digit1->Click += gcnew System::EventHandler(this, &Form1::EnterNumber);
			// 
			// digit5
			// 
			this->digit5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->digit5->Location = System::Drawing::Point(83, 170);
			this->digit5->Name = L"digit5";
			this->digit5->Size = System::Drawing::Size(62, 51);
			this->digit5->TabIndex = 34;
			this->digit5->Text = L"5";
			this->digit5->UseVisualStyleBackColor = true;
			this->digit5->Click += gcnew System::EventHandler(this, &Form1::EnterNumber);
			// 
			// digit6
			// 
			this->digit6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->digit6->Location = System::Drawing::Point(151, 170);
			this->digit6->Name = L"digit6";
			this->digit6->Size = System::Drawing::Size(62, 51);
			this->digit6->TabIndex = 33;
			this->digit6->Text = L"6";
			this->digit6->UseVisualStyleBackColor = true;
			this->digit6->Click += gcnew System::EventHandler(this, &Form1::EnterNumber);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button11->Location = System::Drawing::Point(219, 170);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(62, 51);
			this->button11->TabIndex = 32;
			this->button11->Text = L"x";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Form1::EnterOperator);
			// 
			// digit4
			// 
			this->digit4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->digit4->Location = System::Drawing::Point(15, 170);
			this->digit4->Name = L"digit4";
			this->digit4->Size = System::Drawing::Size(62, 51);
			this->digit4->TabIndex = 31;
			this->digit4->Text = L"4";
			this->digit4->UseVisualStyleBackColor = true;
			this->digit4->Click += gcnew System::EventHandler(this, &Form1::EnterNumber);
			// 
			// digit8
			// 
			this->digit8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->digit8->Location = System::Drawing::Point(83, 113);
			this->digit8->Name = L"digit8";
			this->digit8->Size = System::Drawing::Size(62, 51);
			this->digit8->TabIndex = 30;
			this->digit8->Text = L"8";
			this->digit8->UseVisualStyleBackColor = true;
			this->digit8->Click += gcnew System::EventHandler(this, &Form1::EnterNumber);
			// 
			// digit9
			// 
			this->digit9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->digit9->Location = System::Drawing::Point(151, 113);
			this->digit9->Name = L"digit9";
			this->digit9->Size = System::Drawing::Size(62, 51);
			this->digit9->TabIndex = 29;
			this->digit9->Text = L"9";
			this->digit9->UseVisualStyleBackColor = true;
			this->digit9->Click += gcnew System::EventHandler(this, &Form1::EnterNumber);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(219, 113);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(62, 51);
			this->button7->TabIndex = 28;
			this->button7->Text = L"/";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::EnterOperator);
			// 
			// digit7
			// 
			this->digit7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->digit7->Location = System::Drawing::Point(15, 113);
			this->digit7->Name = L"digit7";
			this->digit7->Size = System::Drawing::Size(62, 51);
			this->digit7->TabIndex = 27;
			this->digit7->Text = L"7";
			this->digit7->UseVisualStyleBackColor = true;
			this->digit7->Click += gcnew System::EventHandler(this, &Form1::EnterNumber);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(83, 56);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(62, 51);
			this->button4->TabIndex = 26;
			this->button4->Text = L"+/-";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(151, 56);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(62, 51);
			this->button3->TabIndex = 25;
			this->button3->Text = L"n!";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Wingdings", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(2)));
			this->button2->Location = System::Drawing::Point(219, 56);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(62, 51);
			this->button2->TabIndex = 24;
			this->button2->Text = L"";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(15, 56);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(62, 51);
			this->button1->TabIndex = 23;
			this->button1->Text = L"C";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(15, 10);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(266, 43);
			this->label1->TabIndex = 22;
			this->label1->Text = L"0";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(294, 344);
			this->Controls->Add(this->digit0);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->digit2);
			this->Controls->Add(this->digit3);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->digit1);
			this->Controls->Add(this->digit5);
			this->Controls->Add(this->digit6);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->digit4);
			this->Controls->Add(this->digit8);
			this->Controls->Add(this->digit9);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->digit7);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
		double firstDigit, secondDigit, result;
		String^ operators;
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 label1->Text = "0";
			 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void EnterNumber(System::Object^  sender, System::EventArgs^  e) {

			 Button^ Numbers = safe_cast<Button^>(sender);
			 if (label1->Text == "0")
			 {
				 label1->Text = Numbers->Text;
			 }
			 else
			 {
				 label1->Text = label1->Text + Numbers->Text;
			 }
		 }
private: System::Void EnterOperator(System::Object^  sender, System::EventArgs^  e) {
			 Button^ NumbersOp = safe_cast<Button^>(sender);
			 firstDigit = Double::Parse(label1->Text);

			 label1->Text="";
			 operators = NumbersOp->Text;
		 }
private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (!label1->Text->Contains ("."))
			 {
				 label1->Text = label1->Text + "."; 
			 }
		 }
private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {

			 secondDigit = Double::Parse(label1->Text);

			 if (operators == "+")
			 {
				 result = firstDigit + secondDigit;
				 label1->Text = System::Convert::ToString(result);
			 }

			 else if (operators == "-")
			 {
				 result = firstDigit - secondDigit;
				 label1->Text = System::Convert::ToString(result);
			 }

			 else if (operators == "x")
			 {
				 result = firstDigit * secondDigit;
				 label1->Text = System::Convert::ToString(result);
			 }

			 else if (operators == "/")
			 {
				 result = firstDigit / secondDigit;
				 label1->Text = System::Convert::ToString(result);
			 }
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (label1->Text->Length > 0)
			 {
				 label1->Text = label1->Text->Remove(label1->Text->Length-1,1);
			 }
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 int s=1;
			 if(label1->Text->Length>0)
			 {
				 for (int i=Convert::ToInt32(label1->Text); i>=1; i--)
					 s*=i;
			 }
			 else
				 s=0;
			 label1->Text=Convert::ToString(s);

		 }
};
}

