#include <stdio.h>
#include <math.h>

/*15 min*/

int rowsNum     ;
int currentRow  ;
int counter = 1 ;
int index       ;

int main(void)
{
    printf("enter the number of rows of floyd's triangle : ");
    scanf ("%d",&rowsNum);

    if(rowsNum < 1)// input validation
    {
        printf("invalid input\nplease enter positive integer");
        return 1;
    }

    for(currentRow = 1 ; currentRow <= rowsNum ; ++currentRow)
    {
        for(index = 1 ; index <= currentRow ; ++index)
        {
            printf("%-3d ",counter);
            ++counter;
        }
        printf("\n");
    }
    return 0;
}
