#include <stdio.h>
int main()
{
  char c1,c2;                                     //����Ϊ�ַ��� 
  int i1,i2;                                      //����Ϊ���� 
  printf("��������������i1,i2:");
  scanf("%d,%d",&i1,&i2);
  c1=i1;                                         //��������ֵ���ַ����� 
  c2=i2;
  printf("���ַ�������:\n");
  printf("%c,%c\n",c1,c2);
  printf("������������:\n");
  printf("%d,%d\n",c1,c2);
  return 0;
}