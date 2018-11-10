#include<stdio.h>
int main()
{
int n,array[1000],c,d,t;
printf("enter number of element\n");
scanf("%d",&n);
printf("enter %d integers\n",n); 
for(c=0;c<n;c++)
{
scanf("%d",&array[c]);
}
for(c=1;c<=n-1;c++)
{
d=c;
while(d>0 &&array[d-1]>array[d])
{
t=array[d];
array[d]=array[d-1];
array[d-1]=t;
d--;
}
}
printf("sorted list in asscending order:\n");
for(c=0;c<=n-1;c++)
{
printf("%d\n",array[c]);
}
return 0;
}
