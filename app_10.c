/*
write a code that print number of pyramids and take from user number of rows and number of pyramids and the symbol
*/

#include <stdio.h>

#define SPACE ' '

/*50 min*/

int main()
{
    int  rows_num       = 0;
    int  pyramids_num   = 0;
    int  current_row    = 0;
    int  current_column = 0;
    int  counter        = 0;
    int  counter_2      = 0; // to avoid infinite loop "logical error"
    char symbol         = 0;


    printf("enter rows number then pyramids number : ");
    scanf ("%d %d",&rows_num,&pyramids_num);
    printf("enter the symbol : ");
    scanf (" %c",&symbol);


    if(rows_num <= 0 && pyramids_num <= 0)// input validation
    {
        printf("ERROR\nyou can't input a negative number or zero");
    }
    else
    {
        for(current_row = 1 ; current_row <= rows_num ; ++current_row)
        {
            for(current_column = 1 ; current_column <= (rows_num) ; ++current_column)
            {
                if(current_column == (rows_num - current_row + 1))
                {
                    for(counter = 1 ; counter < current_row ; ++counter)
                    {
                        printf("%c%c",symbol,SPACE);
                    }
                    printf("%c",symbol);

                }
                else if(current_column <= (rows_num - current_row + 1))//to avoid printing unwanted spaces after the pyramid
                {
                    printf("%c",SPACE);
                }
            }

            for(counter_2 = 1 ; counter_2 < pyramids_num ; ++counter_2)
            {
                for(counter = 1 ; counter <= ((2* rows_num) - ((2* current_row) - 1)); ++counter)
                {
                    printf("%c",SPACE);
                }

                for(counter = 1 ; counter < current_row ; ++counter)
                {
                    printf("%c%c",symbol,SPACE);
                }
                printf("%c",symbol);
            }

            printf("\n");
        }
    }
    return 0;
}
