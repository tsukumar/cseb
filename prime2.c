#include<stdio.h>
void main()
{
int a,b,c,d,count,sum=0;
printf("Enter the start point");
scanf("%d",&c);
printf("Enter the end point");
scanf("%d",&d);
for(a=c;a<d;a++)
{
count=0;
for(b=1;b<=a;b++)
{
if(a%b==0)
{
count++;
}
}
if(count==2)
{
printf("%d\t",a);
}
}
}
