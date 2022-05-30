#include <stdio.h>
#include <locale.h>
#include <Windows.h>
#pragma warning(disable : 4996)

int main3a()
{
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "Ukrainian");

    double ank = 0;
    scanf("%d", &ank);
    printf("%d Гривні 00 копійок\n", ank);
    scanf("%d", &ank);
    printf("%d Euro 00 cent\n", ank);
    return 1;
}