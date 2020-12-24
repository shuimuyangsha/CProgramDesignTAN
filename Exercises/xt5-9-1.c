#define M 1000             /*定义寻找范围*/
#include <stdio.h>
int main()
 {
  int k1,k2,k3,k4,k5,k6,k7,k8,k9,k10;
  int i,a,n,s;
  for (a=2;a<=M;a++)      /* a是2-1000之间的整数，检查它是否完数 */
   {n=0;                  /* n用来累计a的因子的个数 */
    s=a;                  /* s用来存放尚未求出的因子之和，开始时等于a */
     for (i=1;i<a;i++)    /* 检查i是否a的因子 */
       if (a%i==0)        /* 如果i是a的因子 */
	{n++;                 /* n加1，表示新找到一个因子 */
	 s=s-i;               /* s减去已找到的因子，s的新值是尚未求出的因子之和 */
	 switch(n)            /* 将找到的因子赋给k1...k9，或k10 */
	  {case 1:
	      k1=i;  break;   /* 找出的笫1个因子赋给k1 */
	   case 2:
	      k2=i;  break;   /* 找出的笫2个因子赋给k2 */
	   case 3:
	      k3=i;  break;   /* 找出的笫3个因子赋给k3 */
	   case 4:
	      k4=i;  break;   /* 找出的笫4个因子赋给k4 */
	   case 5:
	      k5=i;  break;   /* 找出的笫5个因子赋给k5 */
	   case 6:
	      k6=i;  break;    /* 找出的笫6个因子赋给k6 */
	   case 7:
	      k7=i;  break;   /* 找出的笫7个因子赋给k7 */
	   case 8:
	      k8=i;  break;    /* 找出的笫8个因子赋给k8 */
	   case 9:
	      k9=i;  break;   /*找出的笫9个因子赋给k9 */
	   case 10:
	      k10=i;  break;   /* 找出的笫10个因子赋给k10 */
	  }
	}
    if (s==0)
    {
     printf("%d ,Its factors are ",a);
     if (n>1)  printf("%d,%d",k1,k2);        /* n>1表示a至少有2个因子 */
     if (n>2)  printf(",%d",k3);             /* n>2表示至少有3个因子，故应再输出一个因子 */ 
     if (n>3)  printf(",%d",k4);             /* n>3表示至少有4个因子，故应再输出一个因子 */
     if (n>4)  printf(",%d",k5);             /*  以下类似 */
     if (n>5)  printf(",%d",k6);
     if (n>6)  printf(",%d",k7);
     if (n>7)  printf(",%d",k8);
     if (n>8)  printf(",%d",k9);
     if (n>9)  printf(",%d",k10);
     printf("\n");
	}
   }
   return 0;
 }