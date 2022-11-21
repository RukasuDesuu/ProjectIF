#include "MainForm.h"

using namespace System;
using namespace System::Windows::Forms;
void main(array<String^>^ args) 
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ProjectIF::MainForm mainForm;

	mainForm.ShowDialog();
	User^ user = mainForm.user;

	if (user != nullptr){
		MessageBox::Show("Successfull Authentication of " + user->username, "Program.cpp", MessageBoxButtons::OK);
	}
	else {
		MessageBox::Show("Authentication Canceld", "Program.cpp", MessageBoxButtons::OK);
	}
}