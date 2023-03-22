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
	/// Summary for ExportItemRecord
	/// </summary>
	public ref class ExportItemRecord : public System::Windows::Forms::Form
	{
		MySqlDataAdapter^ sqladpt = gcnew MySqlDataAdapter();
	public:
		ExportItemRecord(void)
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
		~ExportItemRecord()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbname;
	private: System::Windows::Forms::TextBox^ tbid;
	private: System::Windows::Forms::Button^ btnexport;
	private: System::Windows::Forms::Button^ btnexit;
	private: System::Windows::Forms::DataGridView^ dataGridView1;

	private: System::Windows::Forms::Label^ label2;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ExportItemRecord::typeid));
			this->lbname = (gcnew System::Windows::Forms::Label());
			this->tbid = (gcnew System::Windows::Forms::TextBox());
			this->btnexport = (gcnew System::Windows::Forms::Button());
			this->btnexit = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// lbname
			// 
			this->lbname->AutoSize = true;
			this->lbname->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbname->Location = System::Drawing::Point(21, 21);
			this->lbname->Name = L"lbname";
			this->lbname->Size = System::Drawing::Size(36, 19);
			this->lbname->TabIndex = 2;
			this->lbname->Text = L"ID :";
			// 
			// tbid
			// 
			this->tbid->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbid->Location = System::Drawing::Point(63, 18);
			this->tbid->Name = L"tbid";
			this->tbid->Size = System::Drawing::Size(165, 26);
			this->tbid->TabIndex = 3;
			// 
			// btnexport
			// 
			this->btnexport->BackColor = System::Drawing::Color::Snow;
			this->btnexport->Location = System::Drawing::Point(12, 71);
			this->btnexport->Name = L"btnexport";
			this->btnexport->Size = System::Drawing::Size(100, 23);
			this->btnexport->TabIndex = 33;
			this->btnexport->Text = L"Export to .xlsx";
			this->btnexport->UseCompatibleTextRendering = true;
			this->btnexport->UseVisualStyleBackColor = false;
			this->btnexport->Click += gcnew System::EventHandler(this, &ExportItemRecord::btnexport_Click);
			// 
			// btnexit
			// 
			this->btnexit->BackColor = System::Drawing::Color::Snow;
			this->btnexit->Location = System::Drawing::Point(212, 71);
			this->btnexit->Name = L"btnexit";
			this->btnexit->Size = System::Drawing::Size(75, 23);
			this->btnexit->TabIndex = 38;
			this->btnexit->Text = L"Exit";
			this->btnexit->UseCompatibleTextRendering = true;
			this->btnexit->UseVisualStyleBackColor = false;
			this->btnexit->Click += gcnew System::EventHandler(this, &ExportItemRecord::btnexit_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::SeaGreen;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 145);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(369, 319);
			this->dataGridView1->TabIndex = 39;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(8, 114);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(118, 19);
			this->label2->TabIndex = 40;
			this->label2->Text = L"Expense List :->";
			// 
			// ExportItemRecord
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SeaGreen;
			this->ClientSize = System::Drawing::Size(405, 483);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->btnexit);
			this->Controls->Add(this->btnexport);
			this->Controls->Add(this->tbid);
			this->Controls->Add(this->lbname);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"ExportItemRecord";
			this->Text = L"Export Items ";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnexport_Click(System::Object^ sender, System::EventArgs^ e)
	{
		String^ constr = L"datasource = localhost; port = 3306; username = root; password = Manthan7399Mangesh55&@; database = expensetracker";
		MySqlConnection^ sqlCon = gcnew MySqlConnection(constr);
		MySqlCommand^ sqlCmd = gcnew MySqlCommand("SELECT DATE,PARTICULAR,AMOUNT_SPENT FROM expense_list WHERE USER_ID = " + tbid->Text + ";", sqlCon);
		try
		{
			MySqlDataAdapter^ sqlAdpt = gcnew MySqlDataAdapter();
			sqlAdpt->SelectCommand = sqlCmd;
			DataTable^ expenselist = gcnew DataTable();
			sqlAdpt->Fill(expenselist);
			BindingSource^ bsource = gcnew BindingSource();
			bsource->DataSource = expenselist;
			dataGridView1->DataSource = bsource;
			sqladpt->Update(expenselist);
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message, "Export Items");
		}
		try
		{
			tbid->Text = "";
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message, "Export Items", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
		}
		if (dataGridView1->Rows->Count > 0)
		{
			Microsoft::Office::Interop::Excel::Application^ excelapp = gcnew Microsoft::Office::Interop::Excel::ApplicationClass();
			excelapp->Workbooks->Add(Type::Missing);
			for (int i = 1; i < dataGridView1->Columns->Count + 1; ++i)
			{
				excelapp->Cells[1, i] = dataGridView1->Columns[i - 1]->HeaderText;
			}
			for (int i = 0; i < dataGridView1->Rows->Count; ++i)
			{
				for (int j = 0; j < dataGridView1->Columns->Count; j++)
				{
					excelapp->Cells[i + 2, j + 1] = dataGridView1->Rows[i]->Cells[j]->Value;
				}
			}
			excelapp->Columns->AutoFit();
			excelapp->Visible = true;
		}
	}
	private: System::Void btnexit_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		System::Windows::Forms::DialogResult iexit;
		try
		{
			iexit = MessageBox::Show("Confirm if you want to exit ?", "Export Items", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
			if (iexit == System::Windows::Forms::DialogResult::Yes)
			{
				Application::Exit();
			}
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message, "Export Items", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
		}
	}
};
}
