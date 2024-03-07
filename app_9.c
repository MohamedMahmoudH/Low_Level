/*
write a code that print a pyramid of "*" and take from user number of rows
*/

#include <stdio.h>

/*35 min*/

int main()
{
    int rows_num       = 0;
    int current_row    = 0;
    int current_column = 0;
    int counter        = 0;


    printf("enter rows number : ");
    scanf ("%d",&rows_num);


    if(rows_num <= 0)// input validation
    {
        printf("ERROR\nyou can't input a negative number or zero");
    }
    else
    {
        for(current_row = 1 ; current_row <= rows_num ; current_row++)
        {
            for(current_column = 1 ; current_column <= (rows_num) ; current_column++)
            {
                if(current_column == (rows_num - current_row + 1))
                {
                    for(counter = 1 ; counter <= current_row ; counter++)
                    {
                        printf("* ");
                    }
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    return 0;
}
