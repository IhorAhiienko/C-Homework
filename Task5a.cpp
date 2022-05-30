#include <stdio.h>
#include <locale.h>
#include <Windows.h>
#include <time.h>
#pragma warning(disable : 4996)

int getch5a() {
    return 0;
}


int main() {
    time_t rawtime;
    struct tm* timeinfo;

    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "Ukrainian");

    time(&rawtime);
    timeinfo = localtime(&rawtime);
    printf("×àñ: %s", asctime(timeinfo));
    getch5a();


    setlocale(LC_ALL, "USA");

    time(&rawtime);
    timeinfo = localtime(&rawtime);
    printf("Time: %s", asctime(timeinfo));
    getch5a();

    setlocale(LC_ALL, "Germany");

    time(&rawtime);
    timeinfo = localtime(&rawtime);
    printf("Zeit: %s", asctime(timeinfo));
    getch5a();
    return 1;
}

