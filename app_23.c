/* Printing Tokens from hackerrank
   link :  https://www.hackerrank.com/challenges/printing-tokens-/problem?isFullScreen=true */

#include <stdio.h>

#define SIZE 1000

char sentence[SIZE];

int main(void)
{
    int index   = 0;

    printf("input any number of words : ");
    
    scanf("%[^\n]%*c",sentence);

    for(index = 0 ; index < 1000 ; ++index)
    {
        if(sentence[index] == ' ')
        {
            printf("\n");
        }
        else if( sentence[index] == NULL)
        {
            break;
        }
        else
        {
            printf("%c",sentence[index]);
        }
    }
    return 0;
}
