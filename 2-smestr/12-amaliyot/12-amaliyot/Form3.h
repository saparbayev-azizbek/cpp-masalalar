#pragma once

namespace My12amaliyot {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ Form3
	/// </summary>
	public ref class Form3 : public System::Windows::Forms::Form
	{
	public:
		Form3(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~Form3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label2;
	protected: 
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button2;

	private:
		/// <summary>
		/// “ребуетс€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ќб€зательный метод дл€ поддержки конструктора - не измен€йте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Aquamarine;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(212, 136);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(107, 15);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Sizning muchalingiz :";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Aquamarine;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(213, 87);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(133, 15);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Tug`ilgan yilingizni kiriting :";
			// 
			// button1
			// 
			this->button1->AutoEllipsis = true;
			this->button1->BackColor = System::Drawing::Color::LightSlateGray;
			this->button1->Cursor = System::Windows::Forms::Cursors::Default;
			this->button1->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button1->Location = System::Drawing::Point(231, 199);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(163, 32);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Natija";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form3::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Cursor = System::Windows::Forms::Cursors::Default;
			this->textBox2->Location = System::Drawing::Point(213, 154);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(201, 20);
			this->textBox2->TabIndex = 6;
			// 
			// textBox1
			// 
			this->textBox1->Cursor = System::Windows::Forms::Cursors::Default;
			this->textBox1->Location = System::Drawing::Point(212, 105);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(202, 20);
			this->textBox1->TabIndex = 5;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::LightSlateGray;
			this->button2->Cursor = System::Windows::Forms::Cursors::Default;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(231, 246);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(163, 37);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Yopish";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form3::button2_Click);
			// 
			// Form3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->ClientSize = System::Drawing::Size(626, 318);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->MaximumSize = System::Drawing::Size(642, 357);
			this->MinimumSize = System::Drawing::Size(642, 357);
			this->Name = L"Form3";
			this->Text = L"Form3";
			this->Load += gcnew System::EventHandler(this, &Form3::Form3_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 Int32 a;
				 a=Convert::ToInt32(textBox1->Text);
					if (a%12==7)
						 this->textBox2->Text="Quyon";
					if (a%12==8)
						 this->textBox2->Text="Baliq";
					if (a%12==9)
						 this->textBox2->Text="Ilon";
					if (a%12==10)
						 this->textBox2->Text="Ot";
					if (a%12==11)
						 this->textBox2->Text="Qo'y";
					if (a%12==0)
						 this->textBox2->Text="Maymun";
					if (a%12==1)
						 this->textBox2->Text="Tovuq";
					if (a%12==2)
						 this->textBox2->Text="It";
					if (a%12==3)
						 this->textBox2->Text="To'ng'iz";
					if (a%12==4)
						 this->textBox2->Text="Sichqon";
					if (a%12==5)
						 this->textBox2->Text="Sigir";
					if (a%12==6)
						 this->textBox2->Text="Yo'lbars";
			 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 Form3::Close();
		 }
private: System::Void Form3_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
