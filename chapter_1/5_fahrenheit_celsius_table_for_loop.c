#include <stdio.h>

/* print Fahrenheit-Celsius table
    for fahr = 300, 280, ..., 20, 0 */
int main()
{
    int fahr;

    printf("Fahr\tCelsius\n");

    for (fahr = 300; fahr >= 0; fahr = fahr - 20)
        printf("%4d\t%7.1f\n",fahr, 5.0/9.0 * (fahr-32));

    return 0;
}
