#include <stdio.h>
int main()
{void sort(int x[ ],int n);                       // sort��������
 int i,*p,a[10];
 p=a;                                             // ָ�����pָ��a[0]
 printf("please enter 10 integer numberes:");
 for(i=0;i<10;i++)
   scanf("%d",p++);                               // ����10������
 p=a;                                             // ָ�����p����ָ��a[0]
 sort(p,10);                                      // ����sort����
 for(p=a,i=0;i<10;i++)
   {printf("%d ",*p);                             // ���������10������Ԫ��
    p++;
   }
 printf("\n");
 return 0;
}

void sort(int x[],int n)                           // ����sort������x���β������� 
 {int i,j,k,t;
  for(i=0;i<n-1;i++)
    {k=i;
     for(j=i+1;j<n;j++)
       if(x[j]>x[k]) k=j;
         if(k!=i)
			{t=x[i];x[i]=x[k];x[k]=t;}
    }
 }

