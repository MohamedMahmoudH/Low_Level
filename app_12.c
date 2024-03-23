/*
for 1<=n<1000
Print a pattern of numbers from 1 to maxNum as shown below
if input = 15;

output :
15  15  15  15  15  15  15  15  15  15  15  15  15  15  15  15  15  15  15  15  15  15  15  15  15  15  15  15  15
15  14  14  14  14  14  14  14  14  14  14  14  14  14  14  14  14  14  14  14  14  14  14  14  14  14  14  14  15
15  14  13  13  13  13  13  13  13  13  13  13  13  13  13  13  13  13  13  13  13  13  13  13  13  13  13  14  15
15  14  13  12  12  12  12  12  12  12  12  12  12  12  12  12  12  12  12  12  12  12  12  12  12  12  13  14  15
15  14  13  12  11  11  11  11  11  11  11  11  11  11  11  11  11  11  11  11  11  11  11  11  11  12  13  14  15
15  14  13  12  11  10  10  10  10  10  10  10  10  10  10  10  10  10  10  10  10  10  10  10  11  12  13  14  15
15  14  13  12  11  10   9   9   9   9   9   9   9   9   9   9   9   9   9   9   9   9   9  10  11  12  13  14  15
15  14  13  12  11  10   9   8   8   8   8   8   8   8   8   8   8   8   8   8   8   8   9  10  11  12  13  14  15
15  14  13  12  11  10   9   8   7   7   7   7   7   7   7   7   7   7   7   7   7   8   9  10  11  12  13  14  15
15  14  13  12  11  10   9   8   7   6   6   6   6   6   6   6   6   6   6   6   7   8   9  10  11  12  13  14  15
15  14  13  12  11  10   9   8   7   6   5   5   5   5   5   5   5   5   5   6   7   8   9  10  11  12  13  14  15
15  14  13  12  11  10   9   8   7   6   5   4   4   4   4   4   4   4   5   6   7   8   9  10  11  12  13  14  15
15  14  13  12  11  10   9   8   7   6   5   4   3   3   3   3   3   4   5   6   7   8   9  10  11  12  13  14  15
15  14  13  12  11  10   9   8   7   6   5   4   3   2   2   2   3   4   5   6   7   8   9  10  11  12  13  14  15
15  14  13  12  11  10   9   8   7   6   5   4   3   2   1   2   3   4   5   6   7   8   9  10  11  12  13  14  15
15  14  13  12  11  10   9   8   7   6   5   4   3   2   2   2   3   4   5   6   7   8   9  10  11  12  13  14  15
15  14  13  12  11  10   9   8   7   6   5   4   3   3   3   3   3   4   5   6   7   8   9  10  11  12  13  14  15
15  14  13  12  11  10   9   8   7   6   5   4   4   4   4   4   4   4   5   6   7   8   9  10  11  12  13  14  15
15  14  13  12  11  10   9   8   7   6   5   5   5   5   5   5   5   5   5   6   7   8   9  10  11  12  13  14  15
15  14  13  12  11  10   9   8   7   6   6   6   6   6   6   6   6   6   6   6   7   8   9  10  11  12  13  14  15
15  14  13  12  11  10   9   8   7   7   7   7   7   7   7   7   7   7   7   7   7   8   9  10  11  12  13  14  15
15  14  13  12  11  10   9   8   8   8   8   8   8   8   8   8   8   8   8   8   8   8   9  10  11  12  13  14  15
15  14  13  12  11  10   9   9   9   9   9   9   9   9   9   9   9   9   9   9   9   9   9  10  11  12  13  14  15
15  14  13  12  11  10  10  10  10  10  10  10  10  10  10  10  10  10  10  10  10  10  10  10  11  12  13  14  15
15  14  13  12  11  11  11  11  11  11  11  11  11  11  11  11  11  11  11  11  11  11  11  11  11  12  13  14  15
15  14  13  12  12  12  12  12  12  12  12  12  12  12  12  12  12  12  12  12  12  12  12  12  12  12  13  14  15
15  14  13  13  13  13  13  13  13  13  13  13  13  13  13  13  13  13  13  13  13  13  13  13  13  13  13  14  15
15  14  14  14  14  14  14  14  14  14  14  14  14  14  14  14  14  14  14  14  14  14  14  14  14  14  14  14  15
15  15  15  15  15  15  15  15  15  15  15  15  15  15  15  15  15  15  15  15  15  15  15  15  15  15  15  15  15
*/
#include <stdio.h>
#include <math.h>

/*200 min*/
/*70  min*/ //to update the code

void printCenterNumbersPattern(void);
void printSideNumbersPattern(void);

// Global variables
int maxNum        ; // Maximum number
int currentRow    ; // Current row index
int currentColumn ; // Current column index
int carrier       ; // Carrier variable
int digitNum      ; // Number of digits in maxNum
int counter       ; // Counter variable

int main()

{
    printf("enter maximum number of square : ");
    scanf ("%d",&maxNum);

    //input validation
    if((maxNum < 1) || (maxNum >= 1000))
    {
        printf("invalid input\nPlease enter a positive integer less than 1000");
        return 1;
    }

    carrier  = maxNum ; // Initialize carrier
    digitNum = floor(log10(maxNum))+1; // Calculate number of digits in maxNum

    for(currentRow = 1 ; currentRow <= ((maxNum*2)-1) ; ++currentRow)// Loop through each row
    {
        for(currentColumn = 1 ; currentColumn <= ((maxNum*2)-1) ; ++currentColumn)// Loop through each column
        {
            if(currentRow <= maxNum)// for the upper part
            {
                if((currentColumn >= currentRow) && (currentColumn <= (carrier + maxNum -1)))
                // Check if current cell is in the center area of the pattern
                {
                    printCenterNumbersPattern();
                }
                else
                {
                    printSideNumbersPattern();
                }
            }
            else if((currentRow <= ((maxNum*2)-1)) && (currentRow > maxNum))// for the lower part
            {
                if((currentColumn <= currentRow) && (currentColumn >= (currentRow-2*(carrier -1))))
                {
                    printCenterNumbersPattern();
                }
                else
                {
                    printSideNumbersPattern();
                }
            }
        }

        printf("\n");// Move to next line after each row
        
        // Update carrier based on current row
        if(currentRow < maxNum)
        {
            carrier-- ;
        }
        else
        {
            carrier++ ;
        }
    }
}

void printCenterNumbersPattern(void)
{
    // Print numbers in the center area of the pattern
    switch(digitNum)
    {
        case 3:
            printf("%3d   ",carrier);
            break;
        case 2:
            printf("%2d  " ,carrier);
            break;
        case 1:
            printf("%d "   ,carrier);
    }
}

// Function to print numbers in the side area of the pattern
void printSideNumbersPattern(void)
{
    for(counter = 1 ; counter < maxNum ; counter++)
    {
        if((currentColumn == counter) || (currentColumn == ((2* maxNum)- counter)))
        {
            switch(digitNum)
            {
                case 3:
                    printf("%3d   ",(maxNum - counter + 1));
                    break;
                case 2:
                    printf("%2d  " ,(maxNum - counter + 1));
                    break;
                case 1:
                    printf("%d "   ,(maxNum - counter + 1));
            }
        }
    }
}
