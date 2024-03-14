/*
reverse an array
*/

#include <stdio.h>
#include <math.h>

/*19 min*/

int main(void)
{
    int elements_num   = 0;
    int index         = 0;
    int reversed_index = 0;

    printf("enter number of array elements : ");
    scanf ("%d",&elements_num);

    int arr[elements_num];
    int reversed_arr[elements_num];
    printf("enter array index values : ");
    for(index = 0 ; index < elements_num ; ++index)
    {
        scanf("%d",&arr[index]);
        reversed_arr[abs(index - elements_num + 1)] = arr[index];
    }

    printf("reversed array = {");
    for(reversed_index = 0 ; reversed_index < elements_num ; ++reversed_index)
    {
        printf(" %d ",reversed_arr[reversed_index]);
        if(reversed_index != (elements_num - 1))// the last index
        {
            printf(",");
        }
        else
        {
            printf("}");
        }
    }

    return 0;
}
