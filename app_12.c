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

#define SPACE ' '

/*200 min*/
/*70  min*/ //to update the code

void solve_space_issue(void);
void side_two_triangles(void);

int maxNum        ;
int currentRow    ;
int currentColumn ;
int carrier       ;
int digitNum      ;
int ii            ;
int jj            ;

int main()

{
    printf("enter maximum number of square : ");
    scanf ("%d",&maxNum);

    carrier  = maxNum ;
    digitNum = floor(log10(maxNum))+1;


    for(currentRow = 1 ; currentRow <= ((maxNum*2)-1) ; ++currentRow)
    {
        for(currentColumn = 1 ; currentColumn <= ((maxNum*2)-1) ; ++currentColumn)
        {
            if(currentRow <= maxNum)
            {
                if((currentColumn >= currentRow) && (currentColumn <= (carrier + maxNum -1)))
                {
                    solve_space_issue();
                }
                else
                {
                    side_two_triangles();
                }
            }
            else if((currentRow <= ((maxNum*2)-1)) && (currentRow > maxNum))
            {
                if((currentColumn <= currentRow) && (currentColumn >= (currentRow-2*(carrier -1))))
                {
                    solve_space_issue();
                }
                else
                {
                    side_two_triangles();
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

void solve_space_issue(void)
{
    switch(digitNum)
    {
        case 3:
            printf("%3d   ",carrier);
            break;
        case 2:
            printf("%2d  ",carrier);
            break;
        case 1:
            printf("%d ",carrier);
    }
}

void side_two_triangles(void)
{
    for(jj = 1 ; jj < maxNum ; jj++)
    {
        if((currentColumn == jj) || (currentColumn == ((2* maxNum)- jj)))
        {
            switch(digitNum)
            {
                case 3:
                    printf("%3d   ",(maxNum - jj + 1));
                    break;
                case 2:
                    printf("%2d  ",(maxNum - jj + 1));
                    break;
                case 1:
                    printf("%d ",(maxNum - jj + 1));
            }
        }
    }
}
