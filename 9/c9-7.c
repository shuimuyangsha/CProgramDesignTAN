#include <stdio.h>
#define N 3                                     // ѧ����Ϊ3  
struct student                                  // �����ṹ������struct student  
 {int num;                                      // ѧ��  
  char name[20];                                // ����   
  float score[3];                               // 3�ſγɼ�  
  float aver;                                   // ƽ���ɼ�  
 };

int main()
 {void input(struct student stu[]);                      // ��������  
  struct student max(struct student stu[]);              // ��������    
  void print(struct student stu);                        // ��������  
  struct student stu[N],*p=stu;               // ����ṹ�������ָ��  
  input(p);                                   // ����input����  
  print(max(p));                // ����print����,��max�����ķ���ֵ��Ϊʵ��  
  return 0;
 }

void input(struct student stu[])   // ����input ����  
  {int i;
   printf("�������ѧ������Ϣ��ѧ�š����������ſγɼ�:\n");
   for(i=0;i<N;i++)
   {scanf("%d %s %f %f %f",&stu[i].num,stu[i].name,
	       &stu[i].score[0],&stu[i].score[1],&stu[i].score[2]);   // ��������  
    stu[i].aver=(stu[i].score[0]+stu[i].score[1]+stu[i].score[2])/3.0; // �����ƽ���ɼ�  
   }
  }

struct student max(struct student stu[])          // ����max ����  
{int i,m=0;                                       // ��m��ųɼ���ߵ�ѧ���������е����  
  for(i=0;i<N;i++)
     if (stu[i].aver>stu[m].aver) m=i;            // �ҳ�ƽ���ɼ���ߵ�ѧ���������е����    
  return stu[m];                                  // ���ذ���������Ϣ�Ľṹ��Ԫ��  
}

void print(struct student stud)                   // ����print����  
  { printf("\n�ɼ���ߵ�ѧ����:\n");
	printf("ѧ��:%d\n����:%s\n���ſγɼ�:%5.1f,%5.1f,%5.1f\nƽ���ɼ�:%6.2f\n",
	  stud.num,stud.name,stud.score[0],stud.score[1],stud.score[2],stud.aver);
 }
