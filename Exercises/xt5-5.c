#include <stdio.h>
int main()
 {
  int  a,n,i=1,sn=0,tn=0;
  printf("a,n=:");
  scanf("%d,%d",&a,&n);
  while (i<=n)
  {
  tn=tn+a;  /*��ֵ���tnΪi�� a�������ֵ*/
  sn=sn+tn; /*��ֵ���snΪ����ʽǰi��֮��*/
  a=a*10;
  ++i;
  }
  printf("a+aa+aaa+...=%d\n",sn);
  return 0;
  }