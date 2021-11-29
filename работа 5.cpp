#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");

	cout << "[+] Выберите перевод\n\n[1] С русского на английский\n[2] С английского на русский\n\n[3] Выход\n[+] Введите значение: ";
	int i, y;
	cin >> i;
	switch (i) {
	case 1: {
		cout << "\n[1] Кот\n[2] Пицца\n[3] Апельсин\n[4] Телефон\n[5] Дерево\n[6] Улица\n[7] Машина\n[8] Мяч\n[9] Сфера\n[10] Танк\n[11] Окно\n[12] Экран\n[13] Вишня\n[14] Велосипед\n[15] Пять\n[+] Выберите слово: ";
		cin >> y;
		switch (y) {
		case 1: {
			cout << "На английском: Dog";
			break;
		}
		case 2: {
			cout << "На английском: Lasagna";
			break;
		}
		case 3: {
			cout << "На английском: Apple";
			break;
		}
		case 4: {
			cout << "На английском: Computer";
			break;
		}
		case 5: {
			cout << "На английском: Grass";
			break;
		}
		case 6: {
			cout << "На английском: Road";
			break;
		}
		case 7: {
			cout << "На английском: Car";
			break;
		}
		case 8: {
			cout << "На английском: Crip";
			break;								
		}
		case 9: {
			cout << "На английском: Dad";
			break;
		}
		case 10: {
			cout << "На английском: Tank";
			break;
		}
		case 11: {
			cout << "На английском: Window";
			break;
		}
		case 12: {
			cout << "На английском: Screen";
			break;
		}
		case 13: {
			cout << "На английском: Cherry";
			break;
		}
		case 14: {
			cout << "На английском: Bicycle";
			break;
		}
		case 15: {
			cout << "На английском: Two";
			break;
		}
		default: {
			cout << "вы ввели неверное значение. завершение работы.";
			return 0;
		}
		}
		break;
	}
	case 2: {
		cout << "\n[1] Dog\n[2] Lasagna\n[3] Apple\n[4] Computer\n[5] Grass\n[6] Road\n[7] Car\n[8] Сrip\n[9] Dad\n[10] Tank\n[11] Window\n[12] Screen\n[13] Cherry\n[14] Bicycle\n[15] Two\n[+] Выберите слово: ";
		cin >> y;
		switch (y) {
		case 1: {
			cout << "На русском: Собака";
			break;
		}
		case 2: {
			cout << "На русском: Лазанья";
			break;
		}
		case 3: {
			cout << "На русском: Яблоко";
			break;
		}
		case 4: {
			cout << "На русском: Компьютер";
			break;
		}
		case 5: {
			cout << "На русском: Трава";
			break;
		}
		case 6: {
			cout << "На русском: Дорога";
			break;
		}
		case 7: {
			cout << "На русском: Машина";
			break;
		}
		case 8: {
			cout << "На русском: Крип";
			break;
		}
		case 9: {
			cout << "На русском: Батя";
			break;
		}
		case 10: {
			cout << "На русском: Танк";
			break;
		}
		case 11: {
			cout << "На русском: Окно";
			break;
		}
		case 12: {
			cout << "На русском: Экран";
			break;
		}
		case 13: {
			cout << "На русском: Вишня";
			break;
		}
		case 14: {
			cout << "На русском: Велосипед";
			break;
		}
		case 15: {
			cout << "На русском: два";
			break;
		}
		default: {
			cout << "вы ввели неверное значение. завершение работы.";
			return 0;
		}
		}
		break;
	}
	default: {
		return 0;
	}
	}

	return 0;
}