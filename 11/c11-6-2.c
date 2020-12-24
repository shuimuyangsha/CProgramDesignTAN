#include <stdio.h>
#include "format.h"
int main()
{ int a,b,c,d;
  char string[]="CHINA";
  a=1;b=2;c=3;d=4;
  PR(D1,a);
  PR(D2,a,b);
  PR(D3,a,b,c);
  PR(D4,a,b,c,d);
  PR(S,string);
  return 0;
}
