#include <stdio.h>
#include <stdlib.h>
int main()
{ FILE *fp;
   char  str[3][10];
   int i=0;
   if((fp=fopen("D:\\CC\\string.dat","r"))==NULL)  // ע���ļ���������ǰ��ͬ 
   {
	  printf("can't open file!\n");
	  exit(0);
   }
   while(fgets(str[i],10,fp)!=NULL)
	  {printf("%s",str[i]);
       i++;}
   fclose(fp);
   return 0;
}
