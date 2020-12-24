#include <stdio.h>
int main()
{
  char c1,c2;                                     //定义为字符型 
  int i1,i2;                                      //定义为整型 
  printf("请输入两个整数i1,i2:");
  scanf("%d,%d",&i1,&i2);
  c1=i1;                                         //将整数赋值给字符变量 
  c2=i2;
  printf("按字符输出结果:\n");
  printf("%c,%c\n",c1,c2);
  printf("按整数输出结果:\n");
  printf("%d,%d\n",c1,c2);
  return 0;
}