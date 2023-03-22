#include "ExpenseTrackerMenu.h"
using namespace System;
using namespace System::Windows::Forms;
void main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ExpenseTrackerGUI1::ExpenseTrackerMenu form;
	Application::Run(% form);
}