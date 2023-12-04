#include "conio.h"
#include "stdlib.h"

#pragma once

namespace My11amaliyot {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ Form1
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
		/// ќсвободить все используемые ресурсы.
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
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::Label^  label4;

	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::CheckBox^  checkBox3;
	private: System::Windows::Forms::CheckedListBox^  checkedListBox1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::ProgressBar^  progressBar1;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(188, 83);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(25, 15);
			this->label1->TabIndex = 0;
			this->label1->Text = L"N :";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(511, 83);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(27, 15);
			this->label2->TabIndex = 1;
			this->label2->Text = L"M :";
			this->label2->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(229, 80);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(176, 20);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(552, 80);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(200, 20);
			this->textBox2->TabIndex = 3;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Form1::textBox2_TextChanged);
			// 
			// button1
			// 
			this->button1->AutoEllipsis = true;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(199, 360);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(185, 25);
			this->button1->TabIndex = 4;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(570, 360);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(13, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"h";
			this->label3->Click += gcnew System::EventHandler(this, &Form1::label3_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(96, 127);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(364, 215);
			this->dataGridView1->TabIndex = 6;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGridView1_CellContentClick);
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(174, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(592, 49);
			this->label4->TabIndex = 7;
			this->label4->Text = resources->GetString(L"label4.Text");
			this->label4->Click += gcnew System::EventHandler(this, &Form1::label4_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(810, 52);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(80, 17);
			this->checkBox1->TabIndex = 9;
			this->checkBox1->Text = L"checkBox1";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(812, 77);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(80, 17);
			this->checkBox2->TabIndex = 10;
			this->checkBox2->Text = L"checkBox2";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(814, 101);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(80, 17);
			this->checkBox3->TabIndex = 11;
			this->checkBox3->Text = L"checkBox3";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {L"tarix", L"dasturlash", L"ingliz tili", 
				L"ona tili", L"differensial"});
			this->checkedListBox1->Location = System::Drawing::Point(525, 157);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(102, 34);
			this->checkedListBox1->TabIndex = 12;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"fizika", L"history", L"geografiya", L"germaniya"});
			this->comboBox1->Location = System::Drawing::Point(673, 160);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(196, 21);
			this->comboBox1->TabIndex = 13;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox1_SelectedIndexChanged);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"fizika", L"history", L"geografiya", L"germaniya"});
			this->listBox1->Location = System::Drawing::Point(691, 187);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(120, 30);
			this->listBox1->TabIndex = 14;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::listBox1_SelectedIndexChanged);
			// 
			// progressBar1
			// 
			this->progressBar1->ForeColor = System::Drawing::Color::Lime;
			this->progressBar1->Location = System::Drawing::Point(569, 241);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(280, 22);
			this->progressBar1->TabIndex = 15;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(677, 285);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(88, 21);
			this->button2->TabIndex = 16;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(953, 410);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->checkedListBox1);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->MaximumSize = System::Drawing::Size(969, 449);
			this->MinimumSize = System::Drawing::Size(969, 449);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		 }
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
		 int n=Convert::ToInt32(textBox1->Text);
		 int m=Convert::ToInt32(textBox2->Text);
			dataGridView1->RowCount = n;
			dataGridView1->ColumnCount = m;
 			int a[100][100];
			for(int i = 0; i<n; i++)
			{
				for(int j=0; j<m; j++)
				{
					a[i][j] = rand()%100;
					dataGridView1->Rows[i]->Cells[j]->Value = Convert::ToString(a[i][j]);
				}
			}
		}
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void dataGridView2_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		 }
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 progressBar1->Value+=5;
			 if (progressBar1->Value==100)
				 progressBar1->Value=0;
		 }
};
}

