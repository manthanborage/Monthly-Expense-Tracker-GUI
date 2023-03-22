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
	/// Summary for AddItemRecord
	/// </summary>
	public ref class AddItemRecord : public System::Windows::Forms::Form
	{
		MySqlConnection^ sqlcon = gcnew MySqlConnection();
		MySqlCommand^ sqlcmd = gcnew MySqlCommand();
		DataTable^ sqldata = gcnew DataTable();
		MySqlDataAdapter^ sqladpt = gcnew MySqlDataAdapter();
	private: System::Windows::Forms::Button^ btnadditem;
	private: System::Windows::Forms::DataGridView^ dataGridView2;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::DateTimePicker^ dtp1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;





		   MySqlDataReader^ sqlread;
	public:
		AddItemRecord(void)
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
		~AddItemRecord()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbname;
	private: System::Windows::Forms::TextBox^ tbid;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tbitemname;

	private: System::Windows::Forms::ComboBox^ cbitemname;
	private: System::Windows::Forms::Button^ btnupdate;
	private: System::Windows::Forms::Button^ btnexit;
	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::Label^ label2;




	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ tbamount;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AddItemRecord::typeid));
			this->lbname = (gcnew System::Windows::Forms::Label());
			this->tbid = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbitemname = (gcnew System::Windows::Forms::TextBox());
			this->cbitemname = (gcnew System::Windows::Forms::ComboBox());
			this->btnupdate = (gcnew System::Windows::Forms::Button());
			this->btnexit = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tbamount = (gcnew System::Windows::Forms::TextBox());
			this->btnadditem = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->dtp1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// lbname
			// 
			this->lbname->AutoSize = true;
			this->lbname->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbname->Location = System::Drawing::Point(12, 20);
			this->lbname->Name = L"lbname";
			this->lbname->Size = System::Drawing::Size(36, 19);
			this->lbname->TabIndex = 2;
			this->lbname->Text = L"ID :";
			// 
			// tbid
			// 
			this->tbid->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbid->Location = System::Drawing::Point(49, 17);
			this->tbid->Name = L"tbid";
			this->tbid->Size = System::Drawing::Size(316, 26);
			this->tbid->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(8, 112);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(93, 19);
			this->label3->TabIndex = 34;
			this->label3->Text = L"Item Name :";
			// 
			// tbitemname
			// 
			this->tbitemname->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbitemname->Location = System::Drawing::Point(101, 126);
			this->tbitemname->Name = L"tbitemname";
			this->tbitemname->Size = System::Drawing::Size(320, 26);
			this->tbitemname->TabIndex = 37;
			// 
			// cbitemname
			// 
			this->cbitemname->FormattingEnabled = true;
			this->cbitemname->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"Enter below if not present", L"Groceries", L"Vegetables",
					L"Clothing", L"Fuel", L"Travel", L"Leisure", L"Furniture"
			});
			this->cbitemname->Location = System::Drawing::Point(101, 99);
			this->cbitemname->Name = L"cbitemname";
			this->cbitemname->Size = System::Drawing::Size(221, 21);
			this->cbitemname->TabIndex = 48;
			// 
			// btnupdate
			// 
			this->btnupdate->BackColor = System::Drawing::Color::Snow;
			this->btnupdate->Location = System::Drawing::Point(101, 216);
			this->btnupdate->Name = L"btnupdate";
			this->btnupdate->Size = System::Drawing::Size(75, 23);
			this->btnupdate->TabIndex = 49;
			this->btnupdate->Text = L"Update";
			this->btnupdate->UseCompatibleTextRendering = true;
			this->btnupdate->UseVisualStyleBackColor = false;
			this->btnupdate->Click += gcnew System::EventHandler(this, &AddItemRecord::btnupdate_Click);
			// 
			// btnexit
			// 
			this->btnexit->BackColor = System::Drawing::Color::Snow;
			this->btnexit->Location = System::Drawing::Point(344, 216);
			this->btnexit->Name = L"btnexit";
			this->btnexit->Size = System::Drawing::Size(75, 23);
			this->btnexit->TabIndex = 51;
			this->btnexit->Text = L"Exit";
			this->btnexit->UseCompatibleTextRendering = true;
			this->btnexit->UseVisualStyleBackColor = false;
			this->btnexit->Click += gcnew System::EventHandler(this, &AddItemRecord::btnexit_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(23, 251);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(144, 19);
			this->label1->TabIndex = 52;
			this->label1->Text = L"User Credentials :->";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(285, 251);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(118, 19);
			this->label2->TabIndex = 54;
			this->label2->Text = L"Expense List :->";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(31, 169);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(70, 19);
			this->label4->TabIndex = 56;
			this->label4->Text = L"Amount :";
			// 
			// tbamount
			// 
			this->tbamount->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbamount->Location = System::Drawing::Point(101, 166);
			this->tbamount->Name = L"tbamount";
			this->tbamount->Size = System::Drawing::Size(158, 26);
			this->tbamount->TabIndex = 57;
			// 
			// btnadditem
			// 
			this->btnadditem->BackColor = System::Drawing::Color::Snow;
			this->btnadditem->Location = System::Drawing::Point(447, 85);
			this->btnadditem->Name = L"btnadditem";
			this->btnadditem->Size = System::Drawing::Size(75, 23);
			this->btnadditem->TabIndex = 58;
			this->btnadditem->Text = L"Add";
			this->btnadditem->UseCompatibleTextRendering = true;
			this->btnadditem->UseVisualStyleBackColor = false;
			this->btnadditem->Click += gcnew System::EventHandler(this, &AddItemRecord::btnadditem_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->BackgroundColor = System::Drawing::Color::PaleGoldenrod;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(289, 282);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(319, 311);
			this->dataGridView2->TabIndex = 59;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(50, 68);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(51, 19);
			this->label5->TabIndex = 61;
			this->label5->Text = L"Date :";
			// 
			// dtp1
			// 
			this->dtp1->CustomFormat = L"";
			this->dtp1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dtp1->Location = System::Drawing::Point(101, 66);
			this->dtp1->Name = L"dtp1";
			this->dtp1->Size = System::Drawing::Size(200, 20);
			this->dtp1->TabIndex = 62;
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::PaleGoldenrod;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(27, 282);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(240, 64);
			this->dataGridView1->TabIndex = 63;
			// 
			// AddItemRecord
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::PaleGoldenrod;
			this->ClientSize = System::Drawing::Size(624, 624);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->dtp1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->btnadditem);
			this->Controls->Add(this->tbamount);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnexit);
			this->Controls->Add(this->btnupdate);
			this->Controls->Add(this->cbitemname);
			this->Controls->Add(this->tbitemname);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->tbid);
			this->Controls->Add(this->lbname);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"AddItemRecord";
			this->Text = L"Add Item to Existing Record";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnadditem_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		cbitemname->Items->Add(tbitemname->Text);
	}
	private: System::Void btnupdate_Click(System::Object^ sender, System::EventArgs^ e) 
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
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message, "Add Item to Existing Record", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
		}
		String^ constr = L"datasource = localhost; port = 3306; username = root; password = Manthan7399Mangesh55&@; database = expensetracker";
		MySqlConnection^ sqlCon = gcnew MySqlConnection(constr);
		MySqlCommand^ sqlCmd = gcnew MySqlCommand("SELECT * FROM users_record WHERE USER_ID LIKE " + tbid->Text + ";", sqlCon);
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
			MessageBox::Show(ex->Message, "Add Item to Existing Record", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
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
			BindingSource^ bsource1 = gcnew BindingSource();
			bsource1->DataSource = expenselist;
			dataGridView2->DataSource = bsource1;
			sqladpt->Update(expenselist);
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message, "Add Item to Existing Record", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
		}
		try
		{
			cbitemname->Text = "";
			tbitemname->Text = "";
			tbamount->Text = "";
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message, "Add Item to Existing Record", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
		}
		MessageBox::Show("Expense List Updated Sucessfully!");
	}
	private: System::Void btnexit_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		System::Windows::Forms::DialogResult iexit;
		try
		{
			iexit = MessageBox::Show("Confirm if you want to exit !", "Add Item to Existing Record", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
			if (iexit == System::Windows::Forms::DialogResult::Yes)
			{
				Application::Exit();
			}
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message, "Add Item to Existing Record", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
		}
	}
};
}
