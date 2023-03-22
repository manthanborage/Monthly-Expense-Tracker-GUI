#pragma once

namespace ExpenseTrackerGUI1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for MonthExpensePieChart
	/// </summary>
	public ref class MonthExpensePieChart : public System::Windows::Forms::Form
	{
		MySqlConnection^ sqlcon = gcnew MySqlConnection();
	private: System::Windows::Forms::ComboBox^ cbparticular;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;


		   MySqlCommand^ sqlcmd = gcnew MySqlCommand();
	public:
		MonthExpensePieChart(void)
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
		~MonthExpensePieChart()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbname;
	private: System::Windows::Forms::TextBox^ tbid;
	private: System::Windows::Forms::Button^ btnexit;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DateTimePicker^ dtpstart;
	private: System::Windows::Forms::DateTimePicker^ dtpend;
	private: System::Windows::Forms::Button^ btngenerate;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;

	private: System::Windows::Forms::Label^ label2;


	private: System::Windows::Forms::DataGridViewTextBoxColumn^ clmparticular;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ clmamountspent;
	private: System::Windows::Forms::Button^ btnadd;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ tbamount;

	private: System::Windows::Forms::Button^ btncalculate;



	protected:

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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MonthExpensePieChart::typeid));
			this->lbname = (gcnew System::Windows::Forms::Label());
			this->tbid = (gcnew System::Windows::Forms::TextBox());
			this->btnexit = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dtpstart = (gcnew System::Windows::Forms::DateTimePicker());
			this->dtpend = (gcnew System::Windows::Forms::DateTimePicker());
			this->btngenerate = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->clmparticular = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->clmamountspent = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnadd = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tbamount = (gcnew System::Windows::Forms::TextBox());
			this->btncalculate = (gcnew System::Windows::Forms::Button());
			this->cbparticular = (gcnew System::Windows::Forms::ComboBox());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// lbname
			// 
			this->lbname->AutoSize = true;
			this->lbname->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbname->Location = System::Drawing::Point(12, 21);
			this->lbname->Name = L"lbname";
			this->lbname->Size = System::Drawing::Size(113, 19);
			this->lbname->TabIndex = 3;
			this->lbname->Text = L"Enter User ID :";
			// 
			// tbid
			// 
			this->tbid->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbid->Location = System::Drawing::Point(131, 18);
			this->tbid->Name = L"tbid";
			this->tbid->Size = System::Drawing::Size(165, 26);
			this->tbid->TabIndex = 4;
			// 
			// btnexit
			// 
			this->btnexit->BackColor = System::Drawing::Color::Snow;
			this->btnexit->Location = System::Drawing::Point(333, 491);
			this->btnexit->Name = L"btnexit";
			this->btnexit->Size = System::Drawing::Size(75, 23);
			this->btnexit->TabIndex = 77;
			this->btnexit->Text = L"Exit";
			this->btnexit->UseCompatibleTextRendering = true;
			this->btnexit->UseVisualStyleBackColor = false;
			this->btnexit->Click += gcnew System::EventHandler(this, &MonthExpensePieChart::btnexit_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 55);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(88, 19);
			this->label3->TabIndex = 78;
			this->label3->Text = L"Start Date :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(19, 80);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(85, 19);
			this->label4->TabIndex = 79;
			this->label4->Text = L"End Date : ";
			// 
			// dtpstart
			// 
			this->dtpstart->CustomFormat = L"yyyy-mm-dd";
			this->dtpstart->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dtpstart->Location = System::Drawing::Point(99, 55);
			this->dtpstart->Name = L"dtpstart";
			this->dtpstart->Size = System::Drawing::Size(200, 20);
			this->dtpstart->TabIndex = 80;
			this->dtpstart->Value = System::DateTime(2022, 10, 28, 0, 0, 0, 0);
			// 
			// dtpend
			// 
			this->dtpend->CustomFormat = L"yyyy-mm-dd";
			this->dtpend->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dtpend->Location = System::Drawing::Point(99, 81);
			this->dtpend->Name = L"dtpend";
			this->dtpend->Size = System::Drawing::Size(200, 20);
			this->dtpend->TabIndex = 81;
			this->dtpend->Value = System::DateTime(2022, 10, 28, 0, 0, 0, 0);
			// 
			// btngenerate
			// 
			this->btngenerate->BackColor = System::Drawing::Color::Snow;
			this->btngenerate->Location = System::Drawing::Point(396, 201);
			this->btngenerate->Name = L"btngenerate";
			this->btngenerate->Size = System::Drawing::Size(75, 23);
			this->btngenerate->TabIndex = 82;
			this->btngenerate->Text = L"Plot";
			this->btngenerate->UseCompatibleTextRendering = true;
			this->btngenerate->UseVisualStyleBackColor = false;
			this->btngenerate->Click += gcnew System::EventHandler(this, &MonthExpensePieChart::btngenerate_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(426, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(148, 19);
			this->label1->TabIndex = 84;
			this->label1->Text = L"Monthly Expense :->";
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::SandyBrown;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->clmparticular,
					this->clmamountspent
			});
			this->dataGridView1->Location = System::Drawing::Point(430, 31);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(242, 151);
			this->dataGridView1->TabIndex = 85;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MonthExpensePieChart::dataGridView1_CellContentClick);
			// 
			// clmparticular
			// 
			this->clmparticular->HeaderText = L"PARTICULAR";
			this->clmparticular->Name = L"clmparticular";
			// 
			// clmamountspent
			// 
			this->clmamountspent->HeaderText = L"AMOUNT_SPENT";
			this->clmamountspent->Name = L"clmamountspent";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(17, 129);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(83, 19);
			this->label2->TabIndex = 86;
			this->label2->Text = L"Particular :";
			// 
			// btnadd
			// 
			this->btnadd->BackColor = System::Drawing::Color::Snow;
			this->btnadd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnadd->Location = System::Drawing::Point(333, 159);
			this->btnadd->Name = L"btnadd";
			this->btnadd->Size = System::Drawing::Size(75, 23);
			this->btnadd->TabIndex = 88;
			this->btnadd->Text = L"Add =>";
			this->btnadd->UseCompatibleTextRendering = true;
			this->btnadd->UseVisualStyleBackColor = false;
			this->btnadd->Click += gcnew System::EventHandler(this, &MonthExpensePieChart::btnadd_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(30, 157);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(70, 19);
			this->label5->TabIndex = 89;
			this->label5->Text = L"Amount :";
			// 
			// tbamount
			// 
			this->tbamount->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbamount->Location = System::Drawing::Point(99, 157);
			this->tbamount->Name = L"tbamount";
			this->tbamount->Size = System::Drawing::Size(111, 26);
			this->tbamount->TabIndex = 90;
			// 
			// btncalculate
			// 
			this->btncalculate->BackColor = System::Drawing::Color::Snow;
			this->btncalculate->Location = System::Drawing::Point(333, 130);
			this->btncalculate->Name = L"btncalculate";
			this->btncalculate->Size = System::Drawing::Size(91, 23);
			this->btncalculate->TabIndex = 91;
			this->btncalculate->Text = L"Calculate";
			this->btncalculate->UseCompatibleTextRendering = true;
			this->btncalculate->UseVisualStyleBackColor = false;
			this->btncalculate->Click += gcnew System::EventHandler(this, &MonthExpensePieChart::btncalculate_Click);
			// 
			// cbparticular
			// 
			this->cbparticular->FormattingEnabled = true;
			this->cbparticular->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"Enter below if not present", L"Groceries",
					L"Vegetables", L"Clothing", L"Fuel", L"Travel", L"Leisure", L"Furniture"
			});
			this->cbparticular->Location = System::Drawing::Point(99, 130);
			this->cbparticular->Name = L"cbparticular";
			this->cbparticular->Size = System::Drawing::Size(221, 21);
			this->cbparticular->TabIndex = 92;
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(82, 254);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Legend = L"Legend1";
			series1->Name = L"AMOUNT_SPENT";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(544, 217);
			this->chart1->TabIndex = 93;
			this->chart1->Text = L"chart1";
			// 
			// MonthExpensePieChart
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SandyBrown;
			this->ClientSize = System::Drawing::Size(697, 526);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->cbparticular);
			this->Controls->Add(this->btncalculate);
			this->Controls->Add(this->tbamount);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->btnadd);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btngenerate);
			this->Controls->Add(this->dtpend);
			this->Controls->Add(this->dtpstart);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->btnexit);
			this->Controls->Add(this->tbid);
			this->Controls->Add(this->lbname);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MonthExpensePieChart";
			this->Text = L"Month Expense Pie Chart";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btncalculate_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		try
		{
			if (tbid->Text != "")
			{
				sqlcon->ConnectionString = "datasource = localhost; port = 3306; username = root; password = Manthan7399Mangesh55&@; database = expensetracker";
				sqlcon->Open();
				sqlcmd->Connection = sqlcon;
				String^ sqlquery = "SELECT SUM(AMOUNT_SPENT) FROM expense_list WHERE USER_ID = " + tbid->Text + " AND DATE >= '" + dtpstart->Text + "' AND DATE <= '" + dtpend->Text + "' AND PARTICULAR LIKE '" + cbparticular->Text + "';";
				MySqlCommand^ sqlCmd = gcnew MySqlCommand(sqlquery, sqlcon);
				Object^ scalarobj = sqlCmd->ExecuteScalar();
				tbamount->Text = scalarobj->ToString();
				sqlcon->Close();
			}
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message, "Month Expense Pie Chart", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
		}
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) 
	{
		cbparticular->Text = dataGridView1->SelectedRows[0]->Cells[0]->Value->ToString();
		tbamount->Text = dataGridView1->SelectedRows[0]->Cells[1]->Value->ToString();
	}
	private: System::Void btnadd_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		try
		{
			if (cbparticular->Text != "" && tbamount->Text != "")
			{
				dataGridView1->Rows->Add(cbparticular->Text, tbamount->Text);
			}
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message, "Month Expense Pie Chart", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
		}
		try
		{
			cbparticular->Text = "";
			tbamount->Text = "";
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message, "Month Expense Pie Chart", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
		}
	}
	private: System::Void btngenerate_Click(System::Object^ sender, System::EventArgs^ e) 
	{	
		try
		{
			for (int i = 0; i < dataGridView1->Rows->Count; ++i)
			{
				for (int j = 1; j < dataGridView1->Columns->Count; ++j)
				{
					this->chart1->ChartAreas[0]->AxisX->LabelStyle->Enabled = false;
					this->chart1->Series[dataGridView1->Columns[j]->HeaderText->ToString()]->IsValueShownAsLabel = true;
					this->chart1->Series[dataGridView1->Columns[j]->HeaderText->ToString()]->Points->AddXY(dataGridView1->Columns[j]->HeaderText, dataGridView1[j, i]->Value);
				}
			}
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message, "Month Expense Pie Chart", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
		}
	}
	private: System::Void btnexit_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		System::Windows::Forms::DialogResult iexit;
		try
		{
			iexit = MessageBox::Show("Confirm if you want to exit ?", "Month Expense Pie Chart", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
			if (iexit == System::Windows::Forms::DialogResult::Yes)
			{
				Application::Exit();
			}
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message, "Month Expense Pie Chart", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
		}
	}
};
}
