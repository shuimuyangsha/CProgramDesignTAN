#include <stdio.h>
#include <math.h>
int main ( )
 {
   double a,b,c,s,area;                       // �������������Ϊdouble�� 
   a=3.67;                                    // �Ա߳�a��ֵ 
   b=5.43;                                    // �Ա߳�b��ֵ 
   c=6.21;                                    // �Ա߳�c��ֵ  
   s=(a+b+c)/2;	                              // ����s 
   area=sqrt(s*(s-a)*(s-b)*(s-c));            // ����area 
   printf("a=%f\tb=%f\t%f\n",a,b,c);          // �������a,b,c��ֵ 
   printf("area=%f\n",area);                  // ������area��ֵ
   return 0;
 }  

