#include <stdio.h>
int main()
 {float score[ ][4]={{60,70,80,90},{56,89,67,88},{34,78,90,66}};   //�������飬��ųɼ�
  float  *search(float (*pointer)[4]);                      // ��������
  float  *p;
  int i,j;
  for(i=0;i<3;i++)
     {p=search(score+i);                                    //����search����,���в����񷵻�score[i][0]�ĵ�ַ�����򷵻�NULL��
      if(p==*(score+i))                                     //������ص���score[i][0]�ĵ�ַ
        {printf("No.%d score:",i);
		 for(j=0;j<4;j++)
            printf("%5.2f  ",*(p+j));                       // ���score[i][0]��score[i][3]��ֵ
         printf("\n");
        } 
     }
  return 0;
}

float *search(float (*pointer)[4])                            // ���庯�����β�pointer��ָ��һά�����ָ�����
  {int i=0;
   float *pt;
   pt=NULL;                                                   // ��ʹpt��ֵΪNULL
   for(;i<4;i++)
     if(*(*pointer+i)<60) pt=*pointer;                        // ����в�����γ̣�ʹptָ��score[i][0] 
   return(pt);
}
