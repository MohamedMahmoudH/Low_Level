
/*
Given a five digit integer, print the reverse of its digits.
Example:
Input = 10564 , output = 46501
*/

#include <stdio.h>
/*40 min*/
int main ()
{
    /*i want to solve this problem with variables
      not with mathematics like previous problem */

    /*we will switch between : ones and ten_thousands
          and switch between : tens and thousands
          hundreds will return the same */

    int num           = 0;
    int ones          = 0;
    int tens          = 0;
    int hundreds      = 0;
    int thousands     = 0;
    int ten_thousands = 0;
    int switcher      = 0;


    printf("Enter a five digit integer : ");
    scanf ("%d",&num);


    /*to get ones & tens & thousands & ten_thousands*/ //ex: 98765
    ones          =  num % 10           ;      //ones          = 5
    num           = (num - ones     )/10;      //num           = 9876
    tens          =  num % 10           ;      //tens          = 6
    num           = (num - tens     )/10;      //num           = 987
    hundreds      =  num % 10           ;      //hundreds      = 7
    num           = (num - hundreds )/10;      //num           = 98
    thousands     =  num % 10           ;      //thousands     = 8
    ten_thousands = (num - thousands)/10;      //ten_thousands = 9



    /*now we will switch by a variable called switcher*/
    switcher      = ones         ;
    ones          = ten_thousands;
    ten_thousands = switcher     ;
    //----------------------------
    switcher      = tens         ;
    tens          = thousands    ;
    thousands     = switcher     ;


    /*every number takes the value of its place*/
    tens          = tens          *10;
    hundreds      = hundreds      *100;
    thousands     = thousands     *1000;
    ten_thousands = ten_thousands *10000;


    /*finally we get the number */
    num = ones + tens + hundreds + thousands + ten_thousands;
    printf("%d",num);
    return 0;
}
