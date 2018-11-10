#include<stdio.h>
int main()
{
int array[1000],n,c,d,t;
printf("Enter the no of elements\n");
scanf("%d",&n);
printf("Enter %d integers\n",n);

for(c=0;c<n;c++)
{
scanf("%d",&array[c]);
}
for(c=1;c<n-1;c++)
d=c;

while(d>0&&array[d-1]>array[d])
{
t=array[d];
array[d+1]=array[d];
array[d]=t;
d--;
}
printf("Sorted list in ascending order:\n");
for(c=0;c<=n-1;c++)
{
printf("%d\n",array[c]);
}
return 0;
}
