#include "MyForm.h"


using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main() {
	
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	AstrologyForm::MyForm form;
	Application::Run(% form);
}

// ������� ������

System::Void AstrologyForm::MyForm::result_Click(System::Object^ sender, System::EventArgs^ e)
{ 
	try
	{

	int degrees = Convert::ToInt32(text1->Text);
	int min = Convert::ToInt32(text2->Text);
	int degrees2 = Convert::ToInt32(text3->Text);
	int min2 = Convert::ToInt32(text4->Text);
	int degrees3 = Convert::ToInt32(text5->Text);
	int min3 = Convert::ToInt32(text6->Text);

	int resultmin, resultmin2, resultdegrees = 0, resultdegrees2;


	resultmin = min + min2;					// ������� ������ ����� ��������� ��������

	if (resultmin >= 60)
	{
		resultmin = min + min2 - 60;
		degrees += 1;
	}

	resultdegrees = degrees + degrees2;

	resultmin2 = resultmin - min3;		    // ������� ������ ����� ��������� ���������

	if (resultmin2 > 59)					
	{
		resultmin2 -= 60;
		resultdegrees += 1;
	}

	if (resultmin2 < 0)
	{
		resultmin2 += 60;
		resultdegrees -= 1;
	}

	if (resultdegrees < degrees3)
	{
		resultdegrees += 360;
	}

	resultdegrees2 = resultdegrees - degrees3;

	if (resultdegrees2 > 359)
	{
		resultdegrees2 -= 360;
	}
	
	text7->Text = System::Convert::ToString(resultdegrees2);
	text8->Text = System::Convert::ToString(resultmin2);

	}
	catch (System::FormatException^ e)
	{
		MessageBox::Show("����� ������� ������ �����, �� ��� ���� ���������", "������", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	return System::Void();
}

System::Void AstrologyForm::MyForm::buttonClear_Click(System::Object^ sender, System::EventArgs^ e)
{
	text1->Clear();
	text2->Clear();
	text3->Clear();
	text4->Clear();
	text5->Clear();
	text6->Clear();
	text7->Clear();
	text8->Clear();

	return System::Void();
}

System::Void AstrologyForm::MyForm::text1_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void AstrologyForm::MyForm::text2_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void AstrologyForm::MyForm::text3_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void AstrologyForm::MyForm::text4_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void AstrologyForm::MyForm::text5_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void AstrologyForm::MyForm::text6_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void AstrologyForm::MyForm::text7_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void AstrologyForm::MyForm::text8_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}