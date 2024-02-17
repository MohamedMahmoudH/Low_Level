
/*
Given a five digit integer, print the sum of its digits.
Example:
Input = 10564 , output = 1+0+5+6+4 = 16
*/


#include <stdio.h>


int main()
{

//i prefer use mathematics and not use many variables to reduce memory allocation
    int num = 0 ;
    printf("enter a five digit integer : ");
    scanf("%d",&num);

    printf( "%d +",(num      -num%10000)/10000);
    printf(" %d +",(num%10000-num%1000 )/1000 );
    printf(" %d +",(num%1000 -num%100  )/100  );
    printf(" %d +",(num%100  -num%10   )/10   );
    printf(" %d =",(num%10   -0        )/1    );

    printf(" %d",(num      -num%10000)/10000  // d0000
                +(num%10000-num%1000 )/1000   // 0d000
                +(num%1000 -num%100  )/100    // 00d00
                +(num%100  -num%10   )/10     // 000d0
                +(num%10   -0        )/1      // 0000d
                                         );
    return 1;
}
//------------------------------------------------------














