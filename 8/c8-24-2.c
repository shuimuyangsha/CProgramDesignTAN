#include <stdio.h>
void main()
 {int max(int,int);
  int min(int,int);
  int add(int,int);
  int fun(int x,int y, int (*p)(int,int));
  int a=34,b=-21,n;
  printf("please choose 1,2 or 3:");
  scanf("%d",&n);
  if (n==1) fun(a,b,max);
  else if (n==2) fun(a,b,min);
  else if (n==3) fun(a,b,add);
 }

int max(int x,int y)
  {int z;
   if(x>y)z=x;
   else z=y;
   printf("max=%d" );
   return(z);
  }

int min(int x,int y)
{int z;
 if(x<y)z=x;
 else z=y;
 printf("min=%d");
 return(z);
}

int add(int x,int y)
{int z;
 z=x+y;
 printf("sum=%d");
 return(z);
}

int fun(int x,int y,int (*p)(int,int))
{int resout; 
 resout=(*p)(x,y);
 printf("%d\n",resout);
 }
