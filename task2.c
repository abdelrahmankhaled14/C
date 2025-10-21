#include<stdio.h>

int main()
{
int years ,weeks,days;
int x;
for (;;)
{
scanf("%d",&x);
years = x/365;
weeks = (x%365)/7;
days  = (x%365)%7;
    printf("%d:%d:%d \n",years,weeks,days);
}
    return 0;
}