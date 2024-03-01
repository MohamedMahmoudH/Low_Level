/*
Write a code to classify an input character as a lower-case letter, an upper-case
letter, a digit, or a special symbol. The ASCII codes for different characters are
given in Table. 1.
Input: a character
Display: its classification.

A-Z 65-90
a-z 97-122
0-9 48-57
Special Symbols 0-47, 58-64, 91-96, 123-127
*/


#include <stdio.h>
/*20 min*/
int main()
{

    int symbol = 0 ;

    printf("enter only one symbol : ");
    scanf("%s",&symbol);//i used %s to store any number of characters

    if (symbol >= 128)//checking the error
    {
        printf("ERROR \nplease enter one symbol only ");
    }

    else if((symbol>=97)&&(symbol<=122))// i guess that the small letters are the common usage "Greater chance of appearing"
    {
        printf("this symbol from small letters classification ");
    }
    else if((symbol>=65)&&(symbol<=90))//after that capital letters
    {
        printf("this symbol from capital letters classification ");
    }
    else if((symbol>=48)&&(symbol<=57))//after that numbers
    {
        printf("this symbol from numbers classification ");
    }
    else
    {
        printf("this symbol from special symbols classification ");
    }


    return 0;
}
