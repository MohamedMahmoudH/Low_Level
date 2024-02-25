#include <stdio.h>
#include <limits.h>


 int main ()
{

    /*%d*/
    printf("%d\n",INT_MAX);
    printf("%d\n",INT_MIN);

    /*%u----------------------*/
    printf("\n\n%d\n",UINT_MAX);
    printf(    "%u\n",UINT_MAX);




    // THERE IS NO printf("%d\n",UINT_MIN);
    /*%d*/
    printf("\n\n%d\n",SHRT_MAX);
    printf(    "%d\n",SHRT_MIN);




    // THERE IS NO printf("%d\n",USHRT_MIN);
    /*%u*/
    printf("\n\n%u\n",USHRT_MAX);
    printf(    "%d\n",USHRT_MAX);




    printf("\n\n%d\n",LONG_MAX);
    printf(    "%d\n",LONG_MIN);
    printf(   "%ld\n",LONG_MAX);
    printf(   "%ld\n",LONG_MIN);





    printf("\n\n%d\n",ULONG_MAX); //WHY THAT PRINT -1
    printf("%u\n",ULONG_MAX);
    printf("%lu\n",ULONG_MAX);



    // THERE IS NO printf("%d\n",ULONG_MIN);
    printf("\n%d\n",USHRT_MAX);
    return 0;
}
