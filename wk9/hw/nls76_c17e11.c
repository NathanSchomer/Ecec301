#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
 * The list parameter points to a linked list; the function should return
 * the number of times that n appears in this list. Assume that the node
 * structure is the one defined in section 17.5.
 */


struct node {
    int value;          /* data stored in the node  */
    struct node *next;  /* pointer to the next node */
};

struct node* add_to_list(struct node *list, int n)
{
    struct node *new_node;
    new_node = malloc(sizeof(struct node));
    
    if(new_node == NULL){
        printf("Error: malloc failed in add_to_list\n");
        exit(EXIT_FAILURE);
    }
    
    new_node->value = n;
    new_node->next = list;
    return new_node;
}

int count_occurances(struct node *list, int n)
{
    struct node* item = list;
    int cnt = 0;

    while(item->next) {
        if(item->value == n)
            cnt++;
        item = item->next;
    }

    return cnt;
}

int main( void )
{
    struct node *first = NULL;
    struct node *item = NULL;
    int i, tmp;

    /* initalize list with 10 random values */
    srand(time(NULL));
    for( i = 0; i <= 10; i++ ){
        tmp = (int)(rand()%10);
        first = add_to_list(first, tmp);   
    }
   
    /* check how many times 5 occurs in the list */
    i = count_occurances(first, 5);    

    /* print list and then number of occurances */
    item = first;
    printf("\nList: [ ");
    while(item->next){
        printf("%d ",item->value);
        item = item->next; 
    }
    printf("]\nOccurances of 5 in list: %d\n\n", i);

    return 0;
}
