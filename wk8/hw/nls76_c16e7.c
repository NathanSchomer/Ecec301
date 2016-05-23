#include <stdio.h>

struct fraction {
    int numerator;
    int denominator;
};

/* prototypes/declarations */
void init_fraction(struct fraction* this, int num, int denom)
{
    this->numerator = num;
    this->denominator = denom;
}

void reduce(struct fraction* this)
{
    int num1 = this->numerator;
    int num2 = this->denominator;
    int temp, gcd, rem;

    if(num2 > num1){
        temp = num1;
        num1 = num2;
        num2 = temp;
    }

    gcd = 0;
    rem = num2;

    while(num2 != 0)
    {
        gcd = rem;
        rem = num1 % num2;
        num1 = num2;
        num2 = rem;
    }

    this->numerator = this->numerator / gcd;
    this->denominator = this->denominator / gcd;
}

void add(struct fraction* a, struct fraction* b, struct fraction* result)
{
    int denomTmp, numerTmp;
   
    /* cross multilply */
    numerTmp = a->denominator * b->numerator + a->numerator * b->denominator;
    denomTmp = a->denominator * b->denominator;

    /* create new fraction */
    init_fraction(result, numerTmp, denomTmp);
    reduce(result);
}

void subtract(struct fraction* a, struct fraction* b, struct fraction* result)
{
    int denomTmp, numerTmp;
   
    /* cross multilply */
    numerTmp = a->denominator * b->numerator - a->numerator * b->denominator;
    denomTmp = a->denominator * b->denominator;

    /* create new fraction */
    init_fraction(result, numerTmp, denomTmp);
    reduce(result);
}

void multiply(struct fraction* a, struct fraction* b, struct fraction* result)
{
    int denomTmp, numerTmp;

    numerTmp = a->numerator * b->numerator;
    denomTmp = a->denominator * b->denominator;

    /* create new fraciton with result */
    init_fraction(result, numerTmp, denomTmp);
    reduce(result);
}

void divide(struct fraction* a, struct fraction* b, struct fraction* result)
{
    int denomTmp, numerTmp;

    /* same as multiplying by the reciprocal */
    numerTmp = a->numerator * b->denominator;
    denomTmp = a->denominator * b->numerator;

    /* create new fraciton with result */
    init_fraction(result, numerTmp, denomTmp);
    reduce(result);
}

void printFrac(struct fraction* this)
{
    printf("%d/%d\n", this->numerator, this->denominator);
}

void main()
{
    struct fraction x, y, z;
    init_fraction(&x, 8, 8);
    init_fraction(&y, 1, 2);
    divide(&x, &y, &z);
    printFrac(&z);
}
