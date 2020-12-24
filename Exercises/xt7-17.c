#include <stdio.h>
int main()
{ void convert(int n);
  int number;
  printf("input an integer: ");
  scanf("%d",&number);
  printf("output: ");
  if (number<0)
    {putchar('-');putchar(' ');   /* 先输出一个‘-’号和空格 */
     number=-number;
    }
  convert(number);
  printf("\n");
  return 0;
}
 
void convert(int n)
{ int i;
  if ((i=n/10)!=0)
    convert(i);
  putchar(n%10+'0');
  putchar(32);
}
