/*
https://www.hackerrank.com/challenges/bitwise-operators-in-c/problem?isFullScreen=true
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int Max(short operation , short oldValue , short k)
{
    return(operation > oldValue && operation < k ? operation : oldValue);
}

void calculate_the_maximum(int n, int k) {
    short and = 0 , or = 0 , xor = 0;
    short b = 1 ;
    for(short a = 1 ; a <= k ; ++a)
    {
        for(short i = n ; i > b ; --i)
        {
            and = Max(a&i , and , k);
            or  = Max(a|i , or  , k);
            xor = Max(a^i , xor , k);
        }
        ++b;
    }
    printf("%hi\n%hi\n%hi\n",and , or , xor);
}

int main() {
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}
