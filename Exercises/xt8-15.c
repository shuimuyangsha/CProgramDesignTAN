#include <stdio.h>
int main()
{void avsco(float *,float *);
 void avcour1(char (*)[10],float *);
 void fali2(char course[5][10],int num[],float *pscore,float aver[4]);
 void good(char course[5][10],int num[4],float *pscore,float aver[4]);
 int i,j,*pnum,num[4];
 float score[4][5],aver[4],*pscore,*paver;
 char course[5][10],(*pcourse)[10];
 printf("input course:\n");
 pcourse=course;
 for (i=0;i<5;i++)
   scanf("%s",course[i]);
 printf("input NO. and scores:\n");
 printf("NO.");
 for (i=0;i<5;i++)
   printf(",%s",course[i]);
 printf("\n");
 pscore=&score[0][0];
 pnum=&num[0];
 for (i=0;i<4;i++)
 {scanf("%d",pnum+i);
  for (j=0;j<5;j++)
    scanf("%f",pscore+5*i+j);
 }
 paver=&aver[0];
 printf("\n\n");              
 avsco(pscore,paver);                  // ���ÿ��ѧ����ƽ���ɼ� 
 avcour1(pcourse,pscore);                // �����һ�ſε�ƽ���ɼ� 
 printf("\n\n");
 fali2(pcourse,pnum,pscore,paver);       // �ҳ�2�ſβ������ѧ�� 
 printf("\n\n");
 good(pcourse,pnum,pscore,paver);        // �ҳ��ɼ��õ�ѧ�� 
 return 0;
}

void avsco(float *pscore,float *paver)  // ��ÿ��ѧ����ƽ���ɼ��ĺ���
 {int i,j;
  float sum,average;
  for (i=0;i<4;i++)
   {sum=0.0;
    for (j=0;j<5;j++)
      sum=sum+(*(pscore+5*i+j));       //�ۼ�ÿ��ѧ���ĸ��Ƴɼ�
    average=sum/5;                   //����ƽ���ɼ�
    *(paver+i)=average;
   }
}

void avcour1(char (*pcourse)[10],float *pscore)      // ���һ�γ̵�ƽ���ɼ��ĺ��� 
 {int i;
  float sum,average1;
  sum=0.0;
  for (i=0;i<4;i++)
    sum=sum+(*(pscore+5*i));               //�ۼ�ÿ��ѧ���ĵ÷�
  average1=sum/4;                        //����ƽ���ɼ�
  printf("course 1:%s average score:%7.2f\n",*pcourse,average1);
}

void fali2(char course[5][10],int num[],float *pscore,float aver[4])  
           // ���������Ͽγ̲������ѧ���ĺ��� 
 {int i,j,k,labe1;
  printf("        ==========Student who is fail in two courses=======  \n");
  printf("NO. ");
  for (i=0;i<5;i++)
    printf("%11s",course[i]);
  printf("    average\n");
  for (i=0;i<4;i++)
  {labe1=0;
   for (j=0;j<5;j++)
     if (*(pscore+5*i+j)<60.0) labe1++;
   if (labe1>=2)
    {printf("%d",num[i]);
     for (k=0;k<5;k++)
       printf("%11.2f",*(pscore+5*i+k));
     printf("%11.2f\n",aver[i]);
    }
  }
}

void good(char course[5][10],int num[4],float *pscore,float aver[4])
   // �ҳɼ�����ѧ��(����85���ϻ�ƽ��90������)�ĺ��� 
 {int i,j,k,n;
  printf("         ======Students whose score is good======\n");
  printf("NO. ");
  for (i=0;i<5;i++)
    printf("%11s",course[i]);
  printf("    average\n");
  for (i=0;i<4;i++)
   {n=0;
    for (j=0;j<5;j++)
      if (*(pscore+5*i+j)>85.0) n++;
    if ((n==5)||(aver[i]>=90))
     {printf("%d",num[i]);
      for (k=0;k<5;k++)
        printf("%11.2f",*(pscore+5*i+k));
      printf("%11.2f\n",aver[i]);
     }
 }
}

	
