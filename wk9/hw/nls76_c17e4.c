#include <stdio.h>
#include <stdlib.h>

/*
 * Assume that we want p to point to a rectangle structure
 * whose upper left corner is at (10,25) and whose lower right corner
 * is at (20,15). Write a series of statements that allocate such s
 * structure and initialize it as as indicated.
 */

struct point { int x, y; };
struct rectangle { struct point upper_left, lower_right; };

void main( void )
{
    struct rectangle *p;
    p = malloc(sizeof(struct rectangle));
    
    p->upper_left = *(struct point*)malloc(sizeof(struct point));
    p->lower_right = *(struct point*)malloc(sizeof(struct point));
    
    p->upper_left.x = 10;
    p->upper_left.y = 25;
    p->lower_right.x = 20;
    p->lower_right.y = 15;

    printf("\nUpper Left at (%d, %d)\nLower Right at (%d, %d)\n\n", p->upper_left.x,
                                                                    p->upper_left.y,
                                                                    p->lower_right.x,
                                                                    p->lower_right.y);
    free(p);
}
