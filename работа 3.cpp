#include <iostream>
#include <math.h>
using namespace std;

int num1, num2;
char operation;

void multiply()
{
	cout << "��������� : " << num1 * num2 << endl;
}

void divide()
{
	cout << "��������� : " << num1 / num2 << endl;
}
void sum()
{
	cout << "��������� : " << num1 + num2 << endl;
}
void subtraction()
{
	cout << "��������� : " << num1 - num2 << endl;
}
void WholePartOfDivide()
{
	cout << "��������� : " << num1 % num2 << endl;
}


int main()
{
	setlocale(0, "");

	cout << "���������-�����������\n\n";
	cout << "����������, ������� ������ �����: ";
	cin >> num1;
	cout << "����������, ������� ������ �����: ";
	cin >> num2;
	cout << "��� �� ������ ������� � ����� �������?\n\n������ ��������� ��������: \n\n";

	cout << "[*]-���������\n";
	cout << "[/]-�������\n";
	cout << "[+]-��������\n";
	cout << "[-]-���������\n";
	cout << "[%]-������� � ��������\n";

	cout << "�������� ��������: ";
	cin >> operation;

	switch (operation)
	{
	case '*':
		multiply();
		break;
	case '/':
		divide();
		break;
	case '+':
		sum();
		break;
	case '-':
		subtraction();
		break;
	case '%':
		WholePartOfDivide();
		break;
	default:
		cout << "����� �������� ���...\n\n";
		system("pause");
	}
	system("pause");
}