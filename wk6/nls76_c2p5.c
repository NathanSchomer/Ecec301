#include <stdio.h>

int main(void){
    float x, result;
    
    //get input and calculate result
    printf("Enter a number: ");
    scanf("%f", &x);
    result = 3*x*x*x*x*x + 2*x*x*x*x - 5*x*x*x - x*x + 7*x - 6;
    
    //print results
    printf("Polynomial Result: %0.1f\n", result);
    return 0;
}
