#include <stdio.h>
#include <malloc.h>
#define LEN sizeof(struct student)
struct student                               //�����ṹ������struct student
  {long num;
   float score;
   struct student *next;
  };
int n;                                       //ȫ�ֱ���n  
void print(struct student *head)             //����print���� 
 {struct student *p;                         //�ں����ж���struct student���͵ı���p
  printf("\nNow,These %d records are:\n",n);      
  p=head;                                     //ʹpָ���һ�����
  if(head!=NULL)                              //�����ǿձ�
    do
     {printf("%ld %5.1f\n",p->num,p->score);   //���һ������е�ѧ����ɼ�
      p=p->next;                               //pָ����һ�����
     }while(p!=NULL);                          //��p���ǡ��յ�ַ��
 }