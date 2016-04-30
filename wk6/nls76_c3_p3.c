#include <stdio.h>

int main(void){
    int prefix, groupId, code, itemNum, check;

    printf("Enter ISBN: ");
    scanf("%d -%d -%d -%d -%d", &prefix, &groupId, &code, &itemNum, &check);
    
    printf("GS1 prefix: %d\n", prefix);
    printf("Group identifier: %d\n", groupId);
    printf("Publisher code: %d\n", code);
    printf("Item number: %d\n", itemNum);
    printf("Check digit:w: %d\n", check);

    return 0;
}
