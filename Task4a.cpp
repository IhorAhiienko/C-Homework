#include <stdio.h>
#include <locale.h>
#include <Windows.h>
#pragma warning(disable : 4996)

int main4a() {
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "Ukrainian");

    double a, b;
    printf("������ ����� �����: ");
    scanf("%lf", &a);
    printf("������ ����� �����: ");
    scanf("%lf", &b);
    double m = a * b / (a + b);
    printf("������ �����������: ");
    printf("%lf", m);
    return 1;
}