#include <stdlib.h>
#include<stdio.h>
struct student_type       // ѧ����������  
 { char name[10];
   int num;
   int age;
   char addr[15];
  }stud[10]; 

int main()
  { int i;
    FILE  *fp;         
	if((fp=fopen("stu.dat","rb"))==NULL)   // ��ֻ����ʽ�򿪶������ļ�  
      {printf("can not open file\n");
       exit(0);
      }
    for(i=0;i<10;i+=2)
     {fseek(fp,i*sizeof(struct student_type),0);        // �ƶ�λ��ָ�� 
      fread(&stud[i], sizeof(struct student_type),1,fp);  // ��һ�����ݿ鵽�ṹ����� 
      printf("%-10s %4d %4d %-15s\n",stud[i].name,stud[i].num,stud[i].age,stud[i].addr); // ����Ļ��� 
     }
    fclose(fp);
	return 0;
  }
   
