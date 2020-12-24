#include <stdio.h>
int main()
 { int i,flag;
   char str[80],c;
   FILE *fp;
   fp=fopen("text","w");
   flag=1;
   while(flag==1)
     {printf("input string:\n");
      gets(str);
      fprintf(fp,"%s ",str);
      printf("continue?");
      c=getchar();
      if ((c=='N')||(c=='n'))
    	flag=0;
      getchar();
     }
   fclose(fp);
   fp=fopen("text","r");
   while(fscanf(fp,"%s",str)!=EOF)
     {for (i=0;str[i]!='\0';i++)
	    if ((str[i]>='a') && (str[i]<='z'))
	       str[i]-=32;
      printf("%s\n",str);
     }
   fclose(fp);
   return 0;
 }
 