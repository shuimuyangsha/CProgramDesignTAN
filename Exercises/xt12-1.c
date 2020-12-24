#include <stdio.h>
int main()
{unsigned a,b,c,d;
 printf("please enter a:");
 scanf("%o",&a);
 b=a>>4;
 c=~(~0<<4);
 d=b & c;
 printf("%o,%d\n%o,%d\n",a,a,d,d);
 return 0;
}


