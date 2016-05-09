#include <stdio.h>

//write a program that asks the user to enter a fraction, then reduces the fraction to lowest terms

//hint: compute gcd. divide num & denom by gcd

int main(void){
    int numer, denom, gcd, rem, x, y, tmp;

    printf("Enter a fraction: ");
    scanf("%d / %d", &numer, &denom);
    
    x = numer;
    y = denom; 

    gcd = 0;
    rem = x;
    
    /* swap variables so x is less of the two */
    if(x > y)
    {
        tmp = x;
        x = y;
        y = tmp;
    }

    /* Use Euclid's Algorithm to calculate gcd  */
    while(y != 0)
    {
        gcd = rem;
        rem = x%y;
        x = y;
        y = rem;
    }

    /* simplify fraction with GCD */
    numer /= gcd;
    denom /= gcd;
    

    printf("Simplified fraction: %d", numer);
    if(denom != 1) printf("/%d\n", denom);
    printf ("\n");

    return 0;
}
