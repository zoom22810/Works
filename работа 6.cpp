#include "iostream";
using namespace std;

short size1, size2;
char symbol;

int main()
{
	system("color F5");
	setlocale(0, "");
	cout << "���������-�����������\n\n";
	cout << "�������� ������ ������������: ";
	cin >> size1;
	cout << "�������� ������ ������������: ";
	cin >> size2;
	cout << "�������� �������� ������������: ";
	cin >> symbol;

	cout << "\n����� ������������ ������������: \n\n";

	for (int i = 0; i < size1; i++)
	{
		for (int j = 0; j < size2; j++)
		{
			if (j <= size2 / 2 + i && j >= size2 / 2 - i)
			{
				cout << symbol << " ";
			}
			else
			{
				cout << "  ";
			}
		}
		cout << "\n";
	}

	cout << "\n\n";

	cout << "\n����� ������� ��������������: \n\n";

	for (int i = 0; i < size1; i++)
	{
		for (int j = 0; j < size2; j++)
		{
			if (j == size2 / 2 + i || j == size2 / 2 - i || i == size1 - 1)
			{
				cout << symbol << " ";
			}
			else
			{
				cout << "  ";
			}
		}
		cout << "\n";
	}

	system("pause");
}