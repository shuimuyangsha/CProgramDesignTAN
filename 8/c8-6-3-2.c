#include <stdio.h>
int main()
 {int a[10];
  int *p,i;
  printf("please enter 10 integer numbers:");
  for(p=a;p<(a+10);p++)
    scanf("%d",p);
  for(p=a;p<(a+10);p++)
    printf("%d ",*p);                             // ��ָ��ָ��ǰ������Ԫ��
  printf("\n");
  return 0;
}
