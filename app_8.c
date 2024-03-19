/*
x star pattern
*/

#include <stdio.h>

/* 110 min */

void lower_part(void);
void one_row_for_upper_part(void);

int  rows_num    ;
int  current_row ;
int  counter     ;
char symbol      ;

int main()
{
    printf("enter number of rows : ");
    scanf ("%d",&rows_num);
    printf("enter the symbol : ");
    scanf (" %c",&symbol);//the space before placeholder is to clear the buffer from "enter char"


    if(rows_num < 0) //input validation
    {
        printf("ERROR\nyou can't input a negative number");
    }


    else if((rows_num & 0xFFFFFFFE) == rows_num )//even number : contains two parts (upper , lower)
    {
        for(current_row = 1 ; current_row <= (rows_num / 2) ; ++current_row)
        //after this loop the current_row == the row after the mid row so i won't increase current_row after this loop
        {
            one_row_for_upper_part();
        }

        lower_part();
    }

    
    else if((rows_num & 0xFFFFFFFE) != rows_num )//odd number : contains three parts (upper , mid , lower)
    {
        for(current_row = 1 ; current_row < (rows_num + 1)/ 2 ; ++current_row)
        // after this loop current_row == the mid row so i have to increase current_row after this loop
        {
            one_row_for_upper_part();
        }


        for(counter = 1 ; counter < (rows_num + 1)/2 ; ++counter) // if i didn't make this loop that will print " * " two times at the mid row
        {
            printf(" ");
        }
        printf("%c\n",symbol);

        current_row++ ; //i did that to set the current_row == the row after the mid row


        lower_part();
    }
    return 0;
}

void one_row_for_upper_part(void)
{
    for(counter = 1 ; counter <= (current_row - 1)  ; ++counter)
        {
            printf(" ");
        }
    printf("%c",symbol);
    for(counter = 1 ; counter <= (rows_num - 2*current_row)  ; ++counter)
        {
            printf(" ");
        }
    printf("%c\n",symbol);
}

void lower_part(void)
{
    for(current_row ; current_row <= rows_num ; ++current_row)
    {

        for(counter = 1 ; counter <= (rows_num - current_row) ; ++counter)
        {
            printf(" ");
        }
        printf("%c",symbol);

        for( counter = 1 ; counter <= (-rows_num + 2* current_row -2); ++counter)// i can use " abs() " instead of give a negative
        {
            printf(" ");
        }
        printf("%c\n",symbol);
    }
}
