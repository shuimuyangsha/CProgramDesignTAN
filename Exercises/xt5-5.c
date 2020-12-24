#include <stdio.h>
int main()
 {
  int  a,n,i=1,sn=0,tn=0;
  printf("a,n=:");
  scanf("%d,%d",&a,&n);
  while (i<=n)
  {
  tn=tn+a;  /*赋值后的tn为i个 a组成数的值*/
  sn=sn+tn; /*赋值后的sn为多项式前i项之和*/
  a=a*10;
  ++i;
  }
  printf("a+aa+aaa+...=%d\n",sn);
  return 0;
  }