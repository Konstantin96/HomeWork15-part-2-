/*7.	��������� ������� Dist �� ������� Proc59, ������� ��������� Altitudes(xA, yA, xB, yB, xC, yC, hA, hB, hC), ��������� ������ hA, hB, hC ������������ ABC (�������� ���������),
����������� �������������� �� ������ A, B, C (�� ���������� �������� �������� �����������). � ������� ���� ��������� ����� ������ ������������� ABC, ABD, ACD, ���� ���� ���������� ����� A, B, C, D.
8.	���������� ������� double f(double x, double y), ������� ��������� � ���������� ����� ���������� �������������� ������������, ��� ������ ������� x � y �������� ��������
9.	�������� ������� double f(double x1, double y1, double x2, double y2), ������� ��������� ���������� ����� ����� ������� (xl, yl) � (x2, y2)
10.	�������� ������� int f(int m2, int m1, int m0), ������� ��������� � ���������� ����������� �����, ������ (�����), ������ (�������) � ������ (�������) ����� �������� ����� �������������� m2, m1, m0
*/

#include <windows.h>
#include <iostream>
#include <locale.h>

using namespace std;


/*Zadaniya v faile tam odinakovye */
double f(double x, double y);
double f1(double x1, double y1, double x2, double y2);
int f02(int x2, int x1, int x0);
double tre(double a, double b, double c);

int main()
{
	setlocale(LC_ALL, "ru");

	int nz;
	cout << "������� ����� ������� ��� 0 ��� �� �����: ";
	cin >> nz;

	if (nz == 0)
		system("cls");

	else if (nz == 7)
	{
		/* Ispol'zuya funkciyu Dist iz zadaniya Proc59, opisat' proceduru Altitudes(xA, yA, xB, yB, xC, yC, hA, hB, hC), nahodyashchuyu vysoty hA, hB, hC treugol'nika ABC (vyhodnye parametry),
provedennye sootvetstvenno iz vershin A, B, C (ih koordinaty yavlyayutsya vhodnymi parametrami). S pomoshch'yu ehtoj procedury najti vysoty treugol'nikov ABC, ABD, ACD,
esli dany koordinaty tochek A, B, C, D.*/
		system("cls");
		double a1, b1, c1;
		cout << "������� ������� a - ";
		cin >> a1;
		cout << "������� ������� b - "; 
		cin >> b1;
		cout << "������� ������� c - ";
		cin >> c1;
		double S1 = tre(a1, b1, c1);
		cout << "S = " << S1 << endl;
		double ha, hb, hc;
		ha = 2 * S1 / a1;
		hb = 2 * S1 / b1;
		hc = 2 * S1 / c1;
		cout << "������ � - " << ha << endl;
		cout << "������ b - " << hb << endl;
		cout << "������ c - " << hc << endl;
		system("pause");
	}

	else if (nz == 8)
	{
		/*Opredelite funkciyu double f(double x, double y), kotoraya vychislyaet i vozvrashchaet dlinu gipotenuzy pryamougol'nogo treugol'nika, dve drugie storony x i y kotorogo izvestny*/
		system("cls");
		double x, y;
		cout << "������� x, y: ";
		cin >> x >> y;
		f(x, y);
		return 0;
	}

	else if (nz == 9)
	{
		/*Napishite funkciyu double f(double x1, double y1, double x2, double y2), kotoraya vychislyaet rasstoyanie mezhdu dvumya tochkami (xl, yl) i (x2, y2)*/
		system("cls");
		int x1, x2, y1, y2;
		x1 = 44;
		y1 = 61;
		cout << "������� ��������� �� ������ �����: ";
		cin >> x2;
		cout << "������� ��������� �� ������ �����: ";
		cin >> y2;
		f1(x1, x2, y1, y2);
		return 0;

	}
	else if (nz == 10)
	{
		/*Napishite funkciyu int f(int m2, int m1, int m0), kotoraya vychislyaet i vozvrashchaet natural'noe chislo, pervaya (sotni),
		vtoraya (desyatki) i tret'ya (edinicy) cifry kotorogo ravny sootvetstvenno m2, m1, m0*/
		system("cls");
		cout << "��������� ����������� �����" << endl;
		int m2 = 100+rand() % 899;
		int m1 = 10+rand() % 99;
		int m0 = 1+rand() % 9;
		int m = f02(m2, m1, m0);
		cout << " x2=" << m2 << ", x1=" << m1 << ", x0=" << m0 << ", f02(x2,x1,x0)=" << m << "." << endl << endl;

	}

}

//Function vychisleniya dliny gipotenuzy
double f(double x, double y)
{
	cout << "�������= " << x*y / 2 << "\n";
	cout << "����������= " << sqrt(x * x + y * y) << "\n";
	return 0;
}

//Fuction kotoraya izmeryaet rasstoyanie mezhdu dvumya tochkami
double f1(double x1, double y1, double x2, double y2)
{
	cout << "���������� ����� �1 � Y1 = " << x1 + y1 << " km" << endl;
	cout << "���������� ����� �2 � Y2 = " << x2 + y2 << " km" << endl;
	return 0;
}

// ���������� ����������� ����� �� ��� ����
int f02(int x2, int x1, int x0)
{
	return x2*100+x1*10+x0;
}

double tre(double a, double b, double c)
{
	double p = (a + b + c) / 2.0;
	double S = sqrt(p*(p - a)*(p - b)*(p - c));
	return S;
}