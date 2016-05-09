#include <stdio.h>

//write a program that prints a one-month calendar
//user specifies the number of days in the month
//      and the day of the week on which the month begins

//Enter number of days in month: 31
//Enter starting day of the week (1=Sun, 7=Sat): 3

int main(void){
    int dayCnt, pos, i;
    
    printf("Enter number of days in month: ");
    scanf("%d", &dayCnt);
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &pos);
    
    /* make sure input is valid  */
    if(pos > 7 || pos < 1 || dayCnt > 31 || dayCnt < 28){
        printf("\nINVALID INPUT. TERMINATING...\n");
    } 

    else{
        /* initial calendar indent */
        for(i = 0; i < (pos-1)*3; i++)
           printf(" ");

        /* print days */
        for(i = 1; i <= dayCnt; i++){
            printf("%d ", i);
            if(i < 10) printf(" ");
            if(pos++ % 7 == 0){
                pos = 1;
                printf("\n");
            }
        }

        printf("\n");
    }
    return 0;
}
