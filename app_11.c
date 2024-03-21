/*
draw hollow square star pattern with diagonal
*/

#include <stdio.h>

#define SPACE ' '

/*40 min*/

void print_shape_limits(void);// Print the top or bottom row

int  rowsNumber    ;
int  currentRow    ;
int  currentColumn ;
int  counter       ;
char symbol        ;

int main()
{
    printf("enter rows number : ");
    scanf ("%d",&rowsNumber);
    printf("enter only one symbol : ");
    scanf (" %c",&symbol);//the space before %c to clear the buffer

    if(getchar() != '\n')//to get from user only one symbol
    {
        printf("Invalid input , Please enter only one symbol\n");
        return 1;
    }

    if(rowsNumber <= 4)//input validation
    {
        printf("ERROR\nyou can't draw a hollow square star pattern with diagonal by using less than 5 rows");
    }
    else
    {
        print_shape_limits();//top
        printf("\n");

        for(currentRow = 2 ; currentRow < rowsNumber ; ++currentRow)// Print the body of the pattern
        {
            for(currentColumn = 1 ; currentColumn <= rowsNumber ; ++currentColumn)
            {
                if(currentColumn == 1 || currentColumn == currentRow || currentColumn == (rowsNumber - currentRow + 1 )|| currentColumn == rowsNumber)
                {
                    printf("%c%c",symbol,SPACE);
                }
                else
                {
                    printf("%c%c",SPACE,SPACE);
                }

            }
            printf("\n");
        }
        print_shape_limits();//bottom
    }
    return 0;
}
void print_shape_limits(void)
{
    for(counter = 1 ; counter <= rowsNumber ; ++counter)
    {
        printf("%c%c",symbol,SPACE);
    }
}
