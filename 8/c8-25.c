#include <stdio.h>
int main()
 {float score[ ][4]={{60,70,80,90},{56,89,67,88},{34,78,90,66}};   //�������飬��ųɼ�
  float  *search(float (*pointer)[4],int n);                       // ��������
  float  *p;
  int i,k;
  printf("enter the number of student:");
  scanf("%d",&k);                                                  // ����Ҫ�ҵ�ѧ�������
  printf("The scores of No.%d are:\n",k);
  p=search(score,k);                                    //����search����������score[k][0]�ĵ�ַ
  for(i=0;i<4;i++)
    printf("%5.2f\t",*(p+i));                           // ���score[k][0]��score[k][3]��ֵ
  printf("\n");
  return 0;
}

float *search(float (*pointer)[4],int n)               // ���庯�����β�pointer��ָ��һά�����ָ�����
  {float *pt;
   pt=*(pointer+n);                                    // pt��ֵ��&score[k][0]
   return(pt);
}
