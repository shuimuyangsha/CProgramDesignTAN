
#include <stdio.h>
int main()
{int length(char *p);
int len;
char str[20];
printf("input string:  ");
scanf("%s",str);
len=length(str);
printf("The length of string is %d.\n",len);
return 0;
}

int length(char *p)          
{int n;
 n=0;
 while (*p!='\0')
  {n++;
   p++;
  }
 return(n);
}
