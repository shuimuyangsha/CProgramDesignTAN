#include <stdio.h>
int main()
{void cpy(char [],char []);
 char str[80],c[80];
 printf("input string:");
 gets(str);
 cpy(str,c);
 printf("The vowel letters are:%s\n",c);
 return 0;
 }

 void cpy(char s[],char c[])
 { int i,j;
   for (i=0,j=0;s[i]!='\0';i++)
     if (s[i]=='a'||s[i]=='A'||s[i]=='e'||s[i]=='E'||s[i]=='i'||
	 s[i]=='I'||s[i]=='o'||s[i]=='O'||s[i]=='u'||s[i]=='U')
	   {c[j]=s[i];
	    j++;
	   }
     c[j]='\0';
 }