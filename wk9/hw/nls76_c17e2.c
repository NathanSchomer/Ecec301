#include <stdio.h>
#include <stdlib.h>

/* Write a fcuntion named duplicate that uses dynamic storage allocation
 * to create a copy of a string. 
 *
 * p = duplicate(str) would lalocate space for a string of the same lenght
 * as str, copy the contents of str into the new string, and return a pointer
 * to it. Have duplicate return a null pointer if the memory allocation fails.*
 *
 */

int str_len(char* str)
{
    int len, i;

    for(i=0; str[i] != '\0'; i++)
        len++;

    return len;
}

char* duplicate(char* str)
{
    char* strCpy;

    int i,cnt = 1; //iniitalize to 1 for the null character
    char* newStr;
    
    // allocate space for the string
    newStr = malloc(str_len(str)*sizeof(char)); 

    //copy old string into new string
    for(i=0; i <= cnt; i++)
        newStr[i] = str[i];

    //return pointer
    return newStr;
}

int main( void )
{
    char* p;
    char str[] = "This is a test";
    
    p = duplicate(str);
    
    printf("\nOrig string \"%s\" base at %p\n", str, &(str[0]));
    printf("string Copy \"%s\" base at %p\n\n", str, &(p[0])); 

    return 0;
}
