#include<stdio.h>
int main()
{
int num1,num2,num3;
printf("Enter values for num1,num2,num3");
scanf("%d%d%d",&num1,&num2,&num3);
if((num1>num2)&&(num1>num3))
	printf("\n %d is the greatest",num1);
else if((num2>num1)&&(num2>num3))
	printf("\n %d is the greatest",num2);
else 
	printf("\n %d is the greatest",num3);
return(0);
}





