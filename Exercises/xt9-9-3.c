#include <stdio.h>
#include <malloc.h>
#define LEN sizeof(struct student)
struct student
  {long num;
   float score;     
   struct student *next;
  };
int n; 

int main()
  {struct student *creat();
   void print(struct student *);	
   struct student *del(struct student *,long);	
   struct student *insert(struct student *, struct student *);
   struct student *head,*stu;
   long del_num;
   printf("input records:\n");
   head=creat();
   print (head);
   printf("input the deleted number:");
   scanf("%ld",&del_num);
   while (del_num!=0)
      {head=del(head,del_num);
   print (head);
   printf ("input the deleted number:");
   scanf("%ld",&del_num);}
   printf("\ninput the inserted record:");
   stu=(struct student *) malloc(LEN);
   scanf("%ld,%f",&stu->num,&stu->score);
   while(stu->num!=0)
     {head=insert(head,stu);
      print(head);      
	  printf("input the inserted record:");
	  stu=(struct student *)malloc(LEN);
	  scanf("%ld,%f",&stu->num,&stu->score);
	 }
   return 0;
}
	 
struct student *creat()
  {struct student *head;
      struct student *p1,*p2;
      n=0;
      p1=p2=( struct student*) malloc(LEN);
      scanf("%ld,%f",&p1->num,&p1->score);
      head=NULL;
      while(p1->num!=0)
       {n=n+1;
	  if(n==1)head=p1;
	  else p2->next=p1;
	  p2=p1;
	  p1=(struct student*)malloc(LEN);
	  scanf("%ld,%f",&p1->num,&p1->score);
	 }
      p2->next=NULL;
      return(head);
}

struct student *del(struct student *head,long num)
   {struct student *p1,*p2;
    if (head==NULL)
      {printf("\nlist null!\n");return(head);}
	   p1=head;
	   while(num!=p1->num && p1->next!=NULL)
         {p2=p1;p1=p1->next;}
          if(num==p1->num)
            {if(p1==head)head=p1->next;
	         else p2->next=p1->next;
	         printf("delete:%ld\n",num);
	         n=n-1;
            }
	      else printf("%ld not been found!\n",num);
	 return(head);
   }

struct student *insert(struct student *head, struct student *stud)
   {struct student *p0,*p1,*p2;
    p1=head;
    p0=stud;
	if(head==NULL)
      {head=p0; p0->next=NULL;}
	else
	{while((p0->num>p1->num) && (p1->next!=NULL))
	   {p2=p1;
	    p1=p1->next;
       }
     if(p0->num<=p1->num)
       {if(head==p1) head=p0;
		else p2->next=p0;
		p0->next=p1;}
     else
        {p1->next=p0; p0->next=NULL;}
	}
	n=n+1;
	return(head);
   }

void print(struct student *head)
    {struct student *p;
	 printf("\nNow,These %d records are:\n",n);  
	 p=head;
	 if(head!=NULL)
	   do
		 {printf("%ld %5.1f\n",p->num,p->score);
	      p=p->next;
		  }while(p!=NULL);
	 }