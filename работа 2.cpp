#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");

	cout << "[-] ��������� \"������� ����\"\n\n[1] ����\n[2] �����\n[3] ����\n[4] �����\n\n������� ��������: ";
	int i;
	cin >> i;
	if (i == 1) {
		cout << "[-] �� ������� ����";
	}
	else if (i == 2) {
		cout << "[-] �� ������� �����";
	}
	else if (i == 3) {
		cout << "[-] �� ������� ����";
	}
	else if (i == 4) {
		cout << "[-] �� ������� �����";
	}
	else {
		cout << "[-] �� ����� �������� ��������!";
	}

	return 0;
}