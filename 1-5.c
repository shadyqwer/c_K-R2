#include <stdio.h>

/* print Fahrenheit-Celsius table */

int main()
{
    printf(" ____________________\n");
    printf("|Fahrenheit | Celsius|\n");
    printf("|___________|________|\n");
    for(int fahr = 300; fahr >= 0; fahr = fahr - 20)
    {
        printf("|%10d | %7.1f|\n", fahr, (5.0/9.0) * (fahr-32.0));
    }
    printf("|____________________|\n");
    return 0;
}