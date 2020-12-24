#include <stdio.h>
#include <stdlib.h>
#define N 10
struct student
{char num[10];
 char name[8];
 int score[3];
 float ave;
 } st[N],temp;

int main()
 {FILE *fp;
  int i,j,n;

      /*¶ÁÎÄ¼þ*/
  if ((fp=fopen("stud","r"))==NULL)
    {printf("can not open.\n");
     exit(0);
    }
  printf("File 'stud': ");
  for (i=0;fread(&st[i],sizeof(struct student),1,fp)!=0;i++)
    {printf("\n%8s%8s",st[i].num,st[i].name);
     for (j=0;j<3;j++)
	   printf("%8d",st[i].score[j]);
     printf("%10.2f",st[i].ave);
    }
  printf("\n");
  fclose(fp);
  n=i;

      /*ÅÅÐò*/
  for (i=0;i<n;i++)
     for (j=i+1;j<n;j++)
	if (st[i].ave < st[j].ave)
	  {temp=st[i];
	   st[i]=st[j];
	   st[j]=temp;
	  }

      /*Êä³ö*/
  printf("\nNow:");
  fp=fopen("stu_sort","w");
  for (i=0;i<n;i++)
     {fwrite(&st[i],sizeof(struct student),1,fp);
      printf("\n%8s%8s",st[i].num,st[i].name);
      for (j=0;j<3;j++)
	    printf ("%8d",st[i].score[j]);
      printf("%10.2f",st[i].ave);
     }
  printf("\n");
  fclose(fp);
  return 0;
 }
