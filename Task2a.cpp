#include <stdio.h>
#include <locale.h>
#include <Windows.h>
#pragma warning(disable : 4996)

int main2a() {
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "Ukrainian");
    printf("����i�� i�'�: ");
    char s[80];
    scanf("%s", s);
    printf("����i� %s", s);
    return 0;
}