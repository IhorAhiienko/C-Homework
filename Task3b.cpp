#include <Windows.h>
#include <clocale>
#include <iostream>
using namespace std;
int main3b()
{
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "Ukrainian");
    double ank = 0;
    cin >> ank;
    cout << ank << " гривні" << " " << "00 копійок";
    cin >> ank;
    cout << ank << " usd" << " " << "00 cent";
    return 1;
}