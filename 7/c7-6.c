#include <stdio.h>
int main()
{ int age(int n);
  printf("NO.5,age:%d\n",age(5));           //�����5�˵�����
  return 0;
} 

int age(int n)                     //����ݹ麯��    
 {int c;                
  if(n==1)                         // ���n����1
    c=10;                          // ����Ϊ10
  else                             // ���n������1     
    c=age(n-1)+2;                  // ������ǰһ�˵������2(���4�������ǵ�3�������2)
  return(c);                       // ��������
}

