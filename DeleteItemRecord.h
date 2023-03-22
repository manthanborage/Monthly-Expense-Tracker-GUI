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
	/// Summary for DeleteItemRecord
	/// </summary>
	public ref class DeleteItemRecord : public System::Windows::Forms::Form
	{
		MySqlDataAdapter^ sqladpt = gcnew MySqlDataAdapter();

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DateTimePicker^ dtp1;
	private: System::Windows::Forms::TextBox^ tbitem;
	private: System::Windows::Forms::Label^ label4;
		   MySqlDataReader^ sqlread;
	public:
		DeleteItemRecord(void)
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
		~DeleteItemRecord()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbname;
	private: System::Windows::Forms::TextBox^ tbid;
	private: System::Windows::Forms::Button^ btnview;


	private: System::Windows::Forms::Button^ btndelete;
	private: System::Windows::Forms::Button^ btnexit;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(DeleteItemRecord::typeid));
			this->lbname = (gcnew System::Windows::Forms::Label());
			this->tbid = (gcnew System::Windows::Forms::TextBox());
			this->btnview = (gcnew System::Windows::Forms::Button());
			this->btndelete = (gcnew System::Windows::Forms::Button());
			this->btnexit = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dtp1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->tbitem = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// lbname
			// 
			this->lbname->AutoSize = true;
			this->lbname->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbname->Location = System::Drawing::Point(12, 23);
			this->lbname->Name = L"lbname";
			this->lbname->Size = System::Drawing::Size(36, 19);
			this->lbname->TabIndex = 2;
			this->lbname->Text = L"ID :";
			// 
			// tbid
			// 
			this->tbid->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbid->Location = System::Drawing::Point(49, 22);
			this->tbid->Name = L"tbid";
			this->tbid->Size = System::Drawing::Size(316, 26);
			this->tbid->TabIndex = 3;
			// 
			// btnview
			// 
			this->btnview->BackColor = System::Drawing::Color::Snow;
			this->btnview->Location = System::Drawing::Point(159, 69);
			this->btnview->Name = L"btnview";
			this->btnview->Size = System::Drawing::Size(75, 23);
			this->btnview->TabIndex = 33;
			this->btnview->Text = L"View";
			this->btnview->UseCompatibleTextRendering = true;
			this->btnview->UseVisualStyleBackColor = false;
			this->btnview->Click += gcnew System::EventHandler(this, &DeleteItemRecord::btnview_Click);
			// 
			// btndelete
			// 
			this->btndelete->BackColor = System::Drawing::Color::Snow;
			this->btndelete->Location = System::Drawing::Point(159, 201);
			this->btndelete->Name = L"btndelete";
			this->btndelete->Size = System::Drawing::Size(75, 23);
			this->btndelete->TabIndex = 40;
			this->btndelete->Text = L"Delete Item";
			this->btndelete->UseCompatibleTextRendering = true;
			this->btndelete->UseVisualStyleBackColor = false;
			this->btndelete->Click += gcnew System::EventHandler(this, &DeleteItemRecord::btndelete_Click);
			// 
			// btnexit
			// 
			this->btnexit->BackColor = System::Drawing::Color::Snow;
			this->btnexit->Location = System::Drawing::Point(290, 450);
			this->btnexit->Name = L"btnexit";
			this->btnexit->Size = System::Drawing::Size(75, 23);
			this->btnexit->TabIndex = 43;
			this->btnexit->Text = L"Exit";
			this->btnexit->UseCompatibleTextRendering = true;
			this->btnexit->UseVisualStyleBackColor = false;
			this->btnexit->Click += gcnew System::EventHandler(this, &DeleteItemRecord::btnexit_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 234);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(115, 19);
			this->label1->TabIndex = 44;
			this->label1->Text = L"User Details :->";
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::LightGreen;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(16, 271);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(240, 64);
			this->dataGridView1->TabIndex = 45;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(336, 73);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(118, 19);
			this->label3->TabIndex = 46;
			this->label3->Text = L"Expense List :->";
			// 
			// dataGridView2
			// 
			this->dataGridView2->BackgroundColor = System::Drawing::Color::LightGreen;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(340, 108);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(328, 319);
			this->dataGridView2->TabIndex = 47;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(45, 108);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(51, 19);
			this->label2->TabIndex = 59;
			this->label2->Text = L"Date :";
			// 
			// dtp1
			// 
			this->dtp1->CustomFormat = L"yyyy-mm-dd";
			this->dtp1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dtp1->Location = System::Drawing::Point(98, 108);
			this->dtp1->Name = L"dtp1";
			this->dtp1->Size = System::Drawing::Size(200, 20);
			this->dtp1->TabIndex = 60;
			this->dtp1->Value = System::DateTime(2022, 10, 28, 12, 0, 0, 0);
			// 
			// tbitem
			// 
			this->tbitem->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbitem->Location = System::Drawing::Point(98, 157);
			this->tbitem->Name = L"tbitem";
			this->tbitem->Size = System::Drawing::Size(221, 26);
			this->tbitem->TabIndex = 61;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(3, 160);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(93, 19);
			this->label4->TabIndex = 62;
			this->label4->Text = L"Item Name :";
			// 
			// DeleteItemRecord
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightGreen;
			this->ClientSize = System::Drawing::Size(682, 489);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->tbitem);
			this->Controls->Add(this->dtp1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnexit);
			this->Controls->Add(this->btndelete);
			this->Controls->Add(this->btnview);
			this->Controls->Add(this->tbid);
			this->Controls->Add(this->lbname);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"DeleteItemRecord";
			this->Text = L"Delete Item from Existing Record";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnview_Click(System::Object^ sender, System::EventArgs^ e)
	{
		String^ constr = L"datasource = localhost; port = 3306; username = root; password = Manthan7399Mangesh55&@; database = expensetracker";
		MySqlConnection^ sqlCon = gcnew MySqlConnection(constr);
		MySqlCommand^ sqlCmd = gcnew MySqlCommand("SELECT * FROM users_record WHERE USER_ID = " + tbid->Text + ";", sqlCon);
		try
		{
			MySqlDataAdapter^ sqlAdpt = gcnew MySqlDataAdapter();
			sqlAdpt->SelectCommand = sqlCmd;
			DataTable^ usersrecord = gcnew DataTable();
			sqlAdpt->Fill(usersrecord);
			BindingSource^ bsource = gcnew BindingSource();
			bsource->DataSource = usersrecord;
			dataGridView1->DataSource = bsource;
			sqladpt->Update(usersrecord);
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message, "Delete Item from Existing Record");
		}
		String^ constr1 = L"datasource = localhost; port = 3306; username = root; password = Manthan7399Mangesh55&@; database = expensetracker";
		MySqlConnection^ sqlCon1 = gcnew MySqlConnection(constr1);
		MySqlCommand^ sqlCmd1 = gcnew MySqlCommand("SELECT DATE,PARTICULAR,AMOUNT_SPENT FROM expense_list WHERE USER_ID = " + tbid->Text + ";", sqlCon1);
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
			MessageBox::Show(ex->Message, "Delete Item from Existing Record");
		}
	}
	private: System::Void btndelete_Click(System::Object^ sender, System::EventArgs^ e)
	{
		String^ constr = L"datasource = localhost; port = 3306; username = root; password = Manthan7399Mangesh55&@; database = expensetracker";
		MySqlConnection^ sqlCon = gcnew MySqlConnection(constr);
		MySqlCommand^ sqlCmd = gcnew MySqlCommand("DELETE FROM expense_list WHERE USER_ID = " + tbid->Text + " AND DATE = '" + dtp1->Text + "' AND PARTICULAR LIKE '" + tbitem->Text + "'; ", sqlCon);
		try
		{
			sqlCon->Open();
			sqlread = sqlCmd->ExecuteReader();
			MessageBox::Show("Expense Deleted Sucessfully!");

		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message, "Delete Item from Existing Record");
		}
		String^ constr1 = L"datasource = localhost; port = 3306; username = root; password = Manthan7399Mangesh55&@; database = expensetracker";
		MySqlConnection^ sqlCon1 = gcnew MySqlConnection(constr1);
		MySqlCommand^ sqlCmd1 = gcnew MySqlCommand("SELECT DATE,PARTICULAR,AMOUNT_SPENT FROM expense_list WHERE USER_ID = " + tbid->Text + ";", sqlCon1);
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
			MessageBox::Show(ex->Message, "Delete Item from Existing Record");
		}
	}
	private: System::Void btnexit_Click(System::Object^ sender, System::EventArgs^ e)
	{
		System::Windows::Forms::DialogResult iexit;
		try
		{
			iexit = MessageBox::Show("Confirm if you want to exit !", "Delete Item From Existing Record", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
			if (iexit == System::Windows::Forms::DialogResult::Yes)
			{
				Application::Exit();
			}
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message, "Delete Item from Existing Record", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
		}
	}
};
}
