#include <stdio.h>
#define N 4
#define M 5                   /* ����Ϊ4��5�� */
int main()
{
  int i,j,k,a[N][M],max,maxj,flag;
  printf("please input matrix:\n");
  for (i=0;i<N;i++)           /* �������� */
     for (j=0;j<M;j++)
      scanf("%d",&a[i][j]);
  for (i=0;i<N;i++)
   {max=a[i][0];               /* ��ʼʱ����a[i][0]��� */
    maxj=0;                    /* ���к�0����maxj���� */
    for (j=0;j<M;j++)         /* �ҳ���i���е������ */
	  if (a[i][j]>max)
	    {max=a[i][j];         /* �����е�����������max�� */
	     maxj=j;              /* ����������ڵ��кŴ����maxj�� */
	    }
    flag=1;                   /* �ȼ����ǰ��㣬��flagΪ1���� */
    for (k=0;k<N;k++)
	  if (max>a[k][maxj])     /* �����������ͬ��Ԫ����� */
	     {flag=0;             /* ���max����ͬ����С����ʾ���ǰ�����flag1Ϊ0 */
	      continue;}
    if(flag)                  /* ���flag1Ϊ1��ʾ�ǰ��� */
	{printf("a[%d][%d]=%d\n",i,maxj,max);   /* ��������ֵ���������к� */
	 break;
	}
  }
  if(!flag)	                   /* ���flagΪ0��ʾ���㲻���� */
    printf("It is not exist!\n");
  return 0;
 }


