#include <stdio.h>
int a=3,b=5;                 // a,b��ȫ�ֱ���

int main()
{
	int max(int a,int b);       // ����������a,b���β�
	int a=8;                    // a�Ǿ־ֲ�����  
	printf("max=%d\n",max(a,b));    // ����a�Ǻ����ж���ľֲ�����a
	return 0;
} 

int max(int a,int b)         // a,b�Ǻ����β�        
{
	int c;
	c=a>b?a:b;                  // ��a��b�еĴ��ߴ����c�� 
	return(c);
}
