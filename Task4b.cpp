#include <iostream>
#include <Windows.h>
#include <clocale>

using namespace std;
int main4b() {

    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "Ukrainian");

    double a, b;
    cout << "������ ����� �����: ";
    cin >> a;
    cout << "������ ����� �����: ";
    cin >> b;
    double m = a * b / (a + b);
    cout << "������ �����������: ";
    cout << m;
    return 1;
}