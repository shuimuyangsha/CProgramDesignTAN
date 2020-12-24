#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct emploee
{char  name[10];
 int   salary;
}emp[20];

int main()
 { FILE *fp;
   int i,j,n,flag;
   char name[10];
   if ((fp=fopen("emp_salary","rb"))==NULL)
     {printf("can not open file.\n");
      exit(0);
     }
   printf("\noriginal data:\n");
   for (i=0;fread(&emp[i],sizeof(struct emploee),1,fp)!=0;i++)
      printf("\n  %8s   %7d",emp[i].name,emp[i].salary);
   fclose(fp);
   n=i;
   printf("\ninput name deleted:\n");
   scanf("%s",name);
   for (flag=1,i=0;flag && i<n;i++)
     {if (strcmp(name,emp[i].name)==0)
        {for (j=i;j<n-1;j++)
           {strcpy(emp[j].name,emp[j+1].name);
	        emp[j].salary=emp[j+1].salary;
           }
	     flag=0;
        }
     }
   if(!flag)
     n=n-1;
   else
     printf("\nnot found!");
   printf("\nNow,The content of file:\n");
   if((fp=fopen("emp_salary","wb"))==NULL)
     {printf("can not open file\n");
      exit(0);
     }
   for (i=0;i<n;i++)
      fwrite(&emp[i],sizeof(struct emploee),1,fp);
   fclose(fp);
   fp=fopen("emp_salary","r");
   for (i=0;fread(&emp[i],sizeof(struct emploee),1,fp)!=0;i++)
      printf("\n%8s   %7d",emp[i].name,emp[i].salary);
   printf("\n");
   fclose(fp);
   return 0;
 }