#include <stdio.h>
int main()
{
  char c1,c2;                           //�����ַ��ͱ���
  int i1,i2;                            //�������ͱ��� 
  printf("�����������ַ�c1,c2:");
  scanf("%c,%c",&c1,&c2);
  i1=c1;                                //��ֵ�����ͱ��� 
  i2=c2;
  printf("���ַ�������:\n");
  printf("%c,%c\n",i1,i2);
  printf("������������:\n");
  printf("%d,%d\n",c1,c2);
  return 0;
}