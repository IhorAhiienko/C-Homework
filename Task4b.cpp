#include <iostream>
#include <Windows.h>
#include <clocale>

using namespace std;
int main4b() {

    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "Ukrainian");

    double a, b;
    cout << "Введіть перше число: ";
    cin >> a;
    cout << "Введіть друге число: ";
    cin >> b;
    double m = a * b / (a + b);
    cout << "Середнє геометричне: ";
    cout << m;
    return 1;
}