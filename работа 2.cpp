#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");

	cout << "[-] Программа \"Времена года\"\n\n[1] Лето\n[2] Осень\n[3] Зима\n[4] Весна\n\nВведите значение: ";
	int i;
	cin >> i;
	if (i == 1) {
		cout << "[-] Вы выбрали лето";
	}
	else if (i == 2) {
		cout << "[-] Вы выбрали осень";
	}
	else if (i == 3) {
		cout << "[-] Вы выбрали зиму";
	}
	else if (i == 4) {
		cout << "[-] Вы выбрали весну";
	}
	else {
		cout << "[-] Вы ввели неверное значение!";
	}

	return 0;
}