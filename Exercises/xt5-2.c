#include <stdio.h>
#include <math.h>                  // �������õ���ѧ����fabs��Ӧ����ͷ�ļ�math.n
int main()
{
  int sign=1,count=0;              // sign������ʾ��ֵ�ķ���,count����ͳ��ѭ������
  double pi=0.0,n=1.0,term=1.0;    // pi��ʼ�������ʽ��ֵ��������е�ֵ, n�����ĸ��term����ǰ���ֵ
  while(fabs(term)>=1e-8)          // ��鵱ǰ��term�ľ���ֵ�Ƿ���ڻ����10��(-6)�η�
  {
   pi=pi+term;                     // �ѵ�ǰ��term�ۼӵ�pi��
   n=n+2;                          // n+2����һ��ķ�ĸ 
   sign=-sign;                     // sign������ţ���һ��ķ�������һ������෴
   term=sign/n;                    // �����һ���ֵterm
   count++;                        // count�ۼ�1
  }
  pi=pi*4;                         // ����ʽ�ĺ�pi����4�����ǦеĽ���ֵ
  printf("pi=%10.8f\n",pi);        // ����еĽ���ֵ  
  printf("count=%d\n",count);      // ���ѭ������
  return 0;
}
