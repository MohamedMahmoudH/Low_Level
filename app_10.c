/*
write a code that print number of pyramids and take from user number of rows and number of pyramids and the symbol
*/

#include <stdio.h>

#define SPACE ' '

/*50 min*/

void print_pyramid(void);

int  rows_num       ;
int  pyramids_num   ;
int  current_row    ;
int  current_column ;
int  counter        ;
int  counter_2      ; // to avoid infinite loop "logical error"
char symbol         ;

int main()
{
    printf("enter rows number then pyramids number : ");
    scanf ("%d %d",&rows_num,&pyramids_num);
    printf("enter the symbol : ");
    if(scanf(" %c",&symbol) != 1 || getchar() != '\n')//to check if the user input one symbol or not
    {
        printf("Invalid input , Please enter only one symbol\n");
        return 1;
    }

    if(rows_num <= 0 && pyramids_num <= 0)// input validation
    {
        printf("ERROR\nyou can't input a negative number or zero");
    }
    else
    {
        for(current_row = 1 ; current_row <= rows_num ; ++current_row)
        {
            for(current_column = 1 ; current_column <= (rows_num) ; ++current_column)
            {
                if(current_column == (rows_num - current_row + 1))
                {
                    print_pyramid();
                }
                else if(current_column <= (rows_num - current_row + 1))//to avoid printing unwanted spaces after the pyramid
                {
                    printf("%c",SPACE);
                }
            }

            for(counter_2 = 1 ; counter_2 < pyramids_num ; ++counter_2)
            {
                for(counter = 1 ; counter <= ((2* rows_num) - ((2* current_row) - 1)); ++counter)
                {
                    printf("%c",SPACE);
                }
                print_pyramid();
            }
            printf("\n");
        }
    }
    return 0;
}
void print_pyramid(void)
{
    for(counter = 1 ; counter < current_row ; ++counter)
    {
        printf("%c%c",symbol,SPACE);
    }
    printf("%c",symbol);
}
