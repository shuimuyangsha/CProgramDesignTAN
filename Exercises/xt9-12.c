#include <stdio.h>
#include <malloc.h>
#define LEN sizeof(struct  student)
struct  student
{  char num[6];
   char name[8];
   char sex[2];
   int age;
   struct student *next;
} stu[10];

int main()
{ struct student *p,*pt,*head;
  int i,length,iage,flag=1;
  int find=0;            //找到待删除元素 find=1,否则find=0
  while (flag==1)
   {printf("input length of list(<10):");
    scanf("%d",&length);
    if (length<10)
      flag=0;
   }

    //建立链表 
  for (i=0;i<length;i++)
     {p=(struct student *) malloc(LEN);
      if (i==0)
	    head=pt=p;
      else
	    pt->next=p;
      pt=p;
      printf("NO.:");
      scanf("%s",p->num);
      printf("name:");
      scanf("%s",p->name);
      printf("sex:");
      scanf("%s",p->sex);
      printf("age:");
      scanf("%d",&p->age);
    }
  p->next=NULL;
  p=head;
  printf("\n NO.    name    sex  age\n");      //显示  
  while(p!=NULL)
     {printf("%4s%8s%6s%6d\n",p->num,p->name,p->sex,p->age);
      p=p->next;
     }

    //  删除  
  printf("input age:");          //输入待删年龄  
  scanf("%d",&iage);
  pt=head;
  p=pt;
  if (pt->age==iage)           //链头是待删元素
    {p=pt->next;
     head=pt=p;
     find=1;
    }
  else                        //链头不是待删元素
    pt=pt->next;
  while (pt!=NULL)
    {if (pt->age==iage)
      {p->next=pt->next;
       find=1;
      }
     else                      // 中间结点不是待删元素
       p=pt;
     pt=pt->next;
    }
  if (!find)
    printf(" not found  %d.",iage);

  p=head;
  printf("\n NO.    name    sex  age\n"); //显示结果
  while (p!=NULL)
    {printf("%4s%8s",p->num,p->name);
     printf("%6s%6d\n",p->sex,p->age);
     p=p->next;
    }
  return 0;
 }
