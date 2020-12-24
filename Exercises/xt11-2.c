#include <stdio.h>
#define SURPLUS(a,b)((a)%(b))
int main()
{
  int a,b;
  printf("input two integer a,b:");
  scanf("%d,%d",&a,&b);
  printf("remainder is %d\n",SURPLUS(a,b));
  return 0;
 }