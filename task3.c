#include<stdio.h>
#include <math.h>

int main()
{
    int x1 , y1 , x2 , y2 ;
    float result,xdif,ydif;
    scanf ("%d",&x1);
    
    scanf ("%d",&y1);
    
    scanf ("%d",&x2);
    
    scanf ("%d",&y2);
    xdif = x1 - x2;
    ydif = y1 - y2;
    result = sqrt(pow(xdif,2) + pow(ydif,2));
    printf("distance = %f",result);
    return 0;
}