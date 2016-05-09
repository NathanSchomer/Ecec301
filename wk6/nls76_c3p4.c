#include <stdio.h>

int main(void){
    int area, middle, last;
    
    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d -%d", &area, &middle, &last);
    printf("You entered %d.%d.%d\n", area, middle, last);
    
    return 0;
}
