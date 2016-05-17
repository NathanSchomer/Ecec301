#include <stdio.h>

/* 
 * a points to an array of length n. The function searches the array
 * for its largest and second-largest elements, storing them in the 
 * variables pointed to by largest and second_largest, respectively.
 * Use pointer arithmetic (not subscripting) to visit array elements.
 *
 */

void find_two_largest(const int *a, int n, int *largest, int *second_largest)
{
    int i;

    *largest = *a;
    *second_largest = *largest;

    for(i=0, a++; i<n-1; i++, a++)
    {
        if(*a > *largest)
        {
            *second_largest = *largest;
            *largest = *a;
        }
    }
}

int main(void)
{
    int largest, second_largest, a[5] = {3,5,4,1,9};

    find_two_largest(&a[0], 5, &largest, &second_largest);

    printf("Largest:\t%d\nSecond Largest:\t%d\n", largest, second_largest);
    return 0;
}
