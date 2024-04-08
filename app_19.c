/*check if the user enter the correct password or not*/

#include <stdio.h>
/*7 min*/

char correctPass [5]={'a','b','m','M','h'};
char inputPass   [5];

int main(void)
{
    int index = 0;

    printf("enter the password \"only five characters\" : ");

    for(index = 0 ; index < 5 ; ++index)
    {
       scanf(" %c",&inputPass[index]);
    }

    for(index = 0 ; index < 5 ; ++index)
    {
        if(correctPass[index] != inputPass[index])
        {
            printf("you entered a wrong password");
            return 1;
        }
    }
    printf("you entered a correct password");
    return 0;

}
