#include<stdio.h>
#define MAX(a,b)((a)>(b)?(a):(b))
int main()
{
   int a,b,c;
   printf("input three integer: ");
   scanf("%d,%d,%d",&a,&b,&c);
   printf("max=%d\n",MAX(MAX(a,b),c));
   return 0;
 }