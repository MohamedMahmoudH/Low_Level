/*
check if the number an armstrong number or not
*/

#include <stdio.h>
#include <math.h>

/*25 min*/

int main(void)
{
    unsigned long long int num         = 0;
    unsigned long long int numDelegate = 0;
    unsigned long long int sumCheck    = 0;

    unsigned char carrier   = 0;
    unsigned char numDigits = 0;
    unsigned char counter   = 0;

    printf("enter a positive number : ");
    scanf ("%llu",&num);

    if(num < 0)//input validation
    {
        printf("ERROR\nyou can input positive numbers or zero");
        return 1;
    }
    else if(num > pow(2,32))
    {
        printf("This number is of significant magnitude and presents a considerable challenge to handle");
        return 1;
    }


    numDigits   = floor(log10(num)) + 1 ;
    numDelegate = num ;

    for(counter = 1 ; counter <= numDigits ; counter++)
    {
        carrier     =   numDelegate % 10 ;
        numDelegate = ( numDelegate - carrier ) / 10 ;
        sumCheck   += pow( carrier , numDigits );
    }

    if(sumCheck == num)
    {
        printf("this number is an armstrong number");
    }
    else
    {
        printf("this number is not an armstrong number");
    }
    return 0;
}
