#include <stdio.h>
#define PI 3.1415926
#define CIRCLE(R,L,S,V) L=2*PI*R;S=PI*R*R;V=4.0/3.0*PI*R*R*R
int main()
{ double r,l,s,v;
  printf("please enter r:");
  scanf("%lf",&r);
  CIRCLE(r,l,s,v);
  printf("r=%6.2lf\nl=%6.2lf\ns=%6.2lf\nv=%6.2lf\n",r,l,s,v);
  return 0;
}
