#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main ()
{
 FILE *fp;
 char str[100];
 int i=0;
 if ((fp=fopen("a1","w"))==NULL)
   { printf("can not open file\n");
     exit(0);
   }
 printf("input a string:\n");
 gets(str);
 while (str[i]!='!')
  {if (str[i]>='a'&& str[i]<='z')
     str[i]=str[i]-32;
   fputc(str[i],fp);
   i++;
  }
 fclose(fp);
 fp=fopen("a1","r");
 fgets(str,strlen(str)+1,fp);
 printf("%s\n",str);
 fclose(fp);
 return 0;
}
