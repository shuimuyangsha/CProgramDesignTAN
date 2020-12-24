#include <stdio.h>
int main()
 {
  int i,j,k,n;
  printf("parcissus numbers are ");
  for (n=100;n<1000;n++)
   {
    i=n/100;
    j=n/10-i*10;
    k=n%10;
    if (n==i*i*i + j*j*j + k*k*k)
      printf("%d ",n);
   }
  printf("\n");
  return 0;
  }