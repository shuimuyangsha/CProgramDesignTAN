#include <stdio.h>
#include <string.h>
int main()
  {struct student
    {long num;
     char name[20];
     char sex;
     float score;
   };
   struct student stu_1;          // ����struct student���͵ı���stu_1 
   struct student * p;            // ����ָ��struct student �������ݵ�ָ������� 
   p=&stu_1;                      // ��ָ��stu_1 
   stu_1.num=10101;               // �Խṹ������ĳ�Ա��ֵ 
   strcpy(stu_1.name,"Li Lin");
   stu_1.sex='M';
   stu_1.score=89.5;
   printf("No.:%ld\nname:%s\nsex:%c\nscore:%5.1f\n",
          stu_1.num,stu_1.name,stu_1.sex,stu_1.score);           // ������ 
   printf("\nNo.:%ld\nname:%s\nsex:%c\nscore:%5.1f\n",
          (*p).num,(*p).name,(*p).sex, (*p).score);
   return 0;
  } 
