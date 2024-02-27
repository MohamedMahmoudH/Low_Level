#include <stdio.h>

int main()
{
    short  int    short_num    = 4294967294 ;
    int           signed_num   = 4294967294 ; //signed int
    unsigned int  unsigned_num = 4294967294 ;
    long long int longlong_num = 4294967294 ;


    printf("%hu\n",short_num);
    printf("%hi\n",short_num);
    printf("%i\n", short_num);
    printf("%d\n", short_num);
    printf("%u",   short_num);


    printf("\n\n\n");//----------------------------------------


    printf("%hu\n",signed_num);
    printf("%hi\n",signed_num);
    printf("%i\n", signed_num);
    printf("%d\n", signed_num);
    printf("%u",   signed_num);


    printf("\n\n\n");//-----------------------------------------


    printf("%hu\n",unsigned_num);
    printf("%hi\n",unsigned_num);
    printf("%i\n", unsigned_num);
    printf("%d\n", unsigned_num);
    printf("%u",   unsigned_num);


    printf("\n\n\n");//----------------------------------------


    printf("%hu\n",longlong_num);
    printf("%hi\n",longlong_num);
    printf("%i\n", longlong_num);
    printf("%d\n", longlong_num);
    printf("%u",   longlong_num);


    printf("\n\n\n");//----------------------------------------


    int x = -2147483648 ;
    printf("%d\n",x-1);
    printf("%u",x);


    printf("\n\n\n");//----------------------------------------


    int z = 65 ;
    printf("%c",z);



    return 0;
}
