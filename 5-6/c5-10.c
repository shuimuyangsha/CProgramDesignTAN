# include <stdio.h>
# include <math.h>
int main()
 {int n,k,i,m=0;
  for(n=101;n<=200;n=n+2)                        // n��100�仯��200����ÿ��n�����ж�
    { k=sqrt(n);
      for (i=2;i<=k;i++)                          
        if (n%i==0) break;                      // ���n��i��������ֹ��ѭ������ʱi<k+1
      if (i>=k+1)                               // ��j>=k+1����ʾnδ������
		{printf("%d ",n);                       // Ӧȷ��n������
	     m=m+1;                                 // m�������ƻ��У�һ�������10��¼����
		}     
	  if(m%10==0) printf("\n");                 // m�ۼƵ�10�ı���������
    }
  printf ("\n");
  return 0;
 }
