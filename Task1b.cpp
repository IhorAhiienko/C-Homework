#include <iostream>
#include <clocale>
#include <Windows.h>
using namespace std;
int main1b() {

    SetConsoleOutputCP(CP_UTF8);

    setlocale(LC_ALL, "Ukrainian");

    float a = 2, b = 3.0, c = 4.5, d = 56;

    std::cout << "��������� 2+3  �������:  " << a + b << std::endl;
    std::cout << " ��������� 4.5*56 �������:  " << c * d << std::endl;
    std::cout << " ��������� 2/3.0 �������:  " << a / b << std::endl;
    return 1;

}