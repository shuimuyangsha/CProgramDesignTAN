#include <stdio.h>
int main()
{
 char str[50],*pstr;
 int i,j,k,m,e10,digit,ndigit,a[10],*pa;
 printf("input a string:\n");
 gets(str);
 pstr=&str[0];    /*�ַ�ָ��pstr��������str �׵�ַ*/
 pa=&a[0];        /*ָ��pa����a�����׵�ַ*/
 ndigit=0;        /*ndigit�����ж��ٸ�����*/
 i=0;             /*�����ַ����еĵڼ����ַ�*/
 j=0;
 while(*(pstr+i)!='\0')
	{if((*(pstr+i)>='0') && (*(pstr+i)<='9'))
       j++;
     else
       {if (j>0)
        {digit=*(pstr+i-1)-48;          /*������λ����digit*/
         k=1;
         while (k<j)     /*��������λ������������λ����ֵ�ۼ���digit*/
           {e10=1;
	        for (m=1;m<=k;m++)
	        e10=e10*10;                  /*e10�����λ����Ӧ�˵�����*/
	        digit=digit+(*(pstr+i-1-k)-48)*e10;  /*����λ������ֵ\�ۼ���digit*/
	        k++;                   /*λ��K����*/
           }
         *pa=digit;               /*����ֵ��������a*/
         ndigit++;
         pa++;                    /*ָ��paָ��a������һԪ��*/
         j=0;
        }
	   }
     i++;
    }
 if (j>0)                         /*�����ֽ�β�ַ��������һ������*/
  {digit=*(pstr+i-1)-48;          /*������λ����digit*/
   k=1;
   while (k<j)          /* ��������λ������������λ����ֵ�ۼ���digit*/
    {e10=1;
     for (m=1;m<=k;m++)
       e10=e10*10;            /*e10����λ����Ӧ�˵�����*/
     digit=digit+(*(pstr+i-1-k)-48)*e10;  /*����λ������ֵ�ۼ���digit*/
     k++;  /*λ��K����*/
    }
   *pa=digit;                 /*����ֵ��������a*/
   ndigit++;
   j=0;
  }
  printf("There are %d numbers in this line, they are:\n",ndigit);
  j=0;
  pa=&a[0];
  for (j=0;j<ndigit;j++)            /*��ӡ����*/
    printf("%d ",*(pa+j));
  printf("\n");
  return 0;
}

