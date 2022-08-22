#include<stdio.h>
void main()
{
int n,e,even=0,odd=0;
printf("enter the elements");
scanf("%d",&n);
int a[n],b[n];
printf("enter the elements of first array");
for(int i=0;i<n;i++)
{
scanf("%d",&e);
a[i]=e;
}
for(int i=0;i<n;i++)
{
if(a[i]%2==0)
even=even+a[i];
else
odd=odd+a[i];
}
printf("%d",even);
printf("%d",odd);
}























































































































