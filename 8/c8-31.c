#include <stdio.h>
#include <stdlib.h>
void main()
{ void check(int *);
  int *p1,i; 
  void *p2;
  p2=malloc(5*sizeof(int));
  p1=(int *)p2;
  for(i=0;i<5;i++)
     scanf("%d",p1+i);
  check(p1); 
  free(p2);
}
  
void check(int *p)
{ int i;
  printf("They are fail:");
  for(i=0;i<5;i++)
   if (p[i]<60) printf("%d ",p[i]);
  printf("\n");
}  