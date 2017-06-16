#include<stdio.h>
int main()
{
  int a;
  printf("enter the number\n");
  scanf("%d",&a);
  if(a>0)
    printf("no. is positive\n");
  else if(a==0)
    printf("the no. is zero\n");
  else
    printf("the no. is negative\n")
 return 0;
}