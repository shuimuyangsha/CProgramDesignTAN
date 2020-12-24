#include <stdio.h>
#define swap(a,b)t=b;b=a;a=t
int main()
{
  int a,b,t;
  printf("input two integer a,b:");
  scanf("%d,%d",&a,&b);
  swap(a,b);
  printf("Now,a=%d,b=%d\n",a,b);
  return 0;
 }