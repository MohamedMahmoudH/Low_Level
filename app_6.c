/*
Given the number of seconds since midnight (ie: 12 AM or 00:00:00) and circle shaped watch,
print angles formed by the watch hours, minutes, and seconds hands (in ”clockwise direction”)
with the vertical line passing through the center of the watch and the digit ”12”. Assume that
angles between every two successive digits are equal. In addition, the watch is designed such
that the hands can only point to integer values positions on the watch dial (ie: integers form
1-12 for hours and 1-60 for minutes and seconds).
Example:
Input seconds since midnight = 8614
Corresponding digital time (HH:MM:SS) = 02:23:34
Outputs:
Hours hand angle = 60
Minutes hand angle = 138
Seconds hand angle = 204
*/

#include <stdio.h>

/*20 min*/

void main(void)
{
    int timeInSec = 0;
    int hours     = 0;
    int min       = 0;
    int sec       = 0;

    int sec_angle   = 0;
    int min_angle   = 0;
    int hours_angle = 0;


    printf("enter time from midnight in sec : ");
    scanf ("%d",&timeInSec);

    sec   =   ( timeInSec % 3600 ) % 60 ;
    min   = ( ( timeInSec % 3600 ) - sec ) / 60 ;
    hours = ( timeInSec - ( timeInSec % 3600 )) / 3600 ;

    sec_angle   = 6  * sec  ; // when 5 sec  : 30°
    min_angle   = 6  * min  ; // when 5 min  : 30°
    hours_angle = 30 * hours; // when 1 hour : 30°

    printf("Corresponding digital time (%d:%d:%d)\n" , hours , min , sec );
    printf("Hours hand angle %d degree\n"  , hours_angle);
    printf("minutes hand angle %d degree\n", min_angle  );
    printf("seconds hand angle %d degree\n", sec_angle  );

    return 0;
}
