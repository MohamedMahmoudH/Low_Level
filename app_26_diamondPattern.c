/*
diamond pattern
*/

#include <stdio.h>

int main()
{
    short halfRowsNum = 0;
    scanf("%hi",&halfRowsNum);
    if(halfRowsNum < 1)// input validation
    {
        printf("that's invalid input please enter a positive number");
        return 0;
    }

    short n = 1;
    for(short index1 = 1 ; index1 > 0 ; index1 += n)
    {
        for(short index2 = 1 ; index2 <= (halfRowsNum - index1) ; ++index2)
        {
            printf(" ");
        }
        printf("*");
        for(short index2 = 2 ; index2 <= (index1) ; ++index2)
        {
            printf("**");
        }
        printf("\n");
        if(index1 == halfRowsNum)n = -1;
    }
    return 0;
}
