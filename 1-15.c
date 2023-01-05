#include <stdio.h>

float conversion(int);

int main(void)
{
    int lower = 0, upper = 300, step = 20;
    float fahr = lower, celsius;
    while (fahr <= upper)
    {
        printf("%3.0f %6.1f\n", fahr, conversion(fahr));
        fahr += step;
    }
}

float conversion(int fahr)
{
    return (5.0 / 9.0) * (fahr - 32.0);
}
