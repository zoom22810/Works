#include "iostream";
using namespace std;

int numbers[10] = { 1,2,3,4,5,6,7,8,9,10 };
int sum = 0;

int main()
{
	system("color F5");
	setlocale(0, "");
	cout << "���������-����� �������\n\n";


	cout << "\n������: \n\n";

	for (int i = 0; i < 10; i++)
	{
		cout << numbers[i] << '|';
		sum += numbers[i];
	}

	cout << "\n\n����� ���� ��-��� �������: " << sum << "\n\n";
	system("pause");
}