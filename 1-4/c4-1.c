#include <stdio.h>
#include  <math.h>                       // ������Ҫ������ƽ��������sqrt  
int main ( ) 
 {double a,b,c,disc,x1,x2,p,q;           // disc���б�ʽsqrt(b*b-4ac)  
  scanf("%lf%lf%lf",&a,&b,&c);           // ����˫���ȸ����ͱ�����ֵҪ�ø�ʽ����"%lf"  
  disc=b*b-4*a*c;
  if (disc<0) printf("This equation hav't real roots\n");
  else
  { p=-b/(2.0*a);
    q=sqrt(disc)/(2.0*a);
    x1=p+q;x2=p-q;                        // ������̵�������  
    printf("real roots:\nx1=%10.6f\nx2=%10.6f\n",x1,x2);        // ������̵�������  
  }
  return 0;
}


