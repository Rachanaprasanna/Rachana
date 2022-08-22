#include<stdio.h>
void main()
{
int i,a[]={1,2,3,4,5},small,large;
small=large=a[0];
for(int i=0;i<5;i++)
{
if(small>a[i])
{
small=a[i];
}}
for(int i=0;i<5;i++)
{
if(large<a[i])
{
    large=a[i];
}}
printf("%d\n",small);
printf("%d\n",large);
}
