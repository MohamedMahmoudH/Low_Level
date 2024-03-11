/*
Print a pattern of numbers from 1 to maxNum as shown below
if input = 7;

output :
7   7   7   7   7   7   7
  6   6   6   6   6   6
7   5   5   5   5   5   7
  6   4   4   4   4   6
7   5   3   3   3   5   7
  6   4   2   2   4   6
7   5   3   1   3   5   7
  6   4   2   2   4   6
7   5   3   3   3   5   7
  6   4   4   4   4   6
7   5   5   5   5   5   7
  6   6   6   6   6   6
7   7   7   7   7   7   7
*/

#include <stdio.h>
#include <math.h>

#define SPACE ' '

/*200 min*/

int main()

{
        int maxNum        = 0;
        int currentRow    = 0;
        int currentColumn = 0;
        int carrier       = 0;
        int digitNum      = 0;
        int digitCarrier  = 0;
        int ii            = 0;
        int jj            = 0;

        printf("enter maximum number of square : ");
        scanf ("%d",&maxNum);

        carrier  = maxNum ;
        digitNum = floor(log10(maxNum))+1;


        for(currentRow = 1 ; currentRow <= ((maxNum*2)-1) ; currentRow++)
        {
            for(currentColumn = 1 ; currentColumn <= ((maxNum*2)-1) ; currentColumn++)
            {
                if(((currentRow + currentColumn)% 2) == 1) //if any of these odd the program will print space
                {
                    digitCarrier = floor(log10(carrier))+1;
                    for(ii = 1 ; ii <= (digitNum - digitCarrier + 1) ; ii++)// to avoid error that producing by tens and hundreds
                    {
                        printf("%c%c",SPACE,SPACE);
                    }
                }
                else
                {
                    if(currentRow <= maxNum)
                    {
                        if((currentColumn >= currentRow) && (currentColumn <= (carrier + maxNum -1)))
                        {
                            printf("%d ",carrier);
                        }
                        else
                        {
                            for(jj = 1 ; jj < maxNum ; jj++)
                            {
                                if(currentColumn == jj)
                                {
                                    printf("%d ",(maxNum - jj + 1));
                                }
                                else if(currentColumn == ((2* maxNum)- jj))
                                {
                                    printf("%d ",(maxNum - jj + 1));
                                }
                            }
                        }
                    }
                    else if((currentRow <= ((maxNum*2)-1)) && (currentRow > maxNum))
                    {
                        if((currentColumn <= currentRow) && (currentColumn >= (currentRow-2*(carrier -1))))
                        {
                            printf("%d ",carrier);
                        }
                        else
                        {
                            for(jj = 1 ; jj < maxNum ; jj++)
                            {
                                if(currentColumn == jj)
                                {
                                    printf("%d ",(maxNum - jj + 1));
                                }
                                else if(currentColumn == ((2* maxNum)- jj))
                                {
                                    printf("%d ",(maxNum - jj + 1));
                                }
                            }
                        }
                    }
                }
            }


            printf("\n");
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
