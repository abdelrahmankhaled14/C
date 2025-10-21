#include<stdio.h>

int main()
{
int hours ,mins,secs;
int x;
for (;;)
{
scanf("%d",&x);
hours = x/3600;
mins = (x%3600)/60;
secs  = (x%3600)%60;
    printf("%d:%d:%d \n",hours,mins,secs);
}
    return 0;
}