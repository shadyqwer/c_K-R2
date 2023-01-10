#include <stdio.h>
#include <limits.h>

int main(void) {
    printf("-- CHAR --\n");
    printf("bits: %d\n", CHAR_BIT);
    printf("unsigned char max: %d\n", UCHAR_MAX);
    printf("signed char range from %d to %d\n", SCHAR_MIN, SCHAR_MAX);
    printf("\n");

    printf("-- INT --\n");
    printf("unsigned int max: %u\n", UINT_MAX);
    printf("signed int range from %d to %d\n", INT_MIN, INT_MAX);
    printf("\n");

    printf("-- SHORT INT --\n");
    printf("unsigned short int max: %u\n", USHRT_MAX);
    printf("signed short int range from %d to %d\n", SHRT_MIN, SHRT_MAX);
    printf("\n");

    printf("-- LONG INT --\n");
    printf("unsigned long int max: %lu\n", ULONG_MAX);
    printf("signed long int range from %ld to %ld\n", LONG_MIN, LONG_MAX);
    printf("\n");

    printf("-- LONG LONG INT --\n");
    printf("unsigned long long int max: %llu\n", ULLONG_MAX);
    printf("signed long long int range from %lld to %lld\n", LLONG_MIN, LLONG_MAX);
    printf("\n");

    return 0;
}
