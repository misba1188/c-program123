#include<stdio.h>
int main()
{
int num1,num2,num3,flag_var,i,j;
printf("Enter two ranges\n");
scanf("%d%d",&num1,&num2);
printf("Prime numbers from %d to %d are\n",num1,num2);
for(i=num1+1;i<num2;++i)
{
flag_var=0;
for(j=2;j<=i/2;++j)
{
if(i%j==0)
{ 
flag_var=1;
break;
}
}
if(flag_var==0)
printf("%d\t",i);
}
return(0);
}
