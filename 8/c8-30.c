#include <stdio.h>
#include <stdlib.h>                     // ����������malloc������Ӧ����stdlib.h
int main()
{ void check(int *);                    // ��������
  int *p1,i;                            // p1��int��ָ��
  p1=(int *)malloc(5*sizeof(int));     // ���ٶ�̬�����ڴ������Ƚ���ַת���� int *�ͣ�Ȼ�����p1��
  for(i=0;i<5;i++) 
     scanf("%d",p1+i);                  // ����5��ѧ���ĳɼ� 
  check(p1);                            // ����check����
  return 0;
}
  
void check(int *p)                      // ����check�������β���int*ָ��
{ int i;
  printf("They are fail:");
  for(i=0;i<5;i++)
   if (p[i]<60) printf("%d ",p[i]);     // ������ϸ�ĳɼ� 
  printf("\n");
}  