#include <stdio.h>

int main()
{
	extern void enter_string(char str[]);
	extern void delete_string(char str[],char ch);
	extern void print_string(char str[]);
	// ����3�������ڱ������н�Ҫ���õ����������ļ��ж����3������
	char c,str[80];

	enter_string(str);                 // �����������ļ��ж����enter_string����
	scanf("%c",&c);
	delete_string(str,c);               // �����������ļ��ж����delete_string���� 
	print_string(str);                  // �����������ļ��ж����print_string����
	
	return 0;     
}
