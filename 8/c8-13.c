#include <stdio.h>
int main()
 {int a[3][4]={1,3,5,7,9,11,13,15,17,19,21,23};
  int (*p)[4],i,j;                           // ָ�����pָ�����4������Ԫ�ص�һά����
  p=a;                                       // pָ���ά�����0��
  printf("please enter row and colum:");
  scanf("%d,%d",&i,&j);                 // ָ��Ԫ�ص�����
  printf("a[%d,%d]=%d\n",i,j,*(*(p+i)+j));   // ���a[i][j]��ֵ
  return 0;
 }
