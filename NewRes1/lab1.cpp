// lab1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

//Целочисленные типы 
//short - 2 байта, -2^15...2^15-1
//int - 4 байта, -2^31...2^31-1
//long - 8 байт, -2^31...2^31-1
//long long - 8 байт, -2^63...2^63-1 

//Вещественные типы
//float - 4 байта, 7 значащих цифр
//double - 8 байт, 15 значащих цифр
//long double -  тоже что и double

int main() {
    double h, S;
    long double a;
    cout << "S= "; cin >> S;
    cout << "h= "; cin >> h;
    a = (2 * S) / h;
    cout << "a= " << a << endl;
    return 0;
}