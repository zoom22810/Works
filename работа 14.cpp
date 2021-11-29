#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");



    int pikint[10] = { 10, 20,30,40,50,60,70,80,90,100 };
    for (int q = 0; q < 10; q++) {
        cout << "[" << q << "] pikint: " << pikint[q] << endl;
    }
    cout << endl;
    short arashort[10] = { 11,12,13,14,15,16,17,18,19,20 };
    for (int a = 0; a < 10; a++) {
        cout << "[" << a << "] arashort: " << arashort[a] << endl;
    }
    cout << endl;
    long liplong[10] = { 41,42,43,44,45,46,47,48,49,50 };
    for (int c = 0; c < 10; c++) {
        cout << "[" << c << "] liplong: " << liplong[c] << endl;
    }
    cout << endl;
    float arrfloat[10] = { 1.1,2.1,3.1,4.1,5.1,6.1,7.1,8.1,9.1,10.1 };
    for (int x = 0; x < 10; x++) {
        cout << "[" << x << "] arrfloat: " << arrfloat[x] << endl;
    }
    cout << endl;
    double cindouble[10] = { 2.1,3.1,4.1,5.1,6.1,7.1,8.1,9.1,11.1,12.1 };
    for (int o = 0; o < 10; o++) {
        cout << "[" << o << "] cindouble: " << cindouble[o] << endl;
    }
    cout << endl;
    char tegchar[10] = { '%','@','#','$','&','*','!','-','+','=' };
    for (int w = 0; w < 10; w++) {
        cout << "[" << w << "] tegchar: " << tegchar[w] << endl;
    }
    cout << endl;
    bool vinbool[10] = { 1,0,1,1,1,0,0,1,0,1 };
    for (int v = 0; v < 10; v++) {
        cout << "[" << v << "] vinbool: " << vinbool[v] << endl;
    }
    cout << endl;
    string slipstring[10] = { "привет","Погода","Класс","Шуба","Изи","Бебра","Работа","Товар","Комп","Чизбургер" };
    for (int j = 0; j < 10; j++) {
        cout << "[" << j << "] slipstring: " << slipstring[j] << endl;
    }



    return 0;
}
