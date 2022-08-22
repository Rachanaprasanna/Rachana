#include<stdio.h>
void main()
{
int r,c;
printf("enter the r and c");
scanf("%d\n%d",&r,&c);
int a[r][c],b[r][c],e,el;
printf("enter the elements");
for(int i=0;i<r;i++)
{
for(int j=0;j<c;j++)
{
    scanf("%d\n%d",&e,&el);
    a[i][j]=e;
    b[i][j]=el;
}
}
for(int i=0;i<r;i++)
{
for(int j=0;j<c;j++)
{
if(a[i][j]==b[i][j])
count++;
}
 if(count!=1 && count>n)
{
    printf("elements are equal");
printf("elements are not equal");
}
}}}


