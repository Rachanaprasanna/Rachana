#include<stdio.h>
void main()
{
int a=2,b=1,c=3,d=4,e=5,f=6,g=7,h=8,i=9,temp;
printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",a,b,c,d,e,f,g,h,i);
//scanf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d",&a,&b,&c,&d,&e,&f,&g,&h,&i);
temp=a;
a=b;
b=temp;
printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d",a,b,c,d,e,f,g,h,i);
}

