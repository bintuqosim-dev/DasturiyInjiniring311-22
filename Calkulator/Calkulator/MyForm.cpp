#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	//WinformCDemo is your project name
	Application::SetCompatibleTextRenderingDefault(false);
	Calkulator::MyForm form;
	Application::Run(% form);
}