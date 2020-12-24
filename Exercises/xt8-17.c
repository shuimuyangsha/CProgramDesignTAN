#include<stdio.h>
int main()
{int strcmp(char *p1,char *p2); 
 int m;
 char str1[20],str2[20],*p1,*p2;
 printf("input two strings:\n");
 scanf("%s",str1);
 scanf("%s",str2);
 p1=&str1[0];
 p2=&str2[0];
 m=strcmp(p1,p2);
 printf("result:%d,\n",m);
 return 0;
}

int strcmp(char *p1,char *p2)           //两个字符串比较函数
{int i;
 i=0;
 while(*(p1+i)==*(p2+i))
   if (*(p1+i++)=='\0') return(0);     //相等时返回结果0 
 return(*(p1+i)-*(p2+i));              //不等时返回结果为第一个不等字符ASCII码的差值
}
