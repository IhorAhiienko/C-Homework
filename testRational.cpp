#include "Rational.h"
#include <stdio.h>

int main() {
    Rational r1 = { 1,2 };
    Rational r2 = { 2,3 };
    Rational r3 = addRational(r1, r2);
    outputRational(r3);

    outputRational(multRational(r1, r2));

    if (cmpRational(r1, r2)) {
        printf("r2>r1");
    }


    Rational r4;
    if (inputRational(&r4) == 0) {
        outputRational(r4);
        reduceRational(&r4);
        outputRational(r4);
    }
}