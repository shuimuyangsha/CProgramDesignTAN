#include<stdio.h>
int main()
{void sort(int **p,int n);
 int i,n,data[20],**p,*pstr[20];
 printf("input n:\n");
 scanf("%d",&n);
 for (i=0;i<n;i++)
   pstr[i]=&data[i];   //将第i个整数的地址赋予指针数组 pstr 的第i个元素  
 printf("input %d integer numbers:",n);
 for (i=0;i<n;i++)
   scanf("%d",pstr[i]);
 p=pstr;
 sort(p,n);
 printf("Now,the sequence is:\n");
 for (i=0;i<n;i++)
   printf("%d  ",*pstr[i]);
 printf("\n");
 return 0;
}
void sort(int **p,int n)
{int i,j,*temp;
 for (i=0;i<n-1;i++)
  {for (j=i+1;j<n;j++)
     {if (**(p+i)>**(p+j))  //比较后交换整数地址 
       {temp=*(p+i);
	*(p+i)=*(p+j);
	*(p+j)=temp;
       }
     }
  }
}