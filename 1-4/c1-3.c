#include <stdio.h>
int main( )                          // ����������
{                                    // �������忪ʼ
 int max(int x,int y);              // �Ա����ú���max������ 
 int a,b,c;                          // �������a��b��c
 scanf("%d,%d",&a,&b);               // �������a��b��ֵ
 c = max(a,b);                     // ����max���������õ���ֵ����c 
 printf("max=%d\n",c);               // ���c��ֵ
 return 0;                           // ���غ���ֵΪ0
}

int max(int x,int y)               //����max����,����ֵΪ����, ��ʽ����x��yΪ���� 
{
 int z;                             // max�����е��������֣����屾�������õ��ı���zΪ���� 
 if (x > y) z = x;
 else z = y;
 return(z);                        //��z��ֵ���أ�ͨ��max���ص����ú�����λ��
}
