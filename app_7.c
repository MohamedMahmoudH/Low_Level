/*
hollow rhombus star pattern
*/

#include <stdio.h>

/*60 min*/

int main()
{
    int rows            = 0 ;
    int columns         = 0 ;
    int rows_counter    = 1 ;
    int counter         = 0 ;

    printf("enter number of rows then column : ");
    scanf ("%d%d",&rows,&columns);



    if(rows <= 0 || columns <= 0) // input validation
    {
        printf("ERROR\nyou can't input a -ve number");
    }
    else
    {
        while( rows_counter <= rows ) //used (while) and not (for) only to practise
        {
            for(counter = rows_counter ; counter < rows ; counter++)
            {
                printf(" ");
            }

            printf("* ");

            for(counter = 0 ; counter < (columns - 2); counter++)
            {
                if(rows_counter == 1 || rows_counter == rows)
                {
                    printf("* ");
                }
                else
                {
                    printf("  ");
                }
            }

            printf("*\n");
            rows_counter++ ;
        }
    }
}
