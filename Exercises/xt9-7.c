#include <stdio.h>
struct student
{long num;
 float score;
 struct student *next;
};    
int n;

struct student *del(struct student *head,long num)
 {struct student *p1,*p2;
  if (head==NULL)                       // �ǿձ� 
     {printf("\nlist null!\n");
      return(head);
     }
  p1=head;                              //ʹp1ָ���һ�����
  while(num!=p1->num && p1->next!=NULL) //p1ָ��Ĳ�����Ҫ�ҵĽ���Һ��滹�н�� */
     {p2=p1;p1=p1->next;}                // p1����һ�����
  if(num==p1->num)                       // �ҵ��� 
     {if(p1==head)head=p1->next; //��p1ָ������׽��,�ѵڶ�������ַ����head */
	  else p2->next=p1->next;    // ������һ����ַ����ǰһ����ַ 
	  printf("delete:%ld\n",num);
	  n=n-1;
     }
  else printf("%ld not been found!\n",num);    //�Ҳ����ý�� 
  return(head);
}
