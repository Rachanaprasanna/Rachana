#include<stdio.h>
void main()
{
int a[8]={1,2,3,2,3,4,5,6};
for(int i=0;i<8;i++)
{
    for(int j=i+1;j<8;j++)
    {
    if(a[i]==a[j])
    printf("%d",a[j]);
    }}}




















