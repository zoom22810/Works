#include "iostream";
using namespace std;

short size1;
char symbol1, symbol2;

int main()
{
	system("color F5");
	setlocale(0, "");
	cout << "Программа-треугольник\n\n";
	cout << "Выберите размер шахматной доски: ";
	cin >> size1;
	cout << "Выберите первую текстуру: ";
	cin >> symbol1;
	cout << "Выберите вторую текстуру: ";
	cin >> symbol2;

	cout << "\nВывод шахматной доски: \n\n";

	for (int i = 1; i < size1; i++)
	{
		for (int j = 1; j < size1; j++)
		{
			if (((i + j) % 2) == 0)
			{
				cout << symbol1 << " ";
			}
			else if (((i + j) % 2) != 0)
			{
				cout << symbol2 << " ";
			}
		}
		cout << "\n";
	}


	system("pause");
}