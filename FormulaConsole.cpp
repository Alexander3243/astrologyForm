#include<iostream>
#include<math.h>

using namespace std;

int formula(int min, int min2, int min3, int degrees, int degrees2, int degrees3) {

	int resultmin, resultmin2, resultdegrees = 0, resultdegrees2;

	resultmin = min + min2;														// ������� ������ ����� ��������� ��������

	if (resultmin >= 60)
	{
		resultmin -= 60;
		degrees += 1;
	}

	resultdegrees = degrees + degrees2;

	//-------------------------------------------------------------------------------------------
	if (resultmin < min3)														// ������� ������ ����� ��������� ���������
	{
		resultmin += 60;
		resultdegrees -= 1;
	}

	resultmin2 = resultmin - min3;

	if (resultdegrees < degrees3)
	{
		resultdegrees += 360;
	}

	resultdegrees2 = resultdegrees - degrees3;

	return resultdegrees2;
}














/*int main()
{
	setlocale(LC_ALL, "ru");

	int min, min2, min3, degrees, degrees3, degrees2, resultmin, resultmin2, resultdegrees = 0, resultdegrees2;

	cout << "�������: " << endl;
	cin >> degrees;

	cout << "������: " << endl;
	cin >> min;

	cout << "�������2: " << endl;
	cin >> degrees2;

	cout << "������2: " << endl;
	cin >> min2;

	cout << "�������3: " << endl;
	cin >> degrees3;

	cout << "������3: " << endl;
	cin >> min3;
	//-------------------------------------------------------------------------------------------
	resultmin = min + min2;                       // ������� ������ ����� ��������� ��������

	if (resultmin >= 60)
	{
		resultmin -= 60;
		degrees += 1;
	}

	resultdegrees = degrees + degrees2;

	cout << "��������� ������ �����: " << resultdegrees << " ������: " << resultmin << endl;
	//-------------------------------------------------------------------------------------------
	if (resultmin < min3)						 // ������� ������ ����� ��������� ���������
	{
		resultmin += 60;
		resultdegrees -= 1;
	}

	resultmin2 = resultmin - min3;

	if (resultdegrees < degrees3)
	{
		resultdegrees += 360;
	}

	resultdegrees2 = resultdegrees - degrees3;

	cout << "��������� ������ �����: " << resultdegrees2 << " ������: " << resultmin2 << endl;

} */

