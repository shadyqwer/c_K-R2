#include <stdio.h>

/* print Fahrenheit-Celsius table */

int main()
{
    float fahr, celsius;
    int lower = 0, upper = 300, step = 20;
    printf(" ____________________\n");
    printf("|Fahrenheit | Celsius|\n");
    printf("|___________|________|\n");
    fahr = lower;
    while (fahr <= upper)
    {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("|%10.0f | %7.1f|\n", fahr, celsius);
        fahr = fahr + step;
    }
    printf("|____________________|\n");
    return 0;
}