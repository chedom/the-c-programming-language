#include <stdio.h>

int main()
{
    int c;
    
    int blankPreceded;
    blankPreceded = 0;

    while ((c = getchar()) != EOF)
    {
        if (c != ' ') {
            blankPreceded = 0;
            putchar(c);    
        } else if (blankPreceded == 0) {
            blankPreceded = 1;
            putchar(c);
        } 

        /* 2nd version
        if ((c != ' ') || (blankPreceded == 0)) {
            putchar(c);
        } 
        blankPreceded = (c == ' ');
        */
    }

    return 0;
}