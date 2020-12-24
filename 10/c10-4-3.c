#include <stdio.h>
#define SIZE 10
struct student_type
 {char name[10];
  int num;
  int age;
  char addr[15];
 }stud[SIZE];                // ����ȫ�ֽṹ������stud������10��ѧ������  

void load( )
  {FILE *fp;
   int i;
   if((fp=fopen("stu_list","rb"))==NULL)     // �������ļ�stu_list  
     {printf("cannot open infile\n");
      return;
     }
   for(i=0;i<SIZE;i++)
     if(fread(&stud[i],sizeof(struct student_type),1,fp)!=1)  // ��stu_ list�ļ��ж�����  
       {if(feof(fp)) 
	     {fclose(fp); 
          return;
         }
        printf("file read error\n");
       }
   fclose (fp);
  }   
       
void save( )                // ���庯��save�����ļ����SIZE��ѧ��������  
  {FILE *fp;
   int i;
   if((fp=fopen ("stu.dat","wb"))==NULL)    // ������ļ�atu_list  
      {printf("cannot open file\n");
       return;
      }
   for(i=0;i<SIZE;i++)
      if(fwrite (&stud[i],sizeof (struct student_type),1,fp)!=1)
         printf ("file write error\n");
   fclose(fp);
  }

int main()
  {
   load();
   save( );
   return 0;
  }

