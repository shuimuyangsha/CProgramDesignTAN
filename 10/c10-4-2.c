#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
struct student_type
  {char name[10];
   int num;
   int age;
   char addr[15];
  }stud[SIZE]; 

int main( )
  {int i;
   FILE *fp;
   if((fp=fopen ("stu.dat","rb"))==NULL)        // �������ļ�atu.dat  
      {printf("cannot open file\n");
       exit(0) ;
      }
   for(i=0;i<SIZE;i++)
     {fread (&stud[i],sizeof(struct student_type),1,fp);       // ��fpָ����ļ�����һ������  
      printf ("%-10s %4d %4d  %-15s\n",stud[i].name,stud[i].num,stud[i]. age,stud[i].addr);
            // ����Ļ������������� 
     }
   fclose (fp);                                  // �ر��ļ�"stu.dat" 
   return 0;
  }

