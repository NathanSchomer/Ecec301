#include "mymath.h"

void compute_fibs(unsigned long* fibs, unsigned int* N)
{
    unsigned int i;
    unsigned long a, b, temp;
    
    a = 1;
    b = 1;
    fibs[0] = 1;

    for(i = 1; i < *N; i++)
    {
        if(a > ULONG_MAX - b){
            *N = i+1;
            fibs[i] = b;
            return;
        }
        else
        {
            temp = a;
            a = b;
            b = b + temp;
            fibs[i] = a;
        }
    }
}

/*Write mymath.h & *.c
 *
 * Write function that computes the 1st N elements of the Fibonacci sequence which will be stored sequentially into the array fibs.
 *
 * void compute_fibs (unsigned long* fibs, unsigned int* N);
 *
 * the function should be smart enough to return early if the numbers
 * in the sequence become too large to be stored into an unsigned long.
 * If this happens, update the contents of the variable N in 
 * your function to contain the number of elements in the Fibonacci sequence
 * you actually computed.
 *
 * hint: use ULONG_MAX defined in limits.h. You will need to do a little math
 * to check the inequality properly since foo > ULONG_MAX wont work since
 * foo can't store values bigger than ULONG_MAX if foo is an unsigned long
 *
*/
