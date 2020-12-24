#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
struct student
{
 char name[10];
 int num;
 int score[3];
 float ave;
 }  stud[SIZE],work;
int main()
 {
   void sort(void);
   int i;
   FILE *fp;
   sort();
   fp=fopen("stud_sort.dat","rb");
   printf("sorted student's scores list as follow\n");
   printf("----------------------------------------------------\n");
   printf(" NAME      N0.     SCORE1   SCORE2   SCORE3    AVE    \n");
   printf("----------------------------------------------------\n");
   for (i=0;i<SIZE;i++)
       {
   fread(&stud[i],sizeof(struct student),1,fp);
   printf("%-10s %3d %8d %8d %8d %9.2f\n",stud[i].name,stud[i].num,
		 stud[i].score[0],stud[i].score[1],stud[i].score[2],stud[i].ave);
       }
   fclose(fp);
   return 0;
 }

 void sort(void)
  {FILE *fp1,*fp2;
   int i,j;
   if ((fp1=fopen("stu.dat","rb"))==NULL)
     {printf("The file can not open\n\n");
      exit(0);
     }
   if ((fp2=fopen("stud_sort.dat","wb"))==NULL)
     {printf("The file write error\n");
      exit(0);
     }
   for (i=0;i<SIZE;i++)
     if (fread(&stud[i],sizeof(struct student),1,fp1)!=1)
       {printf("file read error\n");
        exit(0);
       }
   for (i=0;i<SIZE;i++)
     {for (j=i+1;j<SIZE;j++)
	    if (stud[i].ave<stud[j].ave)
          {work=stud[i];
	       stud[i]=stud[j];
	       stud[j]=work;
          }
      fwrite(&stud[i],sizeof(struct student),1,fp2);
     }
   fclose(fp1);
   fclose(fp2);
 }


