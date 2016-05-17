#include <stdio.h>

/* rewrite store_zeros() to use pointer arithmetic instead
 *  of array subscripting. (In other words, eliminate the
 *  variable i and all uses of the [] operator). Make as few
 *  chagnes as possible.
 */

void store_zeros(int* a, int n)
{
    int i;
    for (i = 0; i < n; i++)
        *(a++) = 0;  //assign curr position to 0 and then increment pointer
}

int main(void)
{
    int i, a[10];

    store_zeros(&a[0], 10); //pass base pointer and size
    
    for(i=0;i<10;i++)
        printf("%d ", a[i]);

    printf("\n");
    return 0;
}
