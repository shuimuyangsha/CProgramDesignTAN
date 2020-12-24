#include <stdio.h>
#define LETTER 1
int main()
{ char str [20]="C Language",c;
  int i=0;
  while((c=str[i])!='\0')        // 当字符不是'\0'时
    {
      #if  LETTER                // 条件编译开始，如果LETTER为真(1)
        if(c>='a' && c<='z')     // 若当前字符为小写字母
          c=c-32;                // 改为大写字母
      #else                      // 如果LETTER为假(0)
        if(c>='A' && c<='Z')     // 若当前字符为大写字母
          c=c+32;                // 改为小写字母   
      #endif                     // 条件编译结束
      printf("%c",c);            // 输出此字符 
      i++;                       // 指向下一个字符
    }
  printf("\n");
}
