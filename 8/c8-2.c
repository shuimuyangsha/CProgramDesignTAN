#include <stdio.h>
//int main()
// { int *p1,*p2,*p,a,b;
//   printf("please enter two integer numbers:");
//   scanf("%d,%d",&a,&b);                   // ������������
//   p1=&a;                                  // ʹp1ָ�����a
//   p2=&b;                                  // ʹp2ָ�����b 
//   if(a<b)                                 // ���a<b
//   {p=p1;p1=p2;p2=p;}                      // ʹp1��p2��ֵ����
//   printf("a=%d,b=%d\n",a,b);              // ���a,b
//   printf("max=%d,min=%d\n",*p1,*p2);      // ���p1��p2��ָ��ı�����ֵ
//   return 0;
//}
int main()
{
	int num1,num2;
	int * p1,* p2,* p;
	printf("������������������a,b  ���س���������\n");
	scanf("%d,%d",&num1,&num2);
	p1 = &num1;
	p2 = &num2;
	if(num1 < num2)
	{
		p = p1;
		p1 = p2;
		p2 = p;
	}
	printf("num1=%d,num2=%d\n",num1,num2);
	printf("max=%d,min=%d\n",*p1,*p2);
	while(1);
}