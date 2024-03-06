/*
x star pattern
*/

#include <stdio.h>

/* 110 min */

int main()
{
    int rows_num    = 0 ;
    int current_row = 0 ;
    int counter     = 0 ;

    printf("enter number of rows : ");
    scanf ("%d",&rows_num);

    if(rows_num < 0) //input validation
    {
        printf("ERROR\nyou can't input a negative number");

    }


    else if((rows_num & 0xFFFFFFFE) == rows_num )//even number : contains two parts (upperb , lower)
    {
        for(current_row = 1 ; current_row <= (rows_num / 2) ; current_row++ )
        //after this loop the current_row == the row after the mid row so i won't increase current_row after this loop
        {

            for(counter = 1 ; counter <= (current_row - 1)  ; counter++)
                {
                    printf(" ");
                }


            printf("*");

            for(counter = 1 ; counter <= (rows_num - 2*current_row  )  ; counter++)
                {
                    printf(" ");
                }

            printf("*\n");
        }

        for(current_row ; current_row <= rows_num ; current_row++ )
        {

            for(counter = 1 ; counter <= (rows_num - current_row) ; counter++ )
            {
                printf(" ");
            }

            printf("*");

            for( counter = 1 ; counter <= (-rows_num + 2* current_row -2); counter++ )// i can use " abs() " instead of give a negative
            {
                printf(" ");
            }

            printf("*\n");
        }

    }

    /************************************************************************************************/

    else if((rows_num & 0xFFFFFFFE) != rows_num )//odd number : contains three parts (upper , mid , lower)
    {
        for(current_row = 1 ; current_row < (rows_num + 1)/ 2 ; current_row++ )
        // after this loop current_row == the mid row so i have to increase current_row after this loop
        {

            for(counter = 1 ; counter <= (current_row - 1)  ; counter++)
                {
                    printf(" ");
                }


            printf("*");

            for(counter = 1 ; counter <= (rows_num - 2*current_row /*+ 1*/)  ; counter++)
                {
                    printf(" ");
                }

            printf("*\n");
        }


        for(counter = 1 ; counter < (rows_num + 1)/2 ;counter++ ) // if i didn't make this loop that will print " * " two times at the mid row
        {
            printf(" ");
        }
        printf("*\n");

        current_row++ ; //i did that to set the current_row == the row after the mid row

        for(current_row ; current_row <= rows_num ; current_row++ )
        {

            for(counter = 1 ; counter <= (rows_num - current_row) ; counter++ )
            {
                printf(" ");
            }

            printf("*");

            for( counter = 1 ; counter <= (-rows_num + 2* current_row - 2); counter++ )// i can use " abs() " instead of give a negative
            {
                printf(" ");
            }

            printf("*\n");
        }

    }
    return 0;
}
