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
	/// Summary for CreateNewRecord
	/// </summary>
	public ref class CreateNewRecord : public System::Windows::Forms::Form
	{
		MySqlConnection^ sqlcon = gcnew MySqlConnection();
		MySqlCommand^ sqlcmd = gcnew MySqlCommand();
		DataTable^ sqldata = gcnew DataTable();
		MySqlDataAdapter^ sqladpt = gcnew MySqlDataAdapter();

	private: System::Windows::Forms::TextBox^ tbid;
	private: System::Windows::Forms::TextBox^ tbitem;

	private: System::Windows::Forms::Button^ btnadditem;
	private: System::Windows::Forms::Label^ lbname;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DateTimePicker^ dtp1;


		   MySqlDataReader^ sqlread;
	public:
		CreateNewRecord(void)
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
		~CreateNewRecord()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ tbname;
	private: System::Windows::Forms::Button^ btnsave;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DataGridView^ dataGridView1;

	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Button^ btninsert;

	private: System::Windows::Forms::Button^ btnexit;
	private: System::Windows::Forms::ComboBox^ cbitemname;
	private: System::Windows::Forms::TextBox^ tbamount;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::DataGridView^ dataGridView2;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CreateNewRecord::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tbname = (gcnew System::Windows::Forms::TextBox());
			this->btnsave = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btninsert = (gcnew System::Windows::Forms::Button());
			this->btnexit = (gcnew System::Windows::Forms::Button());
			this->cbitemname = (gcnew System::Windows::Forms::ComboBox());
			this->tbamount = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->tbid = (gcnew System::Windows::Forms::TextBox());
			this->tbitem = (gcnew System::Windows::Forms::TextBox());
			this->btnadditem = (gcnew System::Windows::Forms::Button());
			this->lbname = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dtp1 = (gcnew System::Windows::Forms::DateTimePicker());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(62, 19);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Name : ";
			// 
			// tbname
			// 
			this->tbname->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbname->Location = System::Drawing::Point(71, 18);
			this->tbname->Name = L"tbname";
			this->tbname->Size = System::Drawing::Size(350, 26);
			this->tbname->TabIndex = 4;
			// 
			// btnsave
			// 
			this->btnsave->BackColor = System::Drawing::Color::Snow;
			this->btnsave->Location = System::Drawing::Point(193, 55);
			this->btnsave->Name = L"btnsave";
			this->btnsave->Size = System::Drawing::Size(75, 23);
			this->btnsave->TabIndex = 29;
			this->btnsave->Text = L"Save";
			this->btnsave->UseCompatibleTextRendering = true;
			this->btnsave->UseVisualStyleBackColor = false;
			this->btnsave->Click += gcnew System::EventHandler(this, &CreateNewRecord::btnsave_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(18, 276);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(93, 19);
			this->label3->TabIndex = 32;
			this->label3->Text = L"Item Name :";
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(128, 97);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(214, 66);
			this->dataGridView1->TabIndex = 33;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(41, 326);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(70, 19);
			this->label4->TabIndex = 35;
			this->label4->Text = L"Amount :";
			// 
			// btninsert
			// 
			this->btninsert->BackColor = System::Drawing::Color::Snow;
			this->btninsert->Location = System::Drawing::Point(36, 379);
			this->btninsert->Name = L"btninsert";
			this->btninsert->Size = System::Drawing::Size(75, 23);
			this->btninsert->TabIndex = 44;
			this->btninsert->Text = L"Insert";
			this->btninsert->UseCompatibleTextRendering = true;
			this->btninsert->UseVisualStyleBackColor = false;
			this->btninsert->Click += gcnew System::EventHandler(this, &CreateNewRecord::btninsert_Click);
			// 
			// btnexit
			// 
			this->btnexit->BackColor = System::Drawing::Color::Snow;
			this->btnexit->Location = System::Drawing::Point(257, 379);
			this->btnexit->Name = L"btnexit";
			this->btnexit->Size = System::Drawing::Size(75, 23);
			this->btnexit->TabIndex = 46;
			this->btnexit->Text = L"Exit";
			this->btnexit->UseCompatibleTextRendering = true;
			this->btnexit->UseVisualStyleBackColor = false;
			this->btnexit->Click += gcnew System::EventHandler(this, &CreateNewRecord::btnexit_Click);
			// 
			// cbitemname
			// 
			this->cbitemname->FormattingEnabled = true;
			this->cbitemname->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"Enter below if not present", L"Groceries", L"Vegetables",
					L"Clothing", L"Fuel", L"Travel", L"Leisure", L"Furniture"
			});
			this->cbitemname->Location = System::Drawing::Point(111, 258);
			this->cbitemname->Name = L"cbitemname";
			this->cbitemname->Size = System::Drawing::Size(221, 21);
			this->cbitemname->TabIndex = 47;
			// 
			// tbamount
			// 
			this->tbamount->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbamount->Location = System::Drawing::Point(111, 323);
			this->tbamount->Name = L"tbamount";
			this->tbamount->Size = System::Drawing::Size(118, 26);
			this->tbamount->TabIndex = 49;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(32, 420);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(118, 19);
			this->label5->TabIndex = 50;
			this->label5->Text = L"Expense List :->";
			// 
			// dataGridView2
			// 
			this->dataGridView2->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(36, 452);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(367, 244);
			this->dataGridView2->TabIndex = 51;
			// 
			// tbid
			// 
			this->tbid->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbid->ForeColor = System::Drawing::SystemColors::ControlText;
			this->tbid->Location = System::Drawing::Point(161, 178);
			this->tbid->Name = L"tbid";
			this->tbid->Size = System::Drawing::Size(171, 26);
			this->tbid->TabIndex = 53;
			// 
			// tbitem
			// 
			this->tbitem->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbitem->Location = System::Drawing::Point(111, 286);
			this->tbitem->Name = L"tbitem";
			this->tbitem->Size = System::Drawing::Size(221, 26);
			this->tbitem->TabIndex = 54;
			// 
			// btnadditem
			// 
			this->btnadditem->BackColor = System::Drawing::Color::Snow;
			this->btnadditem->Location = System::Drawing::Point(346, 275);
			this->btnadditem->Name = L"btnadditem";
			this->btnadditem->Size = System::Drawing::Size(75, 23);
			this->btnadditem->TabIndex = 55;
			this->btnadditem->Text = L"Add";
			this->btnadditem->UseCompatibleTextRendering = true;
			this->btnadditem->UseVisualStyleBackColor = false;
			this->btnadditem->Click += gcnew System::EventHandler(this, &CreateNewRecord::btnadditem_Click);
			// 
			// lbname
			// 
			this->lbname->AutoSize = true;
			this->lbname->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbname->Location = System::Drawing::Point(7, 185);
			this->lbname->Name = L"lbname";
			this->lbname->Size = System::Drawing::Size(148, 19);
			this->lbname->TabIndex = 56;
			this->lbname->Text = L"Enter Displayed ID :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(60, 231);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(51, 19);
			this->label2->TabIndex = 58;
			this->label2->Text = L"Date :";
			// 
			// dtp1
			// 
			this->dtp1->CustomFormat = L"";
			this->dtp1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dtp1->Location = System::Drawing::Point(111, 229);
			this->dtp1->Name = L"dtp1";
			this->dtp1->Size = System::Drawing::Size(200, 20);
			this->dtp1->TabIndex = 59;
			this->dtp1->Value = System::DateTime(2022, 10, 28, 12, 17, 40, 0);
			// 
			// CreateNewRecord
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->ClientSize = System::Drawing::Size(445, 719);
			this->Controls->Add(this->dtp1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->lbname);
			this->Controls->Add(this->btnadditem);
			this->Controls->Add(this->tbitem);
			this->Controls->Add(this->tbid);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->tbamount);
			this->Controls->Add(this->cbitemname);
			this->Controls->Add(this->btnexit);
			this->Controls->Add(this->btninsert);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->btnsave);
			this->Controls->Add(this->tbname);
			this->Controls->Add(this->label1);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"CreateNewRecord";
			this->Text = L"Create New Record";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void UsersRecord()
	{
		try
		{
			sqlcon->ConnectionString = "datasource = localhost; port = 3306; username = root; password = Manthan7399Mangesh55&@; database = expensetracker";
			sqlcon->Open();
			sqlcmd->Connection = sqlcon;
			sqlcmd->CommandText = "SELECT * FROM users_record";
			sqlread = sqlcmd->ExecuteReader();
			sqldata->Load(sqlread);
			sqlread->Close();
			sqlcon->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message, "Create New Record", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
		}
	}
	private: System::Void RefreshUsersRecord()
	{
		try
		{
			sqlcon->ConnectionString = "datasource = localhost; port = 3306; username = root; password = Manthan7399Mangesh55&@; database = expensetracker";
			sqlcmd->Connection = sqlcon;
			MySqlDataAdapter^ sqladpt = gcnew MySqlDataAdapter("SELECT * FROM users_record;", sqlcon);
			DataTable^ sqldata = gcnew DataTable();
			sqladpt->Fill(sqldata);
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message, "Create New Record", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
		}
	}
	private: System::Void btnsave_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		String^ name = this->tbname->Text;
		sqlcon->ConnectionString = "datasource = localhost; port = 3306; username = root; password = Manthan7399Mangesh55&@; database = expensetracker";
		sqlcon->Open();
		sqlcmd->Connection = sqlcon;
		try
		{
			sqlcmd->CommandText = "INSERT INTO users_record(NAME) VALUES('" + tbname->Text + "');";
			sqlcmd->ExecuteNonQuery();
			sqlcon->Close();
			UsersRecord();
			RefreshUsersRecord();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message, "Create New Record", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
		}
		MessageBox::Show("User Profile Saved");
		String^ constr = L"datasource = localhost; port = 3306; username = root; password = Manthan7399Mangesh55&@; database = expensetracker";
		MySqlConnection^ sqlCon = gcnew MySqlConnection(constr);
		MySqlCommand^ sqlCmd = gcnew MySqlCommand("SELECT USER_ID FROM users_record ORDER BY USER_ID DESC LIMIT 1;", sqlCon);
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
			MessageBox::Show(ex->Message, "Create New Record", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
		}
	}
	private: System::Void btnadditem_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		cbitemname->Items->Add(tbitem->Text);
		try
		{
			tbitem->Text = "";
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message, "Create New Record", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
		}
	}
	private: System::Void btninsert_Click(System::Object^ sender, System::EventArgs^ e)
	{
		try
		{
			sqlcon->ConnectionString = "datasource = localhost; port = 3306; username = root; password = Manthan7399Mangesh55&@; database = expensetracker";
			sqlcon->Open();
			sqlcmd->Connection = sqlcon;
			String^ sqlquery = "INSERT INTO expense_list VALUES(@DATE,@PARTICULAR,@AMOUNT_SPENT,@USER_ID);";
			MySqlCommand^ sqlCmd = gcnew MySqlCommand(sqlquery, sqlcon);
			sqlCmd->Parameters->AddWithValue("@DATE", dtp1->Value);
			sqlCmd->Parameters->AddWithValue("@PARTICULAR", cbitemname->Text);
			sqlCmd->Parameters->AddWithValue("@AMOUNT_SPENT", tbamount->Text);
			sqlCmd->Parameters->AddWithValue("@USER_ID", tbid->Text);
			sqlCmd->ExecuteNonQuery();
			sqlcon->Close();
			MessageBox::Show("Item Inserted Sucessfully!");
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message, "Create New Record", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
		}
		String^ constr = L"datasource = localhost; port = 3306; username = root; password = Manthan7399Mangesh55&@; database = expensetracker";
		MySqlConnection^ sqlCon = gcnew MySqlConnection(constr);
		MySqlCommand^ sqlCmd1 = gcnew MySqlCommand("SELECT DATE,PARTICULAR,AMOUNT_SPENT FROM expense_list WHERE USER_ID = " + tbid->Text + ";", sqlCon);
		try
		{
			MySqlDataAdapter^ sqlAdpt = gcnew MySqlDataAdapter();
			sqlAdpt->SelectCommand = sqlCmd1;
			DataTable^ expenselist = gcnew DataTable();
			sqlAdpt->Fill(expenselist);
			BindingSource^ bsource = gcnew BindingSource();
			bsource->DataSource = expenselist;
			dataGridView2->DataSource = bsource;
			sqladpt->Update(expenselist);
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message, "Create New Record", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
		}
		try
		{
			cbitemname->Text = "";
			tbitem->Text = "";
			tbamount->Text = "";
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message, "Create New Record", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
		}
	}
	private: System::Void btnexit_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		System::Windows::Forms::DialogResult iexit;
		try
		{
			iexit = MessageBox::Show("Confirm if you want to exit ?", "Create New Record", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
			if (iexit == System::Windows::Forms::DialogResult::Yes)
			{
				Application::Exit();
			}
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message, "Create New Record", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
		}
	}
};
}
