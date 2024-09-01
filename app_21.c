/* first day  : 140 min */
/* second day : 255 min */
/* third day  : 100 min */ //only one problem take 80 min to solve

#include <stdio.h>
#include <math.h>

#define MAX_ROWS 100

// 75 min /* to get the formula that shows max number that will be at pascal's triangle*/

char     spaceArray    [MAX_ROWS];
unsigned pascalRow     [MAX_ROWS];
unsigned storePascalRow[MAX_ROWS];

int main()
{
    unsigned int rows_num       = 0;
    unsigned int current_row    = 0;
    unsigned int counter        = 0;
    unsigned int max_num_digits = 0;

    double numerator   = 1.0;
    double denominator = 1.0;
    double max_number  = 0.0;

    int n = 0;
    int index = 0;

    printf("enter number of rows : ");
    scanf ("%d",&rows_num);

    if(1 == rows_num)
    {
        printf("1");
        return 1;
    }

    counter = rows_num ;
    if(0 == (rows_num % 2))
    {
        counter++;
    }
    while(counter >= 2)
    {
        numerator *= (counter - 2);
        counter -= 2;
    }

    n = (rows_num / 2);
    for(counter = 0 ; counter < n ; ++counter)
    {
        if((1 == (n -counter)) && (0 == rows_num % 2))
        {
            break;
        }
        denominator *= ((n - counter)* 0.5) ;
    }

    max_number = (numerator / denominator);
    max_num_digits = floor (log10(max_number)) + 1;

    //pattern
    for(counter = 0 ; counter < max_num_digits ; ++counter)//counter as an index
    {
        spaceArray[counter] = ' ';
    }

    for(current_row = 1 ; current_row <= rows_num ; ++current_row)
    {
        for(counter = 1 ; counter <= (rows_num - current_row) ; ++counter)
        {
            printf("%s",spaceArray);
        }

        if(1 == current_row)
        {
            printf("%*d\n",max_num_digits,1);
        }
        else
        {
            pascalRow[0] = 1;
            pascalRow[current_row - 1] = pascalRow[current_row - 2];// to shift the last number "1"
            for(counter = 1 ; counter < (current_row - 1) ; ++counter)
            {
                pascalRow[counter] += storePascalRow[counter - 1];
            }
            for(index = 0 ; index < current_row ; ++index)
            {
                printf("%*d%s",max_num_digits,pascalRow[index],spaceArray);
                storePascalRow[index] = pascalRow[index];
            }
            printf("\n");
        }
    }

    return 0;
}
