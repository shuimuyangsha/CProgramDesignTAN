#include <stdio.h>
struct student                                  // �����ṹ������struct student  
  {int num;
   float score;
   struct student *next;
  };
int main()
  {struct student a,b,c,*head,*p;               // ����3���ṹ�������Ϊ����Ľ��  
   a. num=10101; a.score=89.5;                  // �Խ��a��num��score��Ա��ֵ  
   b. num=10103; b.score=90;                    // �Խ��b��num��score��Ա��ֵ       
   c. num=10107; c.score=85;                    // �Խ��c��num��score��Ա��ֵ  
   head=&a;                                     // �����a����ʼ��ַ����ͷָ��head  
   a.next=&b;                                   // �����b����ʼ��ַ����a����next��Ա  
   b.next=&c;                                   // �����c����ʼ��ַ����a����next��Ա  
   c.next=NULL;                                 // c����next��Ա�������������ַ  
   p=head;                                      // ʹpҲָ��a���  
   do        
     {printf("%ld %5.1f\n",p->num,p->score);    // ���pָ��Ľ�������  
      p=p->next;                                // ʹpָ����һ���  
	 }while(p!=NULL);                           // �����c����p��ֵΪNULL��ѭ����ֹ  
   return 0;
  }
