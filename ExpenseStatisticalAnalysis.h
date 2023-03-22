#pragma once
#include "DrawLineGraph.h"
#include "MonthExpensePieChart.h"

namespace ExpenseTrackerGUI1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for ExpenseStatisticalAnalysis
	/// </summary>
	public ref class ExpenseStatisticalAnalysis : public System::Windows::Forms::Form
	{
		MySqlConnection^ sqlcon = gcnew MySqlConnection();
		MySqlCommand^ sqlcmd = gcnew MySqlCommand();
		DataTable^ sqldata = gcnew DataTable();
	private: System::Windows::Forms::Button^ btnlinegraph;
	private: System::Windows::Forms::Button^ btnpiechart;

	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tbname;







		   MySqlDataAdapter^ sqladpt = gcnew MySqlDataAdapter();
	public:
		ExpenseStatisticalAnalysis(void)
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
		~ExpenseStatisticalAnalysis()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbname;
	private: System::Windows::Forms::TextBox^ tbid;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DateTimePicker^ dtpstart;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DateTimePicker^ dtpend;





	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Button^ btncalculate;
	private: System::Windows::Forms::Button^ btnexit;
	private: System::Windows::Forms::TextBox^ tbexpenditure;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ExpenseStatisticalAnalysis::typeid));
			this->lbname = (gcnew System::Windows::Forms::Label());
			this->tbid = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dtpstart = (gcnew System::Windows::Forms::DateTimePicker());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dtpend = (gcnew System::Windows::Forms::DateTimePicker());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btncalculate = (gcnew System::Windows::Forms::Button());
			this->btnexit = (gcnew System::Windows::Forms::Button());
			this->tbexpenditure = (gcnew System::Windows::Forms::TextBox());
			this->btnlinegraph = (gcnew System::Windows::Forms::Button());
			this->btnpiechart = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbname = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// lbname
			// 
			this->lbname->AutoSize = true;
			this->lbname->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbname->Location = System::Drawing::Point(0, 24);
			this->lbname->Name = L"lbname";
			this->lbname->Size = System::Drawing::Size(113, 19);
			this->lbname->TabIndex = 2;
			this->lbname->Text = L"Enter User ID :";
			// 
			// tbid
			// 
			this->tbid->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbid->Location = System::Drawing::Point(112, 21);
			this->tbid->Name = L"tbid";
			this->tbid->Size = System::Drawing::Size(165, 26);
			this->tbid->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(22, 63);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(88, 19);
			this->label3->TabIndex = 39;
			this->label3->Text = L"Start Date :";
			// 
			// dtpstart
			// 
			this->dtpstart->CustomFormat = L"yyyy-mm-dd";
			this->dtpstart->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dtpstart->Location = System::Drawing::Point(112, 63);
			this->dtpstart->Name = L"dtpstart";
			this->dtpstart->Size = System::Drawing::Size(200, 20);
			this->dtpstart->TabIndex = 61;
			this->dtpstart->Value = System::DateTime(2022, 10, 28, 0, 0, 0, 0);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(25, 99);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(85, 19);
			this->label4->TabIndex = 62;
			this->label4->Text = L"End Date : ";
			// 
			// dtpend
			// 
			this->dtpend->CustomFormat = L"yyyy-mm-dd";
			this->dtpend->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dtpend->Location = System::Drawing::Point(112, 97);
			this->dtpend->Name = L"dtpend";
			this->dtpend->Size = System::Drawing::Size(200, 20);
			this->dtpend->TabIndex = 63;
			this->dtpend->Value = System::DateTime(2022, 10, 28, 0, 0, 0, 0);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(90, 231);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(137, 19);
			this->label1->TabIndex = 69;
			this->label1->Text = L"Total Expenditure :";
			// 
			// btncalculate
			// 
			this->btncalculate->BackColor = System::Drawing::Color::Snow;
			this->btncalculate->Location = System::Drawing::Point(237, 142);
			this->btncalculate->Name = L"btncalculate";
			this->btncalculate->Size = System::Drawing::Size(91, 23);
			this->btncalculate->TabIndex = 71;
			this->btncalculate->Text = L"Calculate";
			this->btncalculate->UseCompatibleTextRendering = true;
			this->btncalculate->UseVisualStyleBackColor = false;
			this->btncalculate->Click += gcnew System::EventHandler(this, &ExpenseStatisticalAnalysis::btncalculate_Click);
			// 
			// btnexit
			// 
			this->btnexit->BackColor = System::Drawing::Color::Snow;
			this->btnexit->Location = System::Drawing::Point(237, 274);
			this->btnexit->Name = L"btnexit";
			this->btnexit->Size = System::Drawing::Size(75, 23);
			this->btnexit->TabIndex = 72;
			this->btnexit->Text = L"Exit";
			this->btnexit->UseCompatibleTextRendering = true;
			this->btnexit->UseVisualStyleBackColor = false;
			this->btnexit->Click += gcnew System::EventHandler(this, &ExpenseStatisticalAnalysis::btnexit_Click);
			// 
			// tbexpenditure
			// 
			this->tbexpenditure->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbexpenditure->Location = System::Drawing::Point(229, 228);
			this->tbexpenditure->Name = L"tbexpenditure";
			this->tbexpenditure->Size = System::Drawing::Size(139, 26);
			this->tbexpenditure->TabIndex = 73;
			// 
			// btnlinegraph
			// 
			this->btnlinegraph->BackColor = System::Drawing::Color::Snow;
			this->btnlinegraph->Location = System::Drawing::Point(15, 21);
			this->btnlinegraph->Name = L"btnlinegraph";
			this->btnlinegraph->Size = System::Drawing::Size(148, 23);
			this->btnlinegraph->TabIndex = 74;
			this->btnlinegraph->Text = L"Total Monthly Expense";
			this->btnlinegraph->UseCompatibleTextRendering = true;
			this->btnlinegraph->UseVisualStyleBackColor = false;
			this->btnlinegraph->Click += gcnew System::EventHandler(this, &ExpenseStatisticalAnalysis::btnlinegraph_Click);
			// 
			// btnpiechart
			// 
			this->btnpiechart->BackColor = System::Drawing::Color::Snow;
			this->btnpiechart->Location = System::Drawing::Point(25, 58);
			this->btnpiechart->Name = L"btnpiechart";
			this->btnpiechart->Size = System::Drawing::Size(127, 23);
			this->btnpiechart->TabIndex = 75;
			this->btnpiechart->Text = L"Monthly Expense";
			this->btnpiechart->UseCompatibleTextRendering = true;
			this->btnpiechart->UseVisualStyleBackColor = false;
			this->btnpiechart->Click += gcnew System::EventHandler(this, &ExpenseStatisticalAnalysis::btnpiechart_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->btnlinegraph);
			this->groupBox1->Controls->Add(this->btnpiechart);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(333, 24);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(182, 100);
			this->groupBox1->TabIndex = 76;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Please Select Option";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 187);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(62, 19);
			this->label2->TabIndex = 77;
			this->label2->Text = L"Name : ";
			// 
			// tbname
			// 
			this->tbname->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbname->Location = System::Drawing::Point(72, 184);
			this->tbname->Name = L"tbname";
			this->tbname->Size = System::Drawing::Size(391, 26);
			this->tbname->TabIndex = 78;
			// 
			// ExpenseStatisticalAnalysis
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkSalmon;
			this->ClientSize = System::Drawing::Size(545, 309);
			this->Controls->Add(this->tbname);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->tbexpenditure);
			this->Controls->Add(this->btnexit);
			this->Controls->Add(this->btncalculate);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dtpend);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->dtpstart);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->tbid);
			this->Controls->Add(this->lbname);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"ExpenseStatisticalAnalysis";
			this->Text = L"Expense Statistical Analysis";
			this->Load += gcnew System::EventHandler(this, &ExpenseStatisticalAnalysis::ExpenseStatisticalAnalysis_Load);
			this->groupBox1->ResumeLayout(false);
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
				String^ sqlquery = "SELECT NAME FROM users_record WHERE USER_ID = " + tbid->Text + ";";
				MySqlCommand^ sqlCmd = gcnew MySqlCommand(sqlquery, sqlcon);
				Object^ scalarobj = sqlCmd->ExecuteScalar();
				tbname->Text = scalarobj->ToString();
				sqlcon->Close();
			}
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message, "Expense Statistical Analysis", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
		}
		try
		{
			if (tbid->Text != "")
			{
				sqlcon->ConnectionString = "datasource = localhost; port = 3306; username = root; password = Manthan7399Mangesh55&@; database = expensetracker";
				sqlcon->Open();
				sqlcmd->Connection = sqlcon;
				String^ sqlquery = "SELECT SUM(AMOUNT_SPENT) FROM expense_list WHERE USER_ID = " + tbid->Text + " AND DATE >= '" + dtpstart->Text + "' AND DATE <= '" + dtpend->Text + "';";
				MySqlCommand^ sqlCmd = gcnew MySqlCommand(sqlquery, sqlcon);
				Object^ scalarobj = sqlCmd->ExecuteScalar();
				tbexpenditure->Text = scalarobj->ToString();
				sqlcon->Close();
			}
			
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message, "Expense Statistical Analysis", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
		}
	}
	private: System::Void btnexit_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		System::Windows::Forms::DialogResult iexit;
		try
		{
			iexit = MessageBox::Show("Confirm if you want to exit ?", "Expense Statistical Analysis", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
			if (iexit == System::Windows::Forms::DialogResult::Yes)
			{
				Application::Exit();
			}
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message, "Expense Statistical Analysis", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
		}
	}
	private: System::Void btnlinegraph_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->Hide();
		DrawLineGraph^ line = gcnew DrawLineGraph();
		line->ShowDialog();
	}
	private: System::Void btnpiechart_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->Hide();
		MonthExpensePieChart^ pie = gcnew MonthExpensePieChart();
		pie->ShowDialog();
	}
private: System::Void ExpenseStatisticalAnalysis_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
