/*
Print the sum of the integers in the array.

Input :
6
16 13 7 2 1 12

output :
51
*/

#include <stdio.h>

/*8 min*/

int main(void)
{
    int elementsNum = 0;
    int index       = 0;
    int sum         = 0;

    scanf("%d",&elementsNum);
    int arr[elementsNum];


    for(index = 0 ; index < elementsNum ; index++)
    {
        scanf("%d",&arr[index]);
        sum += arr[index];
    }

    printf("%d",sum);

    return 0;
}
