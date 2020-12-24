#include <stdio.h>
int main()
{unsigned short a,b,c;
 int n;
 printf("please enter a & n:\n");
 scanf("a=%o,n=%d",&a,&n);
 b=a<<(16-n);
 c=a>>n;
 c=c|b;
 printf("a:%o\nc:%o\n",a,c);
 return 0;
}
