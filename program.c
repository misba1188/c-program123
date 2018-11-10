#include<stdio.h>
int main()
{
int num1,num2,num3;
printf("enter value of num1, num2 and num3:");
scanf("%d%d%d", & num1, & num2, & num3);
if((num1>num2)&&(num1>num3))
printf("\n number 1 is greatest\n");
else if((num2>num3)&&(num2>num1))
printf("\n number 2 is greatest\n");
else
printf("\n number 3 is greatest\n");
return 0;
}
