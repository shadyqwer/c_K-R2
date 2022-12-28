#include <stdio.h>

/* print Celsius-Fahrenheit table */

int main()
{
    float fahr, celsius;
    int lower = 0, upper = 300, step = 20;
    printf(" ____________________\n");
    printf("|Celsius | Fahrenheit|\n");
    printf("|________|___________|\n");
    celsius = lower;
    while (celsius <= upper)
    {
        fahr = celsius * (5.0/9.0) + 32.0;
        printf("|%7.0f | %10.1f|\n", celsius, fahr);
        celsius = celsius + step;
    }
    printf("|____________________|\n");
    return 0;
}