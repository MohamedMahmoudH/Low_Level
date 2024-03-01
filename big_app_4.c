/*
Write a code to determine whether a point lies inside a circle or not. Given, the
circle radius and the coordinates of its center. If the point lies outside the circle
Input: circle radius, circle center coordinates, a point.
Display: Point lies outside the circle, Point lies within the circle.
*/





#include <stdio.h>
#include <math.h>

/*  125 min  */

int main()
{
    float radius  = 0 ;
    float xc      = 0 ;//x coordinate of center of circle
    float yc      = 0 ;//y coordinate of center of circle
    float real_xp = 0 ;//x coordinate of the point
    float real_yp = 0 ;//y coordinate of the point



    printf("enter cicle radius : ");
    scanf ("%f",&radius);
    printf("enter the x coordinate of center of circle : ");
    scanf ("%f",&xc);
    printf("enter the y coordinate of center of circle : ");
    scanf ("%f",&yc);
    printf("enter the x coordinate of the point : ");
    scanf ("%f",&real_xp);
    printf("enter the y coordinate of the point : ");
    scanf ("%f",&real_yp);

    /*
    -----------------------------------------------------------------------------------------------------
    i get an idea to know if the point within the circle or not
    that with campare the point with another two axises "comparing axises"


    if we set circle equ like that we will never get variable value
    circle equ : (x-xc)^2 + (y-yc)^2 = (radius)^2
    so i will shift every thing to make circle center = ( 0 , 0 )
    now equ of pseudo_circle will be : (pseudo_x)^2 + (pseudo_y)^2 = (radius)^2


    first comparing axis is a shifted y-axis :: pseudo same as real
    1- we will substitute in equation of pseudo_circle with pseudo_xp
    2- and we will get pseudo_y_maximum and pseudo_y_minimum

    second comparing axis is a shifted x-axis :: pseudo same as real
    1- we will substitute in equation of pseudo_circle with pseudo_yp
    2- then we have pseudo_x_maximum and pseudo_x_minimum

    then i will compare pseudo_xp with pseudo_x_max and pseudo_x_min
            and compare pseudo_yp with pseudo_y_max and pseudo_y_min
    -----------------------------------------------------------------------------------------------------
    */

    float pseudo_xp      = real_xp - xc ;
    float pseudo_yp      = real_yp - yc ;

    float pseudo_x_max   = 0 ;
    float pseudo_x_min   = 0 ;
    float pseudo_y_max   = 0 ;
    float pseudo_y_min   = 0 ;

    /*
    first : to get y_max and y_min i will subs pseudo_x = pseudo_xp
    at the equ of pseudo_circle [ (pseudo_x)^2 + (pseudo_y)^2 = (radius)^2 ]and get y


    note : if the point is outside the circle
              the value inside sqrt() will be a negative value
           so i will use if condition
    */


    if(((pow(radius,2))-(pow(pseudo_xp,2))) >= 0 )
    {
        if(((pow(radius,2))-(pow(pseudo_yp,2))) >= 0 )
        {
            /*now we filtered all points that outside the square that the circle is tangent with it from inside
            that point outside this square will set an invalid mathematic equation "sqrt(-ve)" so we vanish them at previous if */

            pseudo_y_max = sqrt((pow(radius,2))-(pow(pseudo_xp,2)));
            pseudo_y_min = - pseudo_y_max ;

            pseudo_x_max = sqrt((pow(radius,2))-(pow(pseudo_yp,2)));
            pseudo_x_min = - pseudo_x_max;

            /*
            comparing pseudo_yp with pseudo_y_max and pseudo_y_min same as
            comparing real_yp   with real_y_max   and real_y_min
            so we can use pseudo instead of converting all to real
            */

            if (( pseudo_xp <= pseudo_x_max )&&(pseudo_xp >= pseudo_x_min ))
                {
                    if(( pseudo_yp <= pseudo_y_max )&&(pseudo_yp >= pseudo_y_min ))
                    {
                        printf("Point lies within the circle");
                    }
                    else
                    {
                         printf("Point lies outside the circle");
                    }
                }
                else
                {
                     printf("Point lies outside the circle");
                }


        }
        else
        {
            printf("Point lies outside the circle");
        }
    }
    else
    {
        printf("Point lies outside the circle");
    }

    return 0;

}


/*
    ********************** chatgpt comments on my code ************************

    
The code you provided aims to determine whether a given point lies inside or outside a circle. It utilizes a mathematical approach to determine
this without explicitly calculating the distance between the point and the center of the circle.

Here's a review of your code:

The input is taken for the radius of the circle, the coordinates of the circle center, and the coordinates of the point.
The code then shifts the coordinates to make the center of the circle the origin (0, 0) to simplify the calculations.
It calculates the maximum and minimum possible values for the pseudo-coordinates of the point based on the circle's equation.
It then checks if the pseudo-coordinates of the point fall within the range determined by the circle's equation.
Here are some suggestions and potential issues with the code:

Variable naming: The variable names are descriptive, which is good for readability.

Error handling: The code handles situations where the point lies outside the circle's equation (where the value inside sqrt() becomes negative),
which is essential for avoiding invalid calculations.

Efficiency: The approach is quite efficient in terms of computation. However, it may be a bit complex compared to directly calculating
the distance between the point and the center and comparing it with the radius.

Accuracy: The code seems accurate in determining whether the point lies inside or outside the circle. However,
    there might be a problem with how it handles points lying exactly on the circle's boundary, depending on how floating-point errors are treated.

Readability: The code is a bit lengthy due to the detailed comments explaining the approach, but this can be beneficial for understanding the logic.

Overall, the code appears to effectively determine whether a given point lies inside or outside a circle based on the provided
radius and center coordinates. It's a unique approach that avoids explicitly calculating the distance between the point and the circle's center.
*/
