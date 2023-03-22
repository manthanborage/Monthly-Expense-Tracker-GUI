#pragma once
#include "CreateNewRecord.h"
#include "ViewExistingRecord.h"
#include "AddItemRecord.h"
#include "DeleteItemRecord.h"
#include "ExportItemRecord.h"
#include "ExpenseStatisticalAnalysis.h"

namespace ExpenseTrackerGUI1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ExpenseTrackerMenu
	/// </summary>
	public ref class ExpenseTrackerMenu : public System::Windows::Forms::Form
	{
	public:
		ExpenseTrackerMenu(void)
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
		~ExpenseTrackerMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Button^ btncreate;
	private: System::Windows::Forms::Button^ btnview;
	private: System::Windows::Forms::Button^ btnadd;

	private: System::Windows::Forms::Button^ btnexit;
	private: System::Windows::Forms::Button^ btnexport;
	private: System::Windows::Forms::Button^ btndelete;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ btnstats;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ExpenseTrackerMenu::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btncreate = (gcnew System::Windows::Forms::Button());
			this->btnview = (gcnew System::Windows::Forms::Button());
			this->btnadd = (gcnew System::Windows::Forms::Button());
			this->btnexit = (gcnew System::Windows::Forms::Button());
			this->btnexport = (gcnew System::Windows::Forms::Button());
			this->btndelete = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->btnstats = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(22, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(294, 22);
			this->label1->TabIndex = 2;
			this->label1->Text = L"****Monthly Expense Tracker****";
			// 
			// btncreate
			// 
			this->btncreate->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btncreate->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btncreate->Location = System::Drawing::Point(33, 28);
			this->btncreate->Name = L"btncreate";
			this->btncreate->Size = System::Drawing::Size(193, 25);
			this->btncreate->TabIndex = 3;
			this->btncreate->Text = L"Create New Record";
			this->btncreate->UseCompatibleTextRendering = true;
			this->btncreate->UseVisualStyleBackColor = false;
			this->btncreate->Click += gcnew System::EventHandler(this, &ExpenseTrackerMenu::btncreate_Click);
			// 
			// btnview
			// 
			this->btnview->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnview->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnview->Location = System::Drawing::Point(34, 72);
			this->btnview->Name = L"btnview";
			this->btnview->Size = System::Drawing::Size(193, 25);
			this->btnview->TabIndex = 4;
			this->btnview->Text = L"View Existing Record";
			this->btnview->UseCompatibleTextRendering = true;
			this->btnview->UseVisualStyleBackColor = false;
			this->btnview->Click += gcnew System::EventHandler(this, &ExpenseTrackerMenu::btnview_Click);
			// 
			// btnadd
			// 
			this->btnadd->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnadd->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnadd->Location = System::Drawing::Point(34, 116);
			this->btnadd->Name = L"btnadd";
			this->btnadd->Size = System::Drawing::Size(193, 25);
			this->btnadd->TabIndex = 5;
			this->btnadd->Text = L"Add Item to Record";
			this->btnadd->UseCompatibleTextRendering = true;
			this->btnadd->UseVisualStyleBackColor = false;
			this->btnadd->Click += gcnew System::EventHandler(this, &ExpenseTrackerMenu::btnadd_Click);
			// 
			// btnexit
			// 
			this->btnexit->BackColor = System::Drawing::Color::Snow;
			this->btnexit->Location = System::Drawing::Point(132, 348);
			this->btnexit->Name = L"btnexit";
			this->btnexit->Size = System::Drawing::Size(75, 23);
			this->btnexit->TabIndex = 47;
			this->btnexit->Text = L"Exit";
			this->btnexit->UseCompatibleTextRendering = true;
			this->btnexit->UseVisualStyleBackColor = false;
			this->btnexit->Click += gcnew System::EventHandler(this, &ExpenseTrackerMenu::btnexit_Click);
			// 
			// btnexport
			// 
			this->btnexport->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnexport->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnexport->Location = System::Drawing::Point(34, 200);
			this->btnexport->Name = L"btnexport";
			this->btnexport->Size = System::Drawing::Size(193, 25);
			this->btnexport->TabIndex = 48;
			this->btnexport->Text = L"Export Items from Record";
			this->btnexport->UseCompatibleTextRendering = true;
			this->btnexport->UseVisualStyleBackColor = false;
			this->btnexport->Click += gcnew System::EventHandler(this, &ExpenseTrackerMenu::btnexport_Click);
			// 
			// btndelete
			// 
			this->btndelete->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btndelete->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btndelete->Location = System::Drawing::Point(34, 159);
			this->btndelete->Name = L"btndelete";
			this->btndelete->Size = System::Drawing::Size(193, 25);
			this->btndelete->TabIndex = 49;
			this->btndelete->Text = L"Delete Item from Record";
			this->btndelete->UseCompatibleTextRendering = true;
			this->btndelete->UseVisualStyleBackColor = false;
			this->btndelete->Click += gcnew System::EventHandler(this, &ExpenseTrackerMenu::btndelete_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->btnstats);
			this->groupBox1->Controls->Add(this->btncreate);
			this->groupBox1->Controls->Add(this->btnexport);
			this->groupBox1->Controls->Add(this->btnview);
			this->groupBox1->Controls->Add(this->btnadd);
			this->groupBox1->Controls->Add(this->btndelete);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(41, 43);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(255, 285);
			this->groupBox1->TabIndex = 50;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Please Select your Choice";
			// 
			// btnstats
			// 
			this->btnstats->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnstats->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnstats->Location = System::Drawing::Point(34, 242);
			this->btnstats->Name = L"btnstats";
			this->btnstats->Size = System::Drawing::Size(193, 25);
			this->btnstats->TabIndex = 50;
			this->btnstats->Text = L"Statistical Visualization";
			this->btnstats->UseCompatibleTextRendering = true;
			this->btnstats->UseVisualStyleBackColor = false;
			this->btnstats->Click += gcnew System::EventHandler(this, &ExpenseTrackerMenu::btnstats_Click);
			// 
			// ExpenseTrackerMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Highlight;
			this->ClientSize = System::Drawing::Size(344, 392);
			this->Controls->Add(this->btnexit);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"ExpenseTrackerMenu";
			this->Text = L"Expense Tracker Menu";
			this->Load += gcnew System::EventHandler(this, &ExpenseTrackerMenu::ExpenseTrackerMenu_Load);
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void btncreate_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->Hide();
		CreateNewRecord^ c = gcnew CreateNewRecord();
		c->ShowDialog();
	}
	private: System::Void btnview_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->Hide();
		ViewExistingRecord^ v = gcnew ViewExistingRecord();
		v->ShowDialog();
	}
	private: System::Void btnadd_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->Hide();
		AddItemRecord^ a = gcnew AddItemRecord();
		a->ShowDialog();
	}
	private: System::Void btndelete_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Hide();
		DeleteItemRecord^ d = gcnew DeleteItemRecord();
		d->ShowDialog();
	}
	private: System::Void btnexport_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Hide();
		ExportItemRecord^ ex = gcnew ExportItemRecord();
		ex->ShowDialog();
	}
	private: System::Void btnexit_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		System::Windows::Forms::DialogResult iexit;
		try
		{
			iexit = MessageBox::Show("Confirm if you want to exit ?", "Expense Tracker Menu", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
			if (iexit == System::Windows::Forms::DialogResult::Yes)
			{
				Application::Exit();
			}
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message, "Expense Tracker Menu", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
		}
	}
	private: System::Void btnstats_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Hide();
		ExpenseStatisticalAnalysis^ stat = gcnew ExpenseStatisticalAnalysis();
		stat->ShowDialog();
	}
private: System::Void ExpenseTrackerMenu_Load(System::Object^ sender, System::EventArgs^ e) 
{

}

};
}
