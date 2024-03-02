/*
write a C program that computes and prints the angle between
two input vectors.
*/

#include <stdio.h>
#include <math.h>

#define PI 3.1415926535

int main()
{
    float ax = 0;
    float ay = 0;
    float bx = 0;
    float by = 0;

    float mag_a      = 0;
    float mag_b      = 0;
    float dot_ab     = 0;
    float cos_angel  = 0;

    printf("enter the value of a in x-axis : ");
    scanf ("%f",&ax);
    printf("enter the value of a in y-axis : ");
    scanf ("%f",&ay);
    printf("enter the value of b in x-axis : ");
    scanf ("%f",&bx);
    printf("enter the value of b in y-axis : ");
    scanf ("%f",&by);

    mag_a  = sqrt(pow(ax,2)+pow(ay,2));
    mag_b  = sqrt(pow(bx,2)+pow(by,2));
    dot_ab = ax*bx + ay*by ;

    cos_angel=(dot_ab) / (mag_a * mag_b);

    printf("the angle between two input vectors is : %f ",
           acos(cos_angel)*(180/PI));
    return 0;
}
