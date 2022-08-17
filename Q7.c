#include<stdio.h>
void main()
{
int a,b,c;
printf("enter the numbers");
scanf("%d\n%d\n%d",&a,&b,&c);
if(a>b&&a>c)
{
printf("a is heaviest");
}
else if(b>a&&b>c)
{
printf("b is heaviest");
}
else
printf("c is heaviest");
}
