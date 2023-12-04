#include "conio.h"
#include "stdlib.h"
#pragma once

namespace My12amaliyot {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ Form2
	/// </summary>
	public ref class Form2 : public System::Windows::Forms::Form
	{
	public:
		Form2(void)
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
		~Form2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected: 
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form2::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(127, 312);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(132, 29);
			this->button1->TabIndex = 17;
			this->button1->Text = L"Hisoblash";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form2::button1_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(613, 318);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(12, 16);
			this->label5->TabIndex = 16;
			this->label5->Text = L" ";
			this->label5->Click += gcnew System::EventHandler(this, &Form2::label5_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(304, 318);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(299, 16);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Elementlari qiymati 200 dan kattalar soni : ";
			this->label4->Click += gcnew System::EventHandler(this, &Form2::label4_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(127, 131);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(538, 166);
			this->dataGridView1->TabIndex = 14;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form2::dataGridView1_CellContentClick);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(485, 96);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(180, 20);
			this->textBox2->TabIndex = 13;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Form2::textBox2_TextChanged);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(188, 96);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(180, 20);
			this->textBox1->TabIndex = 12;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form2::textBox1_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(420, 100);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(59, 16);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Ustun : ";
			this->label3->Click += gcnew System::EventHandler(this, &Form2::label3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(124, 100);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(58, 16);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Qator : ";
			this->label2->Click += gcnew System::EventHandler(this, &Form2::label2_Click);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(124, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(571, 65);
			this->label1->TabIndex = 9;
			this->label1->Text = resources->GetString(L"label1.Text");
			this->label1->Click += gcnew System::EventHandler(this, &Form2::label1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(127, 347);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(133, 29);
			this->button2->TabIndex = 18;
			this->button2->Text = L"Yopish";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form2::button2_Click);
			// 
			// Form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(809, 415);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->MaximumSize = System::Drawing::Size(825, 454);
			this->MinimumSize = System::Drawing::Size(825, 454);
			this->Name = L"Form2";
			this->Text = L"Form2";
			this->Load += gcnew System::EventHandler(this, &Form2::Form2_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form2_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
			 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 int n=Convert::ToInt32(textBox1->Text);
			 int m=Convert::ToInt32(textBox2->Text);
			 dataGridView1->RowCount=n;
			 dataGridView1->ColumnCount=m;
			 int a[100][100];
			 int count = 0;
			 for (int i=0; i<n; i++)
			 {
				 for (int j=0; j<m; j++)
				 {
					 a[i][j]=rand()%6000-3000;
					 dataGridView1->Rows[i]->Cells[j]->Value=Convert::ToString(a[i][j]);
					 if (a[i][j]>200)
						 count++;
				 }
			 }
			 this->label5->Text=Convert::ToString(count);
		 }
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 Form2::Close();
		 }
};
}
