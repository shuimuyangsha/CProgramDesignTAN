#include <stdio.h>
int main()
 {int max(int,int);
  int (*p)(int,int);                           // ����ָ������ָ�����p
  int a,b,c;
  p=max;                                       // ʹpָ��max����
  printf("please enter a and b:");
  scanf("%d,%d",&a,&b);
  c=(*p)(a,b);                                 // ͨ��ָ���������max����
  printf("a=%d\nb=%d\nmax=%d\n",a,b,c);
  return 0;
}

int max(int x,int y)                            // ����max����
  {int z;
   if(x>y)  z=x;
   else     z=y;
   return(z);
  }
