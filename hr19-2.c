#include<stdio.h>
int main()
{
int size,i;
printf("enter the size\n");
scanf("%d",&size);
int a[size];
printf("enter the elements");
for(int i=0;i<size;i++)
{
    scanf("%d",&a[i]);
a[i]=size;
printf("%d %d",size,a[i]);
}}
