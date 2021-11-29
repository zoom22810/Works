#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");

	cout << "[+] Выберите месяц\n[1] Январь\n[2] Февраль\n[3] Март\n[4] Апрель\n[5] Май\n[6] Июнь\n[7] Июль\n[8] Август\n[9] Сентябрь\n[10] Октябрь\n[11] Ноябрь\n[12] Декабрь\n\n[+] Введите число: ";
	int i;
	cin >> i;
	switch (i) {
	case 1: {
		cout << "[=] Выбран Январь";
		break; }
	case 2: {
		cout << "[=] Выбран Февраль";
		break; }
	case 3: {
		cout << "[=] Выбран Март";
		break; }
	case 4: {
		cout << "[=] Выбран Апрель";
		break; }
	case 5: {
		cout << "[=] Выбран Май";
		break; }
	case 6: {
		cout << "[=] Выбран Июнь";
		break; }
	case 7: {
		cout << "[=] Выбран Июль";
		break; }
	case 8: {
		cout << "[=] Выбран Август";
		break; }
	case 9: {
		cout << "[=] Выбран Сентябрь";
		break; }
	case 10: {
		cout << "[=] Выбран Октябрь";
		break; }
	case 11: {
		cout << "[=] Выбран Ноябрь";
		break; }
	case 12: {
		cout << "[=] Выбран Декабрь";
		break; }
	default: {
		cout << "[] Введено неверное значение!"; }
	}

	return 0;
}