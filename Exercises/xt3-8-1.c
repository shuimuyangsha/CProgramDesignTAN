 #include <stdio.h>
int main()
{
  int c1,c2;                        //整型定义 
  printf("请输入两个整数c1,c2:");
  scanf("%d,%d",&c1,&c2);
  printf("按字符输出结果:\n");
  printf("%c,%c\n",c1,c2);
  printf("按ASCII码输出结果为:\n");
  printf("%d,%d\n",c1,c2);
  return 0;
}