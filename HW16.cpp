
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
//Task 11.5(g)
typedef struct poly_coef {
    double coef;
    unsigned deg;
}poly_coef;


typedef struct poly{
    unsigned m;
    poly_coef* coefs;
}poly;


int input(poly_coef* r) {
    printf("deg= ");
    scanf("%d", &r->deg);
    printf("coef= ");
    scanf("%lf", &r->coef);
    return 0;
}




int inputpoly(const char* fname) {
    FILE* f1 = fopen(fname, "a+b");
    int m;
    printf("number of monoms=");
    scanf("%u", &m);
    fwrite(&m, sizeof(m), 1, f1);
    poly_coef coef;
    for (unsigned i = 0; i < m; i++) {
        input(&coef);
        fwrite(&coef, sizeof(coef), 1, f1);
    }
    fclose(f1);
    return 0;
}
