#include <stdio.h>

int main(void)
{
    unsigned long long num     = 0;
    unsigned long long counter = 0;

    float result    = 0;
    int   divisiors = 2;//all numbers can division on 1 and itself

    printf("enter the number : ");
    scanf ("%llu",&num);

    if(1 == num)
    {
        --divisiors;
    }

    for(counter = 2 ; counter <= (num / 2) ; ++counter)//no number > half of "num" can be divisior for "num" unless num itself
    {
        result =((float)num / counter);
        if((float)result == (int)result)
        {
            ++divisiors;
        }
    }

    printf("number of divisiors for %d is : %d",num,divisiors);

    return 0;
}
