#include <stdio.h>
int main()
 {
  int  p,r,n,m,temp;
  printf("请输入两个正整数n,m:");
  scanf("%d,%d,",&n,&m);
  if (n<m)
   {
    temp=n;
    n=m;
    m=temp;
   }
  p=n*m;
  while(m!=0)
   {
    r=n%m;
    n=m;
    m=r;
   }
  printf("它们的最大公约数为:%d\n",n);
  printf("它们的最小公约数为:%d\n",p/n);
  return 0;
 }
