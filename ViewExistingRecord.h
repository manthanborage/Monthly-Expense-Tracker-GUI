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
	/// Summary for ViewExistingRecord
	/// </summary>
	public ref class ViewExistingRecord : public System::Windows::Forms::Form
	{
		MySqlConnection^ sqlcon = gcnew MySqlConnection();
		MySqlCommand^ sqlcmd = gcnew MySqlCommand();
		DataTable^ sqldata = gcnew DataTable();
		MySqlDataAdapter^ sqladpt = gcnew MySqlDataAdapter();
	public:
		ViewExistingRecord(void)
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
		~ViewExistingRecord()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::TextBox^ tbid;
	private: System::Windows::Forms::Button^ btnview;


	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btnexit;
	private: System::Windows::Forms::Label^ label3;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DateTimePicker^ dtp1;
	private: System::Windows::Forms::DateTimePicker^ dtp2;
	private: System::Windows::Forms::Label^ lbname;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ tbname;














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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ViewExistingRecord::typeid));
			this->tbid = (gcnew System::Windows::Forms::TextBox());
			this->btnview = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnexit = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dtp1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dtp2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->lbname = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tbname = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// tbid
			// 
			this->tbid->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbid->Location = System::Drawing::Point(126, 20);
			this->tbid->Name = L"tbid";
			this->tbid->Size = System::Drawing::Size(165, 26);
			this->tbid->TabIndex = 2;
			// 
			// btnview
			// 
			this->btnview->BackColor = System::Drawing::Color::Snow;
			this->btnview->Location = System::Drawing::Point(164, 156);
			this->btnview->Name = L"btnview";
			this->btnview->Size = System::Drawing::Size(75, 23);
			this->btnview->TabIndex = 32;
			this->btnview->Text = L"View";
			this->btnview->UseCompatibleTextRendering = true;
			this->btnview->UseVisualStyleBackColor = false;
			this->btnview->Click += gcnew System::EventHandler(this, &ViewExistingRecord::btnview_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->BackgroundColor = System::Drawing::Color::Wheat;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(328, 56);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(343, 319);
			this->dataGridView2->TabIndex = 35;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(324, 23);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(118, 19);
			this->label2->TabIndex = 36;
			this->label2->Text = L"Expense List :->";
			// 
			// btnexit
			// 
			this->btnexit->BackColor = System::Drawing::Color::Snow;
			this->btnexit->Location = System::Drawing::Point(291, 398);
			this->btnexit->Name = L"btnexit";
			this->btnexit->Size = System::Drawing::Size(75, 23);
			this->btnexit->TabIndex = 37;
			this->btnexit->Text = L"Exit";
			this->btnexit->UseCompatibleTextRendering = true;
			this->btnexit->UseVisualStyleBackColor = false;
			this->btnexit->Click += gcnew System::EventHandler(this, &ViewExistingRecord::btnexit_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 70);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(88, 19);
			this->label3->TabIndex = 38;
			this->label3->Text = L"Start Date :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(15, 113);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(85, 19);
			this->label4->TabIndex = 40;
			this->label4->Text = L"End Date : ";
			// 
			// dtp1
			// 
			this->dtp1->CustomFormat = L"yyyy-mm-dd";
			this->dtp1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dtp1->Location = System::Drawing::Point(103, 70);
			this->dtp1->Name = L"dtp1";
			this->dtp1->Size = System::Drawing::Size(200, 20);
			this->dtp1->TabIndex = 60;
			this->dtp1->Value = System::DateTime(2022, 10, 28, 0, 0, 0, 0);
			// 
			// dtp2
			// 
			this->dtp2->CustomFormat = L"yyyy-mm-dd";
			this->dtp2->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dtp2->Location = System::Drawing::Point(103, 116);
			this->dtp2->Name = L"dtp2";
			this->dtp2->Size = System::Drawing::Size(200, 20);
			this->dtp2->TabIndex = 61;
			this->dtp2->Value = System::DateTime(2022, 10, 28, 0, 0, 0, 0);
			// 
			// lbname
			// 
			this->lbname->AutoSize = true;
			this->lbname->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbname->Location = System::Drawing::Point(7, 23);
			this->lbname->Name = L"lbname";
			this->lbname->Size = System::Drawing::Size(113, 19);
			this->lbname->TabIndex = 62;
			this->lbname->Text = L"Enter User ID :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(12, 198);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(62, 19);
			this->label5->TabIndex = 78;
			this->label5->Text = L"Name : ";
			// 
			// tbname
			// 
			this->tbname->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbname->Location = System::Drawing::Point(72, 195);
			this->tbname->Name = L"tbname";
			this->tbname->Size = System::Drawing::Size(231, 26);
			this->tbname->TabIndex = 79;
			// 
			// ViewExistingRecord
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Wheat;
			this->ClientSize = System::Drawing::Size(685, 437);
			this->Controls->Add(this->tbname);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->lbname);
			this->Controls->Add(this->dtp2);
			this->Controls->Add(this->dtp1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->btnexit);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->btnview);
			this->Controls->Add(this->tbid);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"ViewExistingRecord";
			this->Text = L"View Existing Record";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnview_Click(System::Object^ sender, System::EventArgs^ e) 
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
			MessageBox::Show(ex->Message, "View Existing Record");
		}
		String^ constr1 = L"datasource = localhost; port = 3306; username = root; password = Manthan7399Mangesh55&@; database = expensetracker";
		MySqlConnection^ sqlCon1 = gcnew MySqlConnection(constr1);
		MySqlCommand^ sqlCmd1 = gcnew MySqlCommand("SELECT DATE,PARTICULAR,AMOUNT_SPENT FROM expense_list WHERE USER_ID = " + tbid->Text + " AND DATE >= '" + dtp1->Text + "' AND DATE <= '" + dtp2->Text + "';", sqlCon1);
		try
		{
			MySqlDataAdapter^ sqlAdpt1 = gcnew MySqlDataAdapter();
			sqlAdpt1->SelectCommand = sqlCmd1;
			DataTable^ expenselist = gcnew DataTable();
			sqlAdpt1->Fill(expenselist);
			BindingSource^ bsource = gcnew BindingSource();
			bsource->DataSource = expenselist;
			dataGridView2->DataSource = bsource;
			sqladpt->Update(expenselist);
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message, "View Existing Record");
		}
	}
	private: System::Void btnexit_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		System::Windows::Forms::DialogResult iexit;
		try
		{
			iexit = MessageBox::Show("Confirm if you want to exit ?", "View Existing Record", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
			if (iexit == System::Windows::Forms::DialogResult::Yes)
			{
				Application::Exit();
			}
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message, "View Existing Record", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
		}
	}
};
}
