#include <stdio.h>
#include <string.h>
#define LA 4
#define LB 5
struct  student
  {int num;
   char name[8];
   struct student *next;
  } a[LA],b[LB];

int main()
{struct student a[LA]={{101,"Wang"},{102,"Li"},{105,"Zhang"},{106,"Wei"}};
 struct student b[LB]={{103,"Zhang"},{104,"Ma"},{105,"Chen"},{107,"Guo"},{108,"lui"}};
 int  i;
 struct student *p,*p1,*p2,*head1,*head2;

 head1=a;
 head2=b;
 printf(" list A:  \n");
  for (p1=head1,i=1;i<=LA;i++)
    {if(i<LA) p1->next=a+i;
	 else p1->next=NULL;
     printf("%4d%8s\n",p1->num,p1->name);
     if(i<LA) p1=p1->next;
	}
  printf("\n list B:\n");
  for (p2=head2,i=1;i<=LB;i++)
    {if (i<LB) p2->next=b+i;
	 else p2->next=NULL;
     printf("%4d%8s\n",p2->num,p2->name);
     if (i<LB) p2=p2->next;
    }

  p1=head1;
  while(p1!=NULL)
    {p2=head2;
     while ((p1->num != p2->num) && (p2->next!=NULL))
	   p2=p2->next;
	 if (p1->num == p2->num)
       {if (p1==head1)
	      head1=p1->next;
	    else
          {p->next=p1->next;p1=p1->next;}
       }
	 else 
		{p=p1;p1=p1->next;}
	 }

  printf("\nresult:\n");
  p1=head1;
  while(p1!=NULL)
    {printf("%4d %7s  \n",p1->num,p1->name);
     p1=p1->next;
    }
  return 0;
}
