#include <stdio.h>
#include <math.h>
int main()
{
  int num,indiv,ten,hundred,thousand,ten_thousand,place;      //�ֱ�����λ,ʮλ,��λ,ǧλ,��λ��λ�� 
  printf("������һ������(0-99999):");
  scanf("%d",&num);
  if (num>9999)
       place=5;
  else  if (num>999)
       place=4;
  else  if (num>99)
       place=3;
  else  if (num>9)
       place=2;
  else place=1;
  printf("λ��:%d\n",place);
  printf("ÿλ����Ϊ:");
  ten_thousand=num/10000;
  thousand=(int)(num-ten_thousand*10000)/1000;
  hundred=(int)(num-ten_thousand*10000-thousand*1000)/100;
  ten=(int)(num-ten_thousand*10000-thousand*1000-hundred*100)/10;
  indiv=(int)(num-ten_thousand*10000-thousand*1000-hundred*100-ten*10);
  switch(place)
    {case 5:printf("%d,%d,%d,%d,%d",ten_thousand,thousand,hundred,ten,indiv);
	    printf("\n��������Ϊ:");
	    printf("%d%d%d%d%d\n",indiv,ten,hundred,thousand,ten_thousand);
	    break;
     case 4:printf("%d,%d,%d,%d",thousand,hundred,ten,indiv);
	    printf("\n��������Ϊ:");
	    printf("%d%d%d%d\n",indiv,ten,hundred,thousand);
	    break;
     case 3:printf("%d,%d,%d",hundred,ten,indiv);
	    printf("\n��������Ϊ:");
	    printf("%d%d%d\n",indiv,ten,hundred);
	    break;
     case 2:printf("%d,%d",ten,indiv);
	    printf("\n��������Ϊ:");
	    printf("%d%d\n",indiv,ten);
	    break;
     case 1:printf("%d",indiv);
	    printf("\n��������Ϊ:");
	    printf("%d\n",indiv);
	    break;
      }
  return 0;
 }