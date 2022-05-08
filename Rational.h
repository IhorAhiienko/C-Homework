#ifndef _RATIONAL_H_
#define _RATIONAL_H_

#include <stdio.h>
#include <stdbool.h>

//description of our type Rational
typedef struct {
    int numerator;
    unsigned int denominator;
}Rational;

// prototypes of functions
// input
extern int inputRational(Rational* x);
//output
extern void outputRational(Rational x);

extern Rational addRational(Rational x, Rational y);

extern Rational multRational(Rational x,Rational y);

extern bool cmpRational(Rational x,Rational y);

extern void reduceRational(Rational* x);

#endif // define _RATIONAL_H_