#include <stdio.h>
int main()
{char *month_name[13]={"illegal month","January","February","March","April",
   "May","June","july","August","September","October", "November","December"};
int n;
printf("input month:\n");
scanf("%d",&n);
if ((n<=12) && (n>=1))
   printf("It is %s.\n",*(month_name+n));
else
  printf("It is wrong.\n");
return 0;
}