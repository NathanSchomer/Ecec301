#include <stdio.h>

/*
 * struct point { int x, y };
 * struct rectangle { struct point upper_left, lower_right; };
 * 
 * A point structure stores the x and y coordinates of a point on the screen.
 * A rectangle structure stores the coordinates of the upper left and lower
 * right corners of a rectangle. Write functions that perform the following
 * operations on a rectangle structure r passed as an argument:
 *
 * (a) compute the area of r.
 * (b) computer the center of r, returning it as a point value. If either the x or y
 *      coordinate of the center isn't an integer, store its truncated value in
 *      the point strucutre
 * (c) move r by x units in the x direction and y units in the y direction, returning
 *      the modified version of r. (x and y are additional arguments to the fucntion)
 * (d) determine wether a point p lies within r, returning true or false. 
 *      (p is an additional argument type struct point)
 *
 */

#define FALSE 0
#define TRUE !FALSE

struct point { int x, y; };
struct  rectangle { struct point upper_left, lower_right; };

int area(struct rectangle* r)
{
    int w, h;
    
    w = r->lower_right.x - r->upper_left.x;
    h = r->upper_left.y - r->lower_right.y;

    return w*h;
}

void init_point(struct point* p, int x, int y)
{
    p->x = x;
    p->y = y;
}

void init_rectangle(struct rectangle* r, struct point* p_up, struct point* p_low)
{
    r->upper_left = *p_up;
    r->lower_right = *p_low;
}

void center(struct rectangle* r, struct point* p)
{
    int cx, cy;
    cx = (int)((r->lower_right.x - r->upper_left.x)/2);
    cy = (int)((r->upper_left.y - r->lower_right.y)/2);
    init_point(p,cx,cy);
}

void move(struct rectangle* r, int x, int y)
{
    r->upper_left.x  = r->upper_left.x  + x;
    r->lower_right.x = r->lower_right.x + x;
    r->upper_left.y  = r->upper_left.y  + y;
    r->lower_right.y = r->lower_right.y + y;
}

int isIn(struct rectangle* r, struct point* p)
{
    if( p->x < r->lower_right.x &&
        p->x > r->upper_left.x  &&
        p->y < r->upper_left.y  && 
        p->y > r->lower_right.y)
    {   return TRUE; } 
    else{
        return FALSE;
    }
}

void printRect(struct rectangle* r)
{
    int a,b,c,d;
    a = r->upper_left.x;
    b = r->upper_left.y;
    c = r->lower_right.x;
    d = r->lower_right.y;

    printf("rect[(%d,%d),(%d,%d)]",a,b,c,d);

}

void printPoint(struct point* p)
{
    printf("point(%d,%d)",p->x,p->y);
}

void main()
{
    // a) area
    // b) center
    // c) move   xx
    // d) p in r xx
    
    struct point p1, p2, p3, c;
    struct rectangle r;
    int a;

    /* Initialize Points and Rectangle */
    init_point(&p1, 0, 6);
    init_point(&p2, 6, 0);
    init_point(&p3, 7, 6);
    init_rectangle(&r, &p1, &p2);

    /* Area */
    a = area(&r);
    printf("\nThe area of ");
    printRect(&r);
    printf(" is %d units sqared\n\n", a);


    /* Center Point  */
    center(&r, &c);
    printRect(&r);
    printf(" has center point ");
    printPoint(&c); printf("\n\n");

    /* Move Rectangle */
    printRect(&r);
    printf(" shifted 5 up & 5 right is ");
    move(&r, 5, 5);
    printRect(&r);
    printf("\n\n");

    /* Check if Point is in Rectangle */
    printPoint(&p3);
    printf(" is in ");
    printRect(&r);
    printf(" is ");
    if(isIn(&r, &p3) == TRUE)
        printf("TRUE\n\n");
    else
        printf("FALSE\n\n");
}
