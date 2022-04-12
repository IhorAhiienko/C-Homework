#include <stdio.h>

#define M_E 2.71828182845904523536028747135266250
#define N 3// 10

double sum_arr(double mas[N]) {
    double sum = 0.0;
    for (int i = 0; i < N; i++) {
        if (mas[i] > M_E) {
            sum += mas[i];
        }
    }
    return sum;
}


int main() {

    double mas[N];

    for (int i = 0; i < N; i++) {
        printf("mas[%d]=", i);
        scanf("%lf", &mas[i]);
    }

    printf("Sum =%lf", sum_arr(mas));
}

