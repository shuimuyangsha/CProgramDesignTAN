#include <stdio.h>
#include <math.h>
#define M 1000
int main()
{
  int i,k;                                      
  printf("������һ��С��%d������i:",M);
  scanf("%d",&i);
  while (i>M) 
  {printf("�������������Ҫ������������һ��С��%d������i:",M);
   scanf("%d",&i);
  }
  k=sqrt(i);
  printf("%d��ƽ���������������ǣ�%d\n",i,k);
  return 0;
}
   
  
