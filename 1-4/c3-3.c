#include <stdio.h>
int main ( )
{
  char c1,c2;
  c1='A';                         // ���ַ�'A'��ASCII����ŵ�c1������
  c2=c1+32;	                      // �õ��ַ�'a'��ASCII���룬����c2������ 
  printf("%c\n",c2);              // ���c2��ֵ����һ���ַ�
  printf("%d\n",c2);              // ���c2��ֵ�����ַ�'a'��ASCII����
  return 0;
}
