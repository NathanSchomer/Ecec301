#include <stdio.h>
#include <stdlib.h>
/*
 * Write the function create_array. The fucntion should return
 * a pointer to a dynamically allocated int array with n numbers,
 * each of which is initialized to initial_value. The return value
 * should be NULL if the array can't be allocated.
 *
 */

int* create_array(int n, int initial_value)
{
    int i;
    int* array;

    array = malloc(n*sizeof(int));

    for(i=0; i<=n; i++)
        array[i] = initial_value;

    return array;
}

int main( void )
{
    int i, val = 2, size = 5;
    int* array;

    array = create_array(size, val);

    printf("\nArray of length %d with vlaues of %d:\n [ ", size, val);
    for(i=0; i<size; i++)
        printf("%d ", array[i]);
    printf("]\n\n");

    return 0;
}
