#pragma once
#include "String"
namespace My13amaliyot {

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
	private: System::Windows::Forms::Button^  button1;
	protected: 

	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart2;


	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Yanvar;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Fevral;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Mart;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Aprel;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  May;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Iyun;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Iyul;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Avgust;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Sentabr;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Oktabr;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Noyabr;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Dekabr;
	private: System::Windows::Forms::DataGridView^  dataGridView1;



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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^  title1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^  title2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Yanvar = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Fevral = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Mart = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Aprel = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->May = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Iyun = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Iyul = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Avgust = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Sentabr = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Oktabr = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Noyabr = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Dekabr = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::MediumBlue;
			this->button1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Transparent;
			this->button1->Location = System::Drawing::Point(470, 303);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(210, 33);
			this->button1->TabIndex = 0;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(349, 42);
			this->chart1->Name = L"chart1";
			series1->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Maosh";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(418, 212);
			this->chart1->TabIndex = 2;
			this->chart1->Text = L"chart1";
			title1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			title1->ForeColor = System::Drawing::Color::DimGray;
			title1->Name = L"Guruch narxlarining oylar keislidagi diagrammasi :";
			title1->Text = L"Ishchilarning oylik maoshlari :";
			this->chart1->Titles->Add(title1);
			this->chart1->Click += gcnew System::EventHandler(this, &Form1::chart1_Click);
			// 
			// chart2
			// 
			chartArea2->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart2->Legends->Add(legend2);
			this->chart2->Location = System::Drawing::Point(773, 42);
			this->chart2->Name = L"chart2";
			series2->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			series2->ChartArea = L"ChartArea1";
			series2->Legend = L"Legend1";
			series2->Name = L"Daromad";
			this->chart2->Series->Add(series2);
			this->chart2->Size = System::Drawing::Size(371, 212);
			this->chart2->TabIndex = 3;
			this->chart2->Text = L"chart2";
			title2->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			title2->ForeColor = System::Drawing::Color::DimGray;
			title2->Name = L"Title1";
			title2->Text = L"Tashkilotning sof daromadi :";
			this->chart2->Titles->Add(title2);
			this->chart2->Click += gcnew System::EventHandler(this, &Form1::chart2_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::LightCoral;
			this->dataGridView1->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCellsExceptHeader;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(12) {this->Yanvar, 
				this->Fevral, this->Mart, this->Aprel, this->May, this->Iyun, this->Iyul, this->Avgust, this->Sentabr, this->Oktabr, this->Noyabr, 
				this->Dekabr});
			this->dataGridView1->Location = System::Drawing::Point(12, 42);
			this->dataGridView1->MultiSelect = false;
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(331, 212);
			this->dataGridView1->TabIndex = 4;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGridView1_CellContentClick);
			// 
			// Yanvar
			// 
			this->Yanvar->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::DisplayedCells;
			this->Yanvar->HeaderText = L"Yanvar";
			this->Yanvar->Name = L"Yanvar";
			this->Yanvar->Width = 69;
			// 
			// Fevral
			// 
			this->Fevral->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::DisplayedCells;
			this->Fevral->HeaderText = L"Fevral";
			this->Fevral->Name = L"Fevral";
			this->Fevral->Width = 65;
			// 
			// Mart
			// 
			this->Mart->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::DisplayedCells;
			this->Mart->HeaderText = L"Mart";
			this->Mart->Name = L"Mart";
			this->Mart->Width = 57;
			// 
			// Aprel
			// 
			this->Aprel->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::DisplayedCells;
			this->Aprel->HeaderText = L"Aprel";
			this->Aprel->Name = L"Aprel";
			this->Aprel->Width = 60;
			// 
			// May
			// 
			this->May->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::DisplayedCells;
			this->May->HeaderText = L"May";
			this->May->Name = L"May";
			this->May->Width = 55;
			// 
			// Iyun
			// 
			this->Iyun->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::DisplayedCells;
			this->Iyun->HeaderText = L"Iyun";
			this->Iyun->Name = L"Iyun";
			this->Iyun->Width = 54;
			// 
			// Iyul
			// 
			this->Iyul->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::DisplayedCells;
			this->Iyul->HeaderText = L"Iyul";
			this->Iyul->Name = L"Iyul";
			this->Iyul->Width = 50;
			// 
			// Avgust
			// 
			this->Avgust->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::DisplayedCells;
			this->Avgust->HeaderText = L"Avgust";
			this->Avgust->Name = L"Avgust";
			this->Avgust->Width = 67;
			// 
			// Sentabr
			// 
			this->Sentabr->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::DisplayedCells;
			this->Sentabr->HeaderText = L"Sentabr";
			this->Sentabr->Name = L"Sentabr";
			this->Sentabr->Width = 75;
			// 
			// Oktabr
			// 
			this->Oktabr->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::DisplayedCells;
			this->Oktabr->HeaderText = L"Oktabr";
			this->Oktabr->Name = L"Oktabr";
			this->Oktabr->Width = 68;
			// 
			// Noyabr
			// 
			this->Noyabr->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::DisplayedCells;
			this->Noyabr->HeaderText = L"Noyabr";
			this->Noyabr->Name = L"Noyabr";
			this->Noyabr->Width = 71;
			// 
			// Dekabr
			// 
			this->Dekabr->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::DisplayedCells;
			this->Dekabr->HeaderText = L"Dekabr";
			this->Dekabr->Name = L"Dekabr";
			this->Dekabr->Width = 72;
			// 
			// Form1
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::DarkOrchid;
			this->ClientSize = System::Drawing::Size(1156, 392);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->chart2);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->button1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->ForeColor = System::Drawing::Color::Navy;
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
//		String^ a[13];
#pragma endregion
	private: System::Void chart1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
				/*a[1]="Yanvar";
				a[2]="Fevral";
				a[3]="Mart";
				a[4]="Aprel";
				a[5]="May";
				a[6]="Iyun";
				a[7]="Iyul";
				a[8]="Avgust";
				a[9]="Sentabr";
				a[10]="Oktabr";
				a[11]="Noyabr";
				a[12]="Dekabr";*/
				for (int i = 1; i <= 12; i++) 
				{
				chart1->Series["Maosh"]->Points->AddXY(i,dataGridView1->Rows[0]->Cells[i-1]->Value);
				chart2->Series["Daromad"]->Points->AddXY(i,dataGridView1->Rows[1]->Cells[i-1]->Value);
				}
		 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void chart2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
