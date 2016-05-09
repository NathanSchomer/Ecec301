#include <stdio.h>


int main(void){
    float income, tax;
    
    printf("Enter taxable income (exclude commas): $");
    scanf("%f", &income);

    if(income > 7000){
        tax = 230 + (income-7000)*0.06;
    }
    else if(income > 5250){
        tax = 142.50 + (income-5250)*0.05;
    }
    else if(income > 3750){
        tax = 82.50 + (income-3750)*0.04;
    }
    else if(income > 2250){
        tax = 37.50 + (income-2250)*0.03;
    }
    else if(income > 750){
        tax = 7.50 + (income-750)*0.02;
    }
    else if(income <= 750){
        tax = income * 0.01;
    }

    printf("Taxable income: $%0.2f\n", tax);

    return 0;
}
