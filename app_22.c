/* 44 min */

#include <stdio.h>

int main(void)
{
    int  height       = 0;
    int  width        = 0;
    int  counter      = 0;
    int  currentRow   = 0;
    int  midOfPattern = 0;
    int  spaces       = 1;
    char symbol       = 0;

    printf("enter height then width of the arrow \"height must be odd\" : ");
    scanf ("%d %d",&height,&width);
    printf("enter the symbol of the arrow \"enter only one symbol\": ");
    scanf (" %c",&symbol);

    if(((height % 2) == 0) || (height < 1) || (width < 1) || (width < ((height / 2) + 1)))// input validation
    {
        printf("there is an ERROR");
        return 1;
    }

    midOfPattern = (height / 2) + 1 ;

    for(currentRow = 1 ; currentRow <= height ; ++currentRow)
    {
        if(currentRow == midOfPattern)
        {
            for(counter = 1 ; counter <= (width + 1) ; ++counter)
            {
                printf("%c ",symbol);
            }
            printf("\n");
            --spaces;
            continue;
        }

        for(counter = 1 ; counter <= (width - (height / 2) + spaces - 1) ; ++counter)
        {
            printf("  ");
        }
        printf("%c \n",symbol);

        if(currentRow < midOfPattern)
        {
            ++spaces;
        }
        else if(currentRow > midOfPattern)
        {
            --spaces;
        }
    }
    return 0;
}
