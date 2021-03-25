#include <stdio.h>

/* copy input to oputpu; 2nd version */
int main()
{
    int c;

    while ((c = getchar()) != EOF)
        putchar(c);
    

    return 0;
}