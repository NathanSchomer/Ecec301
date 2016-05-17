#include <stdio.h>

/* Write the following function:
 *      void swap(int *p, int *q);
 *
 * When passed the address of two variablesi,
 *  swap should exchange the values of the variables.
 *
 */

void swap(int *p, int *q)
{
    int tmp = *p; // store value of p in temp var
    *p = *q;      // set value of p to value of q
    *q = tmp;     // set value of q to the temp var
}

int main()
{
    int i = 1;
    int j = 0;

    printf("ORIG: j = %d, i = %d\n", i, j);

    swap(&i, &j); /* exchanges values of i and j */
    
    printf("SWAP: j = %d, i = %d\n", i, j);
    
    return 0;
}
