/*-ve side issue*/

#include <stdio.h>

#define PI 3.14159265359

void main(void)
{
    char x ;
    unsigned char y ;
    int z ;

    printf("mohamed");
    scanf ("%X"  ,&x);//x "signed char" = FF = -1

    z = y = x ;// y "unsigned char" = FF = 255 ******** z "signed int" = FF = 255 /*still with +ve side so no issues*/

    printf("%i\n", x);// FF when set as signed char will be -1
    printf("%u\n", x);// when you print a signed char = FF with "%u" unsigned int value , it stores as -1 so that print an 4294967295
    printf("%d\n", x);

    printf("\n\n");

    printf("%i\n", y);
    printf("%u\n", y);
    printf("%d\n", y);

    printf("\n\n");

    printf("%i\n", z);
    printf("%u\n", z);
    printf("%d\n", z);

    return 0;
}
