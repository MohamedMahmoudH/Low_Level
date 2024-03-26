#include <stdio.h>
#include <math.h>

/*15 min*/
/*20 min*/ //Editing

int main(void)
{
    int rowsNum     = 0 ;
    int currentRow  = 0 ;
    int counter     = 1 ;
    int index       = 0 ;
    int numOfDigits = 0 ;

    printf("enter the number of rows of floyd's triangle : ");
    scanf ("%d",&rowsNum);

    // this formula will get number of digits for the last number in last row of floyd's triangle
    numOfDigits = floor(log10((rowsNum * (rowsNum + 1) / 2))) + 1;


    if(rowsNum < 1)// input validation
    {
        printf("invalid input\nplease enter positive integer");
        return 1;
    }

    for(currentRow = 1 ; currentRow <= rowsNum ; ++currentRow)
    {
        for(index = 1 ; index <= currentRow ; ++index)
        {
            printf("%-*d ",numOfDigits,counter);
            ++counter;
        }
        printf("\n");
    }
    return 0;
}
