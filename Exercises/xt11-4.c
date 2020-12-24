#include<stdio.h>
#define LEAP_YEAR(y)((y%4==0)&&(y%100!=0)||(y%400==0))
int main()
{
 int year;
 printf("\ninput year:");
 scanf("%d",&year);
 if(LEAP_YEAR(year))
   printf("%d is a leap year.\n",year);
 else
   printf("%d is not a leap year. \n",year);
 return 0;
}