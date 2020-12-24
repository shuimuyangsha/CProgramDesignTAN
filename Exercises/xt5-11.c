#include <stdio.h> 
int main()
 {
  double sn=100,hn=sn/2;
  int n;
  for (n=2;n<=10;n++)
   {
   sn=sn+2*hn;   /*第n次落地时共经过的米数*/
   hn=hn/2;      /*第n次反跳高度*/
   }
   printf("第10次落地时共经过%f米\n",sn);
   printf("第10次反弹%f米\n",hn);
   return 0;
   }