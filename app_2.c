
#include <stdio.h>
/*20 min*/
int main()
{

    int px = 0;
    int py = 0;

    int qx = 0;
    int qy = 0;

    int rx = 0;
    int ry = 0;

    printf("Enter the x coordinates of the point P :  ");
    scanf("%d",&px);
    printf("Enter the y coordinates of the point P :  ");
    scanf("%d",&py);
    printf("Enter the x coordinates of the point q :  ");
    scanf("%d",&qx);
    printf("Enter the y coordinates of the point q :  ");
    scanf("%d",&qy);

    /*when r is reflection point P across point Q
      so   Q in the middle of PR
      so   (qx,qy)=([px+rx]/2,[py+ry]/2)
      so   2qx = px + rx  and  2qy = py + ry */

    rx = 2*qx - px;
    ry = 2*qy - py;

    printf("\npoint R coordinates are ( %d , %d )\n",rx,ry);

    return 0;
}
