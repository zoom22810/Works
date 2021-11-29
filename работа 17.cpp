#include <iostream>
using namespace std;

double culk(double num1, double num2, char operation) {
	switch (operation) {
	case'+': {
		return num1 + num2;
		break;
	}
	case'-': {
		return num1 - num2;
		break;
	}
	case'*': {
		return num1 * num2;
		break;
	}
	case'/': {
		return num1 / num2;
		break;
	}
	case'%': {
		return (int)num1 % (int)num2;
		break;
	}
	case'^': {
		return pow(num1, num2);
		break;
	}
	case'_': {
		return (num1 + num2) / num2;
		break;
	}
	case'=': {
		return (num1 + num2) * num2;
		break;
	}

	default: {
		return 0;
		break;
	}
	}
}

int main() {
	setlocale(0, "");

	cout << "����� ����������� � �����������!\n\n\n";

	cout << "������� ������ ��c��: ";
	double num1;
	cin >> num1;

	cout << "������� ������ �����: ";
	double num2;
	cin >> num2;

	cout << "[+] - ��������\n";
	cout << "[-] - ���������\n";
	cout << "[*] - ���������\n";
	cout << "[/] - �������\n";
	cout << "[%] - ������� � ��������\n";
	cout << "[^] - ���������� � �������\n";
	cout << "[_] - �������� � ��������\n";
	cout << "[=] - �������� � �����������\n";

	cout << "������� ��������: ";
	char operation;
	cin >> operation;


	cout << culk(num1, num2, operation) << endl;




	int _; cin >> _;
	return 0;
}