#include <Windows.h>
#include <clocale>
#include <iostream>


using namespace std;
int main2b(){

    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "Ukrainian");
    cout << "����i�� i�'�: ";
    char s[80];
    cin >> s;
    cout << "����i�, "<<s;
    return 1;
}