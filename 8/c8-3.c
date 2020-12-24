#include <stdio.h>
//int main()
// {void swap(int *p1,int *p2);
//  int a,b;
//  int*pointer_1,*pointer_2;
//  printf("please enter a and b:");
//  scanf("%d,%d",&a,&b);
//  pointer_1=&a;
//  pointer_2=&b;
//  if(a<b) swap(pointer_1,pointer_2);
//  printf("max=%d,min=%d\n",a,b);
//  return 0;
// }    
//
//void swap(int *p1,int *p2)
// {int temp;
//  temp=*p1;
//  *p1=*p2;
//  *p2=temp;
//}
void swap(int * pointer1,int * pointer2);
int main()
{
	int num1,num2;
	int *p1,* p2;
	while(1)
	{
		printf("请输入两个整数\n");
		scanf("%d,%d",&num1,&num2);
		p1 = &num1;
		p2 = &num2;
		if(num1 < num2)
			;
		printf("max=%d,min=%d\n",num1,num2);

		while(gets() == " " );
	}
}

void swap(int * pointer1,int * pointer2)
{
	int temp;
	temp = * pointer1;
	* pointer1 = * pointer2;
	* pointer2 = temp;
}
