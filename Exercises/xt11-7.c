#include <stdio.h>
#include "format.h"
int main ()
{
  int d,num;
  float f;
  char s[80];
  printf("choice data format: 1-integer,2-float,3-string:");
  scanf("%d",&num);
  switch(num)
  {case 1: printf("input integer: ");
           scanf("%d",&d);
		   INTEGER(d);
		   break;
   case 2: printf("input float: ");
           scanf("%f",&f);
		   FLOAT(f);
		   break;
   case 3: printf("input string: ");
           scanf("%s",&s);
		   STRING(s);
		   break;
   default: printf("input error!\n");
   }
 return 0;
 }
