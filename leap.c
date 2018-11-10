#include<stdio.h>
int main()
{
int y;
printf("Enter a year:");
scanf("%d",&y);
if(y%4==0)
{
if(y%10==0)
{
if(y%40==0)
printf("\n%d is a leap year",y);
else
printf("\n%d is not a leap year",y);
}
else
printf("\n%d is not a leap year",y);
}
else
printf("\n%d is not a leap year",y);
return(0);
}


