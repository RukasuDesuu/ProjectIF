#include "LoginForm.h"
#include "MainForm.h"

using namespace System;
using namespace System::Windows::Forms;
void main(array<String^>^ args) 
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ProjectIF::LoginForm loginForm;

	loginForm.ShowDialog();
	User^ connectUser = loginForm.connectUser;

	if (connectUser != nullptr){
		MessageBox::Show("Successfull Authentication of " + connectUser->name, "Program.cpp", MessageBoxButtons::OK);
		ProjectIF::MainForm mainForm(connectUser);
		Application::Run(% mainForm);
	}
	else {
		MessageBox::Show("Authentication Canceled", "Program.cpp", MessageBoxButtons::OK);
	}
}