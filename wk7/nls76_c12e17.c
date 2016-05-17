#include <stdio.h>

/*
 * Rewrite the following function to use pointer arithmetic instead of array
 * subscripting. (In other words, eliminate the variables i and j and all
 * uses of the [] operator.) Use a single loop instead of nested loops.
 *
 */

int sum_two_dimensional_array(const int* a, int height, int width)
{
    int i, j, sum = 0;
    
    for(i = 0; i < height*width; i++)
        sum += *a;

    return sum;
}

int main(void)
{
    int sum, a[4][4] = {{1,1,1,1},{1,1,1,1},{1,1,1,1},{1,1,1,1}};
    
    sum = sum_two_dimensional_array(&a[0][0], 4, 4);
    
    printf("Sum: %d\n", sum);

    return 0;
}
