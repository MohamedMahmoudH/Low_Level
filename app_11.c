/*
draw hollow square star pattern with diagonal
*/

#include <stdio.h>

#define SPACE ' '

/*40 min*/

int main()
{
    int rowsNumber    = 0;
    int currentRow    = 0;
    int currentColumn = 0;
    int counter       = 0;


    printf("enter rows number : ");
    scanf ("%d",&rowsNumber);

    if(rowsNumber <= 4)//input validation
    {
        printf("ERROR\nyou can't draw a hollow square star pattern with diagonal by using less than 4 * ");
    }
    else
    {
        for(counter = 1 ; counter <= rowsNumber ; counter++)// Print the top row
        {
            printf("*%c",SPACE);
        }
        printf("\n");

        for(currentRow = 2 ; currentRow < rowsNumber ; currentRow++)// Print the body of the pattern
        {
            for(currentColumn = 1 ; currentColumn <= rowsNumber ; currentColumn++)
            {
                if(currentColumn == 1 || currentColumn == currentRow || currentColumn == (rowsNumber - currentRow + 1 )|| currentColumn == rowsNumber)
                {
                    printf("*%c",SPACE);
                }
                else
                {
                    printf("%c%c",SPACE,SPACE);
                }

            }
            printf("\n");
        }
        for(counter = 1 ; counter <= rowsNumber ; counter++)// Print the bottom row
        {
            printf("*%c",SPACE);
        }
    }
    return 0;
}
