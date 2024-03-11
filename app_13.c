/* improved idea of app_12 */
/*
Print a pattern of numbers from 1 to num as shown below.
Each of the numbers is separated by a single space.
1 <= num <= 1000

 4 4 4 4 4 4 4
 4 3 3 3 3 3 4
 4 3 2 2 2 3 4
 4 3 2 1 2 3 4
 4 3 2 2 2 3 4
 4 3 3 3 3 3 4
 4 4 4 4 4 4 4

*/

#include <stdio.h>
#include <math.h>

/*72 min*/

#define SPACE ' '

int num                ;
int currentRow         ;
int currentcolumn      ;
int carrierRow         ;// Variable to track the value of numbers in rows
int carrierColumn      ;// Variable to track the value of numbers in columns
int counter            ;
int counter2           ;
int digitNum           ;
int digitCarrierRow    ;
int digitCarrierColumn ;

void solveRowSpaceIssue(void);
void solveColumnSpaceIssue(void);

int main(void)
{
    printf("enter a number : ");
    scanf ("%d",&num);

    carrierRow = num ;
    digitNum   = floor(log10(num)) + 1 ;


    if((num <= 0)||(num > 1000)) //input validation
    {
        printf("ERROR\nyou can only input any number from 1 to 1000");
        return 1;
    }
    else
    {
        for(currentRow = 1 ; currentRow <= ((2* num)- 1) ; currentRow++)
        {
            digitCarrierRow = floor(log10(carrierRow)) + 1 ; // Calculate number of digits in carrierRow
            carrierColumn   = num ;
            for(currentcolumn = 1 ; currentcolumn <= ((2* num)- 1) ; currentcolumn++)
            {
                digitCarrierColumn = floor(log10(carrierColumn)) + 1 ;// Calculate number of digits in carrierColumn

                // Print numbers in the first part of the pattern
                if(currentcolumn < num)
                {
                    if( (currentcolumn == (num - carrierColumn +1)) && (currentRow >= (num - carrierColumn + 2) ) && (currentRow <= (num + carrierColumn - 2) ) )
                    {
                        printf("%d",carrierColumn);
                        solveColumnSpaceIssue();
                    }
                }

                // Print numbers in the second part of the pattern
                if(((currentRow <= num)&&(currentRow == currentcolumn)) || ((currentRow > num)&&((currentRow - carrierRow) == currentcolumn)))
                {
                    for(counter = 1 ; counter <= ((2* carrierRow)- 1) ; counter++)
                    {
                        printf("%d",carrierRow);
                        solveRowSpaceIssue();
                    }
                }

                // Print numbers in the third part of the pattern
                if(currentcolumn > num)
                {
                    if( (currentcolumn == (num + carrierColumn - 1)) && (currentRow >= (num - carrierColumn + 2) ) && (currentRow <= (num + carrierColumn - 2) ) )
                    {
                        printf("%d",carrierColumn);
                        solveColumnSpaceIssue();
                    }
                }

                // Update carrierColumn based on currentcolumn position
                if(currentcolumn < num)
                {
                    carrierColumn--;
                }
                else
                {
                    carrierColumn++;
                }
            }

            // Update carrierRow based on currentRow position
            if(currentRow < num)
            {
                carrierRow--;
            }
            else
            {
                carrierRow++;
            }
            printf("\n");
        }

        return 0;
    }
}

void solveRowSpaceIssue(void)
{
    for(counter2 = 1 ; counter2 <= (digitNum - digitCarrierRow + 1) ; counter2++)
    {
        printf("%c",SPACE);
    }
}

void solveColumnSpaceIssue(void)
{
    for(counter2 = 1 ; counter2 <= (digitNum - digitCarrierColumn + 1) ; counter2++)
    {
        printf("%c",SPACE);
    }
}
