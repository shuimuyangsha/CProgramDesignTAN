#include <stdio.h>
#define NEWSIZE 1000                    //指定开辟存区的最大容量
char newbuf[NEWSIZE];                   //定义字符数组newbuf 
char *newp=newbuf;                      //定义指针变量newp，指向可存区的始端             

char *new(int n)                        //定义开辟存区的函数new,开辟存储区后返回指针
   {if (newp+n<=newbuf+NEWSIZE)         // 开辟区未超过newbuf数组的大小
     {newp+=n;                          // newp指向存储区的末尾
	  return(newp-n);                  // 返回一个指针,它指向存区的开始位置
     }
    else
      return(NULL);                    // 当存区不够分配时,返回一个空指针
   }
