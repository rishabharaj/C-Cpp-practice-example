#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <limits.h>
#include <float.h>

void printRanges(void) {
    // Integer data types
    printf("**Integer Data Types**\n");
    printf("int8_t %20d %20d\n", SCHAR_MIN, SCHAR_MAX);
    printf("int16_t %20d %20d\n", SHRT_MIN, SHRT_MAX);
    printf("int32_t %20d %20d\n", INT_MIN, INT_MAX);
    printf("int64_t %20lld %20lld\n", LLONG_MIN, LLONG_MAX);
    printf("uint8_t %20d %20d\n", 0, UCHAR_MAX);
    printf("uint16_t %20d %20d\n", 0, USHRT_MAX);
    printf("uint32_t %20d %20u\n", 0, UINT_MAX);
    printf("uint64_t %20lld %20llu\n", 0, ULLONG_MAX);

    // Real number data types
    printf("\n**Real Number Data Types**\n");
    printf("float %14.7g %14.7g\n", FLT_MIN, FLT_MAX);
    printf("double %14.7g %14.7g\n", DBL_MIN, DBL_MAX);
    printf("long double %14.7Lg %14.7Lg\n", LDBL_MIN, LDBL_MAX);
}

int main(void) {
    printRanges();
    return 0;
}
