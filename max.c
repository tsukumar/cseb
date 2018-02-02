#include<stdio.h>
#include<conio.h>
void main()
{
  int i,a[100],max,no;
  printf("\n Enter the no of element=");
  scanf("%d",&n);
  printf("\n Enter the elements=");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  max=a[0];
  for(i=0;i<n;i++)
  {
    if(a[i]>max)
    {
      max=a[i];
      no=a[i];
    }
  }
  printf("\n The greatest no is=%d",no);
  getch();
}
© 2018 GitHub, Inc.
