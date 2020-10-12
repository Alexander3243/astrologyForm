#include<iostream>
#include<math.h>

using namespace std;

int formula(int min, int min2, int min3, int degrees, int degrees2, int degrees3) {

	int resultmin, resultmin2, resultdegrees = 0, resultdegrees2;

	resultmin = min + min2;														// Считаем первую часть уравнения сложение

	if (resultmin >= 60)
	{
		resultmin -= 60;
		degrees += 1;
	}

	resultdegrees = degrees + degrees2;

	//-------------------------------------------------------------------------------------------
	if (resultmin < min3)														// Считаем вторую часть уравнения вычитание
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

	cout << "Градусы: " << endl;
	cin >> degrees;

	cout << "Минуты: " << endl;
	cin >> min;

	cout << "Градусы2: " << endl;
	cin >> degrees2;

	cout << "Минуты2: " << endl;
	cin >> min2;

	cout << "Градусы3: " << endl;
	cin >> degrees3;

	cout << "Минуты3: " << endl;
	cin >> min3;
	//-------------------------------------------------------------------------------------------
	resultmin = min + min2;                       // Считаем первую часть уравнения сложение

	if (resultmin >= 60)
	{
		resultmin -= 60;
		degrees += 1;
	}

	resultdegrees = degrees + degrees2;

	cout << "Результат первой части: " << resultdegrees << " Минуты: " << resultmin << endl;
	//-------------------------------------------------------------------------------------------
	if (resultmin < min3)						 // Считаем вторую часть уравнения вычитание
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

	cout << "Результат второй части: " << resultdegrees2 << " Минуты: " << resultmin2 << endl;

} */

