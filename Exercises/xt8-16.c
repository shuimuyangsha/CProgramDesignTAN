#include <stdio.h>
int main()
{
 char str[50],*pstr;
 int i,j,k,m,e10,digit,ndigit,a[10],*pa;
 printf("input a string:\n");
 gets(str);
 pstr=&str[0];    /*字符指针pstr置于数组str 首地址*/
 pa=&a[0];        /*指针pa置于a数组首地址*/
 ndigit=0;        /*ndigit代表有多少个整数*/
 i=0;             /*代表字符串中的第几个字符*/
 j=0;
 while(*(pstr+i)!='\0')
	{if((*(pstr+i)>='0') && (*(pstr+i)<='9'))
       j++;
     else
       {if (j>0)
        {digit=*(pstr+i-1)-48;          /*将个数位赋予digit*/
         k=1;
         while (k<j)     /*将含有两位以上数的其它位的数值累计于digit*/
           {e10=1;
	        for (m=1;m<=k;m++)
	        e10=e10*10;                  /*e10代表该位数所应乘的因子*/
	        digit=digit+(*(pstr+i-1-k)-48)*e10;  /*将该位数的数值\累加于digit*/
	        k++;                   /*位数K自增*/
           }
         *pa=digit;               /*将数值赋予数组a*/
         ndigit++;
         pa++;                    /*指针pa指向a数组下一元素*/
         j=0;
        }
	   }
     i++;
    }
 if (j>0)                         /*以数字结尾字符串的最后一个数据*/
  {digit=*(pstr+i-1)-48;          /*将个数位赋予digit*/
   k=1;
   while (k<j)          /* 将含有两位以上数的其它位的数值累加于digit*/
    {e10=1;
     for (m=1;m<=k;m++)
       e10=e10*10;            /*e10代表位数所应乘的因子*/
     digit=digit+(*(pstr+i-1-k)-48)*e10;  /*将该位数的数值累加于digit*/
     k++;  /*位数K自增*/
    }
   *pa=digit;                 /*将数值赋予数组a*/
   ndigit++;
   j=0;
  }
  printf("There are %d numbers in this line, they are:\n",ndigit);
  j=0;
  pa=&a[0];
  for (j=0;j<ndigit;j++)            /*打印数据*/
    printf("%d ",*(pa+j));
  printf("\n");
  return 0;
}

