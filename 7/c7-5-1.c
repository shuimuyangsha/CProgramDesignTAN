#include <stdio.h>
int main()
{ int max4(int a,int b,int c,int d);            // ��max4�ĺ�������
  int a,b,c,d,max;
  printf("Please enter 4 interger numbers:");    // ��ʾ����4����
  scanf("%d %d %d %d",&a,&b,&c,&d);              // ����4����
  max=max4(a,b,c,d);                            // ����max4�������õ�4�����е������
  printf("max=%d \n",max);                       // ���4�����е������  
  return 0;
} 

int max4(int a,int b,int c,int d)   // ����max4���� 
{int max2(int a,int b);             // ��max2�ĺ�������
 int m; 
 m=max2(a,b);                      // ����max2�������õ�a��b�������еĴ��ߣ�����m��
 m=max2(m,c);                      // ����max2�������õ�a,b,c�������еĴ��ߣ�����m��                         
 m=max2(m,d);                      // ����max2�������õ�a,b,c,d�ĸ����еĴ��ߣ�����m��           
 return(m);                         // ��m��Ϊ����ֵ����main����
}

int max2(int a,int b)             // ����max2���� 
{if(a>=b)
   return a;                       // ��a>=b����aΪ��������ֵ 
 else 
   return b;                       // ��a<b����bΪ��������ֵ
}