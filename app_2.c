

/*
the problem :
Consider two points P(px,py) , Q(qx,qy) and . We consider the inversion or point
reflection, R(rx,ry) , of point P across point Q to be a 180 degree rotation of point P
around point Q .
Given P (px,py )and Q(qx,qy) Find R(rx,ry)
Input : px,py,qx,qy
Output : rx,ry
Example :
If the user inputs px = 0 , py =0 .
qx =1 , qy =1 then the program shall get rx =2 , ry =2.

*/



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
