#include <stdio.h>
//int main()
//{ int a=100,b=10;                            // �������ͱ���a,b������ʼ��
//  int *pointer_1, *pointer_2;                // ����ָ���������ݵ�ָ�����pointer_1, pointer_2
//  pointer_1=&a;                              // �ѱ���a�ĵ�ַ����ָ�����pointer_1
//  pointer_2=&b;                              // �ѱ���b�ĵ�ַ����ָ�����pointer_2 
//  printf("a=%d,b=%d\n",a,b);                 // �������a��b��ֵ
//  printf("*pointer_1=%d,*pointer_2=%d\n",*pointer_1,*pointer_2);     //
//  return 0;
//}

int main()
{
	float test1 = 1;
	float *p ;
	p = &test1;
	printf("�����ǣ�%f\n",test1);
	printf("ָ��ָ��ĵ�ַ��%d\n",p);
	printf("�����ǣ�%f\n",*p);
	while(1);
}
