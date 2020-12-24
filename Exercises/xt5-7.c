#include <stdio.h>
int main()
 {
  int n1=100,n2=50,n3=10;
  double k,s1=0,s2=0,s3=0;
  for (k=1;k<=n1;k++)  /*计算1到100的和*/
    {s1=s1+k;}
  for (k=1;k<=n2;k++)  /*计算1到50各数的平方和*/
    {s2=s2+k*k;}
  for (k=1;k<=n3;k++)  /*计算1到10的各倒数和*/
    {s3=s3+1/k;}
  printf("sum=%15.6f\n",s1+s2+s3);
  return 0;
 }