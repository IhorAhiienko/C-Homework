#include <stdio.h>
#include <locale.h>
#include <Windows.h>
#pragma warning(disable : 4996)

int main2a() {
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "Ukrainian");
    printf("Введiть iм'я: ");
    char s[80];
    scanf("%s", s);
    printf("Привiт %s", s);
    return 0;
}