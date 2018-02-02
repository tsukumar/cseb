#include<stdio.h>
void main()
{
  int i,b[100],min,s,n;
  printf("\n Enter the any number=");
  scanf("%d",&n);
  printf("\n Enter the number=");
  for(i=0;i<n;i++)
  {
    scanf("%d",&b[i]);
  }
  min=b[0];
  for(i=0;i<n;i++)
  {
    if(b[i]<=min)
    {
     min=b[i];
     s=b[i];
    }
  }
  printf("\n The greatest no is=%d",s);
}
