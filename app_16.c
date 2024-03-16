/*
hackerrank easy problem
the link:
https://www.hackerrank.com/challenges/for-loop-in-c/problem?isFullScreen=true
*/

#include <stdio.h>

/*15 min*/

int main(void)
{
    unsigned long long a = 0;
    unsigned long long b = 0;
    unsigned long long i = 0;

    scanf("%d",&a);
    scanf("%d",&b);

    if((a < 1)||(b < 1))
    {
        printf("ERROR\nyou can input only positive integer");
        return 1;
    }
    else if((a > 1000000)||(b > 1000000))
    {
        printf("this number is of significant magnitude and presents a considerable challenge to handle");
        return 1;
    }


    for(i = a ; i <= b ; ++i)
    {
        if(i <= 9)
        {
            switch(i)
            {
            case 1:
                printf("one\n");
                break;
            case 2:
                printf("two\n");
                break;
            case 3:
                printf("three\n");
                break;
            case 4:
                printf("four\n");
                break;
            case 5:
                printf("five\n");
                break;
            case 6:
                printf("six\n");
                break;
            case 7:
                printf("seven\n");
                break;
            case 8:
                printf("eight\n");
                break;
            case 9:
                printf("nine\n");
                break;
            }
        }
        else
        {
            if((i % 2) == 0)
            {
                printf("even\n");
            }
            else
            {
                printf("odd\n");
            }
        }
    }
}
