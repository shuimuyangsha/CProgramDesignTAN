#include <stdio.h>
int main()
{ void swap(int *p1,int *p2);
 int n1,n2,n3;
 int *p1,*p2,*p3;
 printf("input three integer n1,n2,n3:");
 scanf("%d,%d,%d",&n1,&n2,&n3);
 p1=&n1;
 p2=&n2;
 p3=&n3;
 if(n1>n2) swap(p1,p2);
 if(n1>n3) swap(p1,p3);
 if(n2>n3) swap(p2,p3);
 printf("Now,the order is:%d,%d,%d\n",n1,n2,n3);
 return 0;
 }

 void swap(int *p1,int *p2)
  {int p;
   p=*p1; *p1=*p2; *p2=p;
  }

