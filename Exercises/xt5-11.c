#include <stdio.h> 
int main()
 {
  double sn=100,hn=sn/2;
  int n;
  for (n=2;n<=10;n++)
   {
   sn=sn+2*hn;   /*��n�����ʱ������������*/
   hn=hn/2;      /*��n�η����߶�*/
   }
   printf("��10�����ʱ������%f��\n",sn);
   printf("��10�η���%f��\n",hn);
   return 0;
   }