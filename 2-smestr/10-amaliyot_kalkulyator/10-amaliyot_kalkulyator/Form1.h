#pragma once

namespace My10amaliyot_kalkulyator {

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
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Label^  label2;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(7, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(266, 43);
			this->label1->TabIndex = 0;
			this->label1->Text = L"0";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(7, 82);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(62, 51);
			this->button1->TabIndex = 1;
			this->button1->Text = L"C";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Wingdings", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(2)));
			this->button2->Location = System::Drawing::Point(211, 82);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(62, 51);
			this->button2->TabIndex = 2;
			this->button2->Text = L"";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(143, 82);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(62, 51);
			this->button3->TabIndex = 3;
			this->button3->Text = L")";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(75, 82);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(62, 51);
			this->button4->TabIndex = 4;
			this->button4->Text = L"(";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(75, 139);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(62, 51);
			this->button5->TabIndex = 8;
			this->button5->Text = L"8";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::EnterNumber);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(143, 139);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(62, 51);
			this->button6->TabIndex = 7;
			this->button6->Text = L"9";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::EnterNumber);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(211, 139);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(62, 51);
			this->button7->TabIndex = 6;
			this->button7->Text = L"/";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(7, 139);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(62, 51);
			this->button8->TabIndex = 5;
			this->button8->Text = L"7";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::EnterNumber);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(75, 196);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(62, 51);
			this->button9->TabIndex = 12;
			this->button9->Text = L"5";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::EnterNumber);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button10->Location = System::Drawing::Point(143, 196);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(62, 51);
			this->button10->TabIndex = 11;
			this->button10->Text = L"6";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Form1::EnterNumber);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button11->Location = System::Drawing::Point(211, 196);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(62, 51);
			this->button11->TabIndex = 10;
			this->button11->Text = L"x";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Form1::button11_Click);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button12->Location = System::Drawing::Point(7, 196);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(62, 51);
			this->button12->TabIndex = 9;
			this->button12->Text = L"4";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Form1::EnterNumber);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button13->Location = System::Drawing::Point(75, 253);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(62, 51);
			this->button13->TabIndex = 16;
			this->button13->Text = L"2";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &Form1::EnterNumber);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button14->Location = System::Drawing::Point(143, 253);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(62, 51);
			this->button14->TabIndex = 15;
			this->button14->Text = L"3";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &Form1::EnterNumber);
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button15->Location = System::Drawing::Point(211, 253);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(62, 51);
			this->button15->TabIndex = 14;
			this->button15->Text = L"-";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &Form1::button15_Click);
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button16->Location = System::Drawing::Point(7, 253);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(62, 51);
			this->button16->TabIndex = 13;
			this->button16->Text = L"1";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &Form1::EnterNumber);
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button17->Location = System::Drawing::Point(75, 310);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(62, 51);
			this->button17->TabIndex = 20;
			this->button17->Text = L"0";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &Form1::EnterNumber);
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button18->Location = System::Drawing::Point(143, 310);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(62, 51);
			this->button18->TabIndex = 19;
			this->button18->Text = L"+";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &Form1::button18_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button19->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button19->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Yellow;
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button19->Location = System::Drawing::Point(211, 310);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(62, 51);
			this->button19->TabIndex = 18;
			this->button19->Text = L"=";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &Form1::button19_Click);
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button20->Location = System::Drawing::Point(7, 310);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(62, 51);
			this->button20->TabIndex = 17;
			this->button20->Text = L",";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &Form1::button20_Click);
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->label2->Location = System::Drawing::Point(7, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(266, 28);
			this->label2->TabIndex = 21;
			this->label2->Text = L"0";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label2->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(275, 364);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"Form1";
			this->Text = L"Calculator";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);

		}
		double a,b,natija;
		char amallar;
#pragma endregion
	private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (this->label1->Text=="0")
				 {
					 this->label1->Text="1";
					 label2->Text="1";
				 }
				 else
				 {
					 this->label1->Text=Convert::ToString(label1->Text)+"1";
					 this->label2->Text=Convert::ToString(label2->Text)+"1";
				 }
			 }
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
				if (this->label1->Text=="0")
				{
					 this->label1->Text="2";
				     label2->Text="2";
				}
				 else
				 {
					 this->label1->Text=Convert::ToString(label1->Text)+"2";
					 this->label2->Text=Convert::ToString(label2->Text)+"2";
				 }
		 }
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
				if (this->label1->Text=="0")
				 {
					 this->label1->Text="3";
					 label2->Text="3";
				 }
				 else
				 {
					 this->label1->Text=Convert::ToString(label1->Text)+"3";
					 this->label2->Text=Convert::ToString(label2->Text)+"3";
				 }
		 }
private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
				if (this->label1->Text=="0")
				 {
					 this->label1->Text="0";
					 label2->Text="0";
				 }
				 else
				 {
					 this->label1->Text=Convert::ToString(label1->Text)+"0";
					 this->label2->Text=Convert::ToString(label2->Text)+"0";
				 }
		 }
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
				if (this->label1->Text=="0")
				 {
					 this->label1->Text="4";
					 label2->Text="4";
				 }
				 else
				 {
					 this->label1->Text=Convert::ToString(label1->Text)+"4";
					 this->label2->Text=Convert::ToString(label2->Text)+"4";
				 }
		 }
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
				if (this->label1->Text=="0")
				 {
					 this->label1->Text="5";
					 label2->Text="5";
				 }
				 else
				 {
					 this->label1->Text=Convert::ToString(label1->Text)+"5";
					 this->label2->Text=Convert::ToString(label2->Text)+"5";
				 }
				if(label2->Text!="0")
					this->label2->Text+Convert::ToString(label2->Text)+"5";
		 }
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
				if (this->label1->Text=="0")
				 {
					 this->label1->Text="6";
					 label2->Text="6";
				 }
				 else
				 {
					 this->label1->Text=Convert::ToString(label1->Text)+"6";
					 this->label2->Text=Convert::ToString(label2->Text)+"6";
				 }
		 }
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
				if (this->label1->Text=="0")
				 {
					 this->label1->Text="7";
					 label2->Text="7";
				 }
				 else
				 {
					 this->label1->Text=Convert::ToString(label1->Text)+"7";
					 this->label2->Text=Convert::ToString(label2->Text)+"7";
				 }
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
				if (this->label1->Text=="0")
				 {
					 this->label1->Text="8";
					 label2->Text="8";
				 }
				 else
				 {
					 this->label1->Text=Convert::ToString(label1->Text)+"8";
					 this->label2->Text=Convert::ToString(label2->Text)+"8";
				 }
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
				if (this->label1->Text=="0")
				 {
					 this->label1->Text="9";
					 label2->Text="9";
				 }
				 else
				 {
					 this->label1->Text=Convert::ToString(label1->Text)+"9";
					 this->label2->Text=Convert::ToString(label2->Text)+"9";
				 }
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 label1->Text="0";
			 label2->Text="0";
		 }
private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
			 a=Convert::ToDouble(label1->Text);
			 amallar='+';
			 label1->Text="0";
			 this->label2->Text=Convert::ToString(label2->Text)+"+";
		 }
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
			 a=Convert::ToDouble(label1->Text);
			 amallar='-';
			 label1->Text="0";
			 this->label2->Text=Convert::ToString(label2->Text)+"-";
		 }
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
			 a=Convert::ToDouble(label1->Text);
			 amallar='*';
			 label1->Text="0";
			 this->label2->Text=Convert::ToString(label2->Text)+"x";
		 }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			 a=Convert::ToDouble(label1->Text);
			 amallar='/';
			 label1->Text="0";
			 this->label2->Text=Convert::ToString(label2->Text)+"/";
		 }
private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {
			 b=Convert::ToDouble(label1->Text);
			 this->label2->Text="";
			 switch (amallar)
			 {
			 case '+':
				 natija=a+b;
				 label1->Text=System::Convert::ToString(natija);
				 break;
			case '-':
				 natija=a-b;
				 label1->Text=System::Convert::ToString(natija);
				 break;
			case '*':
				 natija=a*b;
				 label1->Text=System::Convert::ToString(natija);
				 break;
			case '/':
				 natija=a/b;
				 label1->Text=System::Convert::ToString(natija);
				 break;
			 }
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void EnterNumber(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}

