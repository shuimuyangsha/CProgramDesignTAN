#include <stdio.h>
//int main()
// { int *p1,*p2,*p,a,b;
//   printf("please enter two integer numbers:");
//   scanf("%d,%d",&a,&b);                   // 输入两个整数
//   p1=&a;                                  // 使p1指向变量a
//   p2=&b;                                  // 使p2指向变量b 
//   if(a<b)                                 // 如果a<b
//   {p=p1;p1=p2;p2=p;}                      // 使p1与p2的值互换
//   printf("a=%d,b=%d\n",a,b);              // 输出a,b
//   printf("max=%d,min=%d\n",*p1,*p2);      // 输出p1和p2所指向的变量的值
//   return 0;
//}
int main()
{
	int num1,num2;
	int * p1,* p2,* p;
	printf("请输入两个整数比如a,b  按回车键结束。\n");
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