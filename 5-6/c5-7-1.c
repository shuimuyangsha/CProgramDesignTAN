#include <stdio.h>
#include<math.h>
int main()
{
  int sign=1;                      // sign������ʾ��ֵ�ķ���
  double pi=0.0,n=1.0,term=1.0;    // pi�����,n�����ĸ��term����ǰ���ֵ
  while(fabs(term)>=1e-8)          // ��鵱ǰ��term�ľ���ֵ�Ƿ���ڻ����10��(-6)�η�
  {
   pi=pi+term;                     // �ѵ�ǰ��term�ۼӵ�pi��
   n=n+2;                          // n+2����һ��ķ�ĸ 
   sign=-sign;                     // sign������ţ���һ��ķ�������һ������෴
   term=sign/n;                    // �����һ���ֵterm
  }
  pi=pi*4;                         // ����ʽ�ĺ�pi����4�����ǦеĽ���ֵ
  printf("pi=%10.8f\n",pi);        // ����еĽ���ֵ  
}
