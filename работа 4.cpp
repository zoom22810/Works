#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");

	cout << "[+] �������� �����\n[1] ������\n[2] �������\n[3] ����\n[4] ������\n[5] ���\n[6] ����\n[7] ����\n[8] ������\n[9] ��������\n[10] �������\n[11] ������\n[12] �������\n\n[+] ������� �����: ";
	int i;
	cin >> i;
	switch (i) {
	case 1: {
		cout << "[=] ������ ������";
		break; }
	case 2: {
		cout << "[=] ������ �������";
		break; }
	case 3: {
		cout << "[=] ������ ����";
		break; }
	case 4: {
		cout << "[=] ������ ������";
		break; }
	case 5: {
		cout << "[=] ������ ���";
		break; }
	case 6: {
		cout << "[=] ������ ����";
		break; }
	case 7: {
		cout << "[=] ������ ����";
		break; }
	case 8: {
		cout << "[=] ������ ������";
		break; }
	case 9: {
		cout << "[=] ������ ��������";
		break; }
	case 10: {
		cout << "[=] ������ �������";
		break; }
	case 11: {
		cout << "[=] ������ ������";
		break; }
	case 12: {
		cout << "[=] ������ �������";
		break; }
	default: {
		cout << "[] ������� �������� ��������!"; }
	}

	return 0;
}