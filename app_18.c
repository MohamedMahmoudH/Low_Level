/*
Given a sentence print each word of the sentence in a new line.
*/
#include <stdio.h>

/*10 min*/

char sentence[100];

int main(void)
{
    int index    = 0;
    int arr_size = 0;
    int i;

    printf("input a sentence \"up to 100 character\": ");
    gets(sentence);

    arr_size = sizeof(sentence) / sizeof(sentence[0]);

    for(index = 0 ; index < arr_size ; ++index)
    {
        if(sentence[index] == ' ')
        {
            printf("\n");
        }
        else
        {
            printf("%c",sentence[index]);
        }
    }
    return 0;
}
