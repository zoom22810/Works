#include <iostream>
#include <windows.h>
using namespace std;

int main() {
	setlocale(0, "");

	cout << "������!!!\n\n";

	cout << "[1] ������\n";
	cout << "[2] �����\n";
	cout << "[-] ��� �����: ";
	int num;
	cin >> num;
	int i = 0;
	bool c = true;
	while (c = true) {
		if (num == 1) {
			system("cls");
			cout << "����� ���������� � �������!\n\n";
			cout << "�������� �������: \n";

			cout << "[1] �������\n";
			cout << "[2] �������������\n";
			cout << "[3] �����������\n";
			cout << "[4] ����\n";
			cout << "[5] �������\n";
			cout << "[6] �������\n";
			cout << "[7] �����\n";
			cout << "[-] ��� �����: ";
			int menu;
			cin >> menu;
			switch (menu) {
			case 1:
			{
				system("cls");
				cout << "����� ���������� � �������!\n\n";
				cout << "[-] �������� ����� ������ ��������� ���������: \n";

				cout << "[1] �����������\n";
				cout << "[2] �����\n";

				cout << "[-] ��� �����: ";
				int cvadrat;
				cin >> cvadrat;
				switch (cvadrat) {
				case 1: {
					system("cls");
					cout << "[-] �������� ��������: ";
					char texture;
					cin >> texture;

					cout << "[-] �������� ������: ";
					int size;
					cin >> size;

					for (int x = 0; x < size; x++) {
						for (int y = 0; y < size; y++) {
							cout << texture << " ";
						}
						cout << "\n";
					}
					break;
				}
				case 2: {
					system("cls");
					cout << "[-] �������� ��������: ";
					char texture;
					cin >> texture;

					cout << "[-] �������� ������: ";
					int size;
					cin >> size;

					for (int x = 0; x < size; x++) {
						for (int y = 0; y < size; y++) {
							if (y == 0 || y == size - 1 || x == 0 || x == size - 1) {
								cout << texture << " ";
							}
							else {
								cout << "  ";
							}
						}
						cout << "\n";
					}
					break;
				}
				}
				break;
			}
			case 2:
			{
				system("cls");
				cout << "����� ���������� � �������������!\n\n";
				cout << "[-] �������� ����� ������ ��������� ���������������: \n";

				cout << "[1] �����������\n";
				cout << "[2] �����\n";

				cout << "[-] ��� �����: ";
				int priamoygolnic;
				cin >> priamoygolnic;
				switch (priamoygolnic) {
				case 1: {
					system("cls");
					cout << "[-] �������� ��������: ";
					char texture;
					cin >> texture;

					cout << "[-] �������� ������: ";
					int height;
					cin >> height;

					cout << "[-] �������� �����: ";
					int length;
					cin >> length;

					for (int x = 0; x < height; x++) {
						for (int y = 0; y < length; y++) {
							cout << texture << " ";
						}
						cout << "\n";
					}
					break;
				}
				case 2: {
					system("cls");
					cout << "[-] �������� ��������: ";
					char texture;
					cin >> texture;

					cout << "[-] �������� ������: ";
					int height;
					cin >> height;

					cout << "[-] �������� �����: ";
					int length;
					cin >> length;

					for (int x = 0; x < height; x++) {
						for (int y = 0; y < length; y++) {
							if (y == 0 || y == length - 1 || x == 0 || x == height - 1) {
								cout << texture << " ";
							}
							else {
								cout << "  ";
							}
						}
						cout << "\n";
					}
					break;
				}
				}
				break;
			}
			case 3:
			{
				system("cls");
				cout << "����� ���������� � �����������!\n\n";
				cout << "[-] �������� ����� ������ ��������� �������������: \n";

				cout << "[1] �����������\n";
				cout << "[2] �����\n";

				cout << "[-] ��� �����: ";
				int treug;
				cin >> treug;
				switch (treug) {
				case 1: {
					system("cls");
					cout << "[-] �������� ��������: ";
					char texture;
					cin >> texture;

					cout << "[-] ���������� ������ ������ ���� ��������!\n";
					cout << "[-] �������� ������: ";
					int size;
					cin >> size;

					for (int y = 0; y < size; y++) {
						for (int x = 0; x < size; x++) {
							if (x >= size / 2 - y && x <= size / 2 + y && y <= size / 2) {
								cout << texture << " ";
							}
							else {
								cout << "  ";
							}
						}
						cout << "\n";
					}
					break;
				}
				case 2: {
					system("cls");
					cout << "[-] �������� ��������: ";
					char texture;
					cin >> texture;

					cout << "[-] ���������� ������ ������ ���� ��������!\n";
					cout << "[-] �������� ������: ";
					int size;
					cin >> size;

					for (int y = 0; y < size; y++) {
						for (int x = 0; x < size; x++) {
							if (x == size / 2 + y || x == size / 2 - y || y == size / 2) {
								cout << texture << " ";
							}
							else {
								cout << "  ";
							}
						}
						cout << "\n";
					}
					break;
				}
				}
				break;
			}
			case 4:
			{
				system("cls");
				cout << "����� ���������� � ����!";

				system("cls");
				cout << "[-] �������� ��������: ";
				char texture;
				cin >> texture;

				cout << "[-] ���������� ������ ������ ���� ��������!\n";
				cout << "[-] �������� ������: ";
				int size;
				cin >> size;

				for (int x = 0; x < size; x++) {
					for (int y = 0; y < size; y++) {
						if (y == size / 2 || x == size / 2) {
							cout << texture << " ";
						}
						else {
							cout << "  ";
						}
					}
					cout << "\n";
				}


				break;
			}
			case 5:
			{
				system("cls");
				cout << "����� ���������� � �������!";

				system("cls");
				cout << "[-] �������� ��������: ";
				char texture;
				cin >> texture;

				cout << "[-] �������� ������: ";
				int size;
				cin >> size;

				for (int x = 0; x < size; x++) {
					for (int y = 0; y < size; y++) {
						if (y == x || size - y == x + 1) {
							cout << texture << " ";
						}
						else {
							cout << "  ";
						}
					}
					cout << "\n";
				}
				break;
			}
			case 6:
			{
				system("cls");
				cout << "����� ���������� � �������!";

				system("cls");
				cout << "[-] �������� ��������: ";
				char texture;
				cin >> texture;

				cout << "[-] ���������� ������ ������ ���� ��������!\n";
				cout << "[-] �������� ������: ";
				int size;
				cin >> size;

				for (int x = 0; x < size; x++) {
					for (int y = 0; y < size; y++) {
						if (x % 2 == 0 || y % 2 == 0) {
							cout << texture << " ";
						}
						else {
							cout << "  ";
						}
					}
					cout << "\n";
				}


				break;
			}
			case 7:
			{
				system("cls");
				cout << "����� ���������� � �����!\n\n";
				cout << "[-] �������� ����� ������ ��������� �����: \n";

				cout << "[1] �����������\n";
				cout << "[2] �������������\n";

				cout << "[-] ��� �����: ";
				int line;
				cin >> line;
				switch (line) {
				case 1: {
					system("cls");
					cout << "[-] �������� ��������: ";
					char texture;
					cin >> texture;

					cout << "[-] �������� ������: ";
					int size;
					cin >> size;

					for (int x = 0; x < size; x++) {
						cout << texture << " ";
						cout << "\n";
					}
					break;
				}
				case 2: {
					system("cls");
					cout << "[-] �������� ��������: ";
					char texture;
					cin >> texture;

					cout << "[-] �������� ������: ";
					int size;
					cin >> size;

					for (int x = 0; x < size; x++) {
						cout << texture << " ";
					}
					break;
				}
				}
				break;
			}
			}
		}
		else {
			system("cls");
			return 0;
		}
		Sleep(1200);
	}


	int _;
	cin >> _;
	return 0;
}