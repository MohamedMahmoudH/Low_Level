#include <stdio.h>

#define maxSize 100

void swap(int *ptr1 , int *ptr2);
void print_array(int arr[] , int size);

int realSize ;
int index1   ;
int index2   ;

int inputArray [maxSize];
int sortedArray[maxSize];

int main(void)
{
    printf("hello mohamed mahmoud hassan\n");
    printf("welcome to VS Code\n\n");

    printf("enter size of array : ");
    scanf("%d",&realSize);

    printf("enter the input array : ");
    for(index1 = 0 ; index1 < realSize ; ++index1)
    {
        scanf("%d",&inputArray[index1]);
        sortedArray[index1] = inputArray[index1];

        for(index2 = index1 ; index2 > 0 ; --index2)
        {
            if(sortedArray[index2] < sortedArray[index2 - 1])
            {
                swap(&sortedArray[index2] , &sortedArray[index2 - 1]);
            }
        }
    }

    printf("input array is  : ");
    print_array(inputArray  , realSize);

    printf("sorted array is : ");
    print_array(sortedArray , realSize);

    return 0;
}

void swap(int *ptr1 , int *ptr2)//the inputs are addresses
{
    int temp = 0;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

void print_array(int arr[] , int size)
{
    int index3 = 0;
    printf("{\t");
    for(index3 = 0 ; index3 < size ; ++index3)
    {
        printf("%d\t",arr[index3]);
    }
    printf("}\n");
}
