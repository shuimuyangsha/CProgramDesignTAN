#include <stdio.h>
struct student
{long num;
 float score;
 struct student*next;
};    
int n;   
  
struct student *insert(struct student *head,struct student *stud)
{struct student *p0,*p1,*p2;
 p1=head;                          //ʹ��ָ���һ�����
 p0=stud;                          //ָ��Ҫ����Ľ��
 if(head==NULL)                    //ԭ���������ǿձ�
   {head=p0;p0->next=NULL;}          //ʹ��ָ��Ľ����Ϊͷ���
 else
   {while((p0->num>p1->num) && (p1->next!=NULL))
      {p2=p1;                           //ʹ��ָ��ղ�p��ָ��Ľ��
       p1=p1->next;
      }                    //p1����һ�����
    if(p0->num<=p1->num)
      {if(head==p1) head=p0;           //�嵽ԭ����һ�����֮ǰ
       else p2->next=p0;               //�嵽p2ָ��Ľ��֮�� 
       p0->next=p1;
	  }
    else
	  {p1->next=p0; 
	   p0->next=NULL;                  //�嵽���Ľ��֮��
      }
   }
  n=n+1;                         //������ӣ�
  return (head);
}
