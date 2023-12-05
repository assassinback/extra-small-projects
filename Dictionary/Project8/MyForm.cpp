#include "MyForm.h"
#include <windows.h>
#include <tchar.h>
using namespace System;
using namespace System::Windows::Forms;
[STAThread]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project8::MyForm form;
	Application::Run(%form);
};

