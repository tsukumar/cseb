#include<stdio.h>
void main()
{
int i,j,a,t,b[50];
printf("enter the array value: ");
scanf("%d",&a);
for(i=0;i<a;i++)
{
scanf("%d",&b[i]);
}
for(i=0;i<a;i++)
{
for(j=i+1;j<a;j++)
{
if(b[i]>b[j])
{
t=b[i];
b[i]=b[j];
b[j]=t;
}
}
}
for(i=0;i<a;i++)
{
printf("\n Sorted array is is %d",b[i]);
}
}
