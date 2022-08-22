#include<stdio.h>
void main()
{
int n,e;
printf("enter the size");
scanf("%d",&n);
int a[n];
printf("enter the elements");
for(int i=0;i<n;i++)
{
scanf("%d",e);
    a[i]=e;
}
for(int i=n-1;i>=0;i--)
{
    printf("%d",a[i]);
}}
