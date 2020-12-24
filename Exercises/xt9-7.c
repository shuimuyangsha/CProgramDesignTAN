#include <stdio.h>
struct student
{long num;
 float score;
 struct student *next;
};    
int n;

struct student *del(struct student *head,long num)
 {struct student *p1,*p2;
  if (head==NULL)                       // 是空表 
     {printf("\nlist null!\n");
      return(head);
     }
  p1=head;                              //使p1指向第一个结点
  while(num!=p1->num && p1->next!=NULL) //p1指向的不是所要找的结点且后面还有结点 */
     {p2=p1;p1=p1->next;}                // p1后移一个结点
  if(num==p1->num)                       // 找到了 
     {if(p1==head)head=p1->next; //若p1指向的是首结点,把第二个结点地址赋予head */
	  else p2->next=p1->next;    // 否则将下一结点地址赋给前一结点地址 
	  printf("delete:%ld\n",num);
	  n=n-1;
     }
  else printf("%ld not been found!\n",num);    //找不到该结点 
  return(head);
}
