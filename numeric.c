#include <stdio.h>

void main()
{
  char a[40],s;
  printf("enter the number");
  scanf("%c",&s);
  if(isdigit(s)==0)
  {
    printf("%c is not numeric");
  }
  else
  {
    printf("%c is numeric");
  }
}
