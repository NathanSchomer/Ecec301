#include <stdio.h>

int main(void){
    //calculate how many digits an entered number contains
    //you may assume the number has no more than 4 digits
    int num;
    int cnt;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num < 10){
        cnt = 1;
    }
    else if(num < 100){
        cnt = 2;
    }
    else if(num < 1000){
        cnt = 3;
    }
    else if(num < 10000){
        cnt = 4;
    }

    printf("The number %d has %d digits\n", num, cnt);

    return 0;
}
