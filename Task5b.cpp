#include <codecvt>
#include <clocale>
#include <cstring>
#include <ctime>
#include <clocale>
#include <iostream>
#include <Windows.h>

#pragma warning(disable : 4996)

using namespace std;

int getch5b() {
    return 0;
}

int main5b() {
    time_t lt;
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "Ukrainian");

    lt = time(nullptr);
    auto ptr = localtime(&lt);
    cout << "×àñ:" << asctime(ptr);
    getch5b();


    setlocale(LC_ALL, "USA");
    lt = time(nullptr);
    ptr = localtime(&lt);
    cout << "Time:" << asctime(ptr);
    getch5b();

    setlocale(LC_ALL, "Germany");
    lt = time(nullptr);
    ptr = localtime(&lt);
    cout << "Zeit:" << asctime(ptr);
    getch5b();
    return 1;
}