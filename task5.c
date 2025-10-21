#include<stdio.h>

int main()
{
int x , y ;
    scanf("%d",&x);
    scanf("%d",&y);
    if (x>y)
    {
    if (x%y == 0)
    {
    printf("yes");
    }
    else
    {
    printf("no");
    }
    
    }
    else
    {
    if (y%x == 0)
    {
    printf("yes");
    }
    else
    {
    printf("no");
    }
    
    }
    return 0;
}