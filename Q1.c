#include<stdio.h>
void main()
{
int a,b;
printf("enter the number");
scanf("%d",&a);
if(b=a%11==0||(a%11==1&&a>11))
{

    printf("SPECIAL");
}
else
{
  printf("NOT SPECIAL");
}
}
