#include <stdio.h>
int main()
 {char a[]="I am a boy.",b[20],*p1,*p2;
  p1=a;p2=b;                                   // p1,p2�ֱ�ָ��a�����b�����еĵ�һ��Ԫ��
  for(;*p1!='\0';p1++,p2++)
     *p2=*p1;                                  // ��p1��ָ���Ԫ�ص�ֵ����p2��ָ���Ԫ��
  *p2='\0';                                    // �ڸ�����ȫ����Ч�ַ����'\0'
  printf("string a is:%s\n",a);                // ���a�����е��ַ�
  printf("string b is:%s\n",b);                // ���b�����е��ַ�
  return 0;
}
