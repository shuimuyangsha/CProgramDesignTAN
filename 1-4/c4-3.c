#include <stdio.h>
int main()
{
   float a,b,c,t;
   scanf("%f,%f,%f",&a,&b,&c);
   if(a>b)
   {
     t=a;
     a=b;
     b=t;
   }                            // ʵ��a��b�Ļ��� 
   if(a>c)
   {
     t=a;
     a=c;
     c=t;
   }                           // ʵ��a��c�Ļ��� 
   if(b>c)
   {
     t=b;
     b=c;
     c=t;
   }                           // ʵ��b��c�Ļ��� 
   printf("%5.2f,%5.2f,%5.2f\n",a,b,c);
   return 0;
}




