#include <stdio.h>
int main()
{enum Color {red,yellow,blue,white,black};         //����ö������enum Color
 enum Color i,j,k,pri;                             //����ö�ٱ���i,j,k,pri
 int n,loop;
 n=0;
 for (i=red;i<=black;i++)                          //��ѭ��ʹi��ֵ��red�䵽black
   for (j=red;j<=black;j++)                        //��ѭ��ʹj��ֵ��red�䵽black
     if (i!=j)                                     //�������ͬɫ
       { for (k=red;k<=black;k++)                  //��ѭ��ʹk��ֵ��red�䵽black
        if ((k!=i) && (k!=j))                      //���3��ͬɫ
           {n=n+1;                                 //���������Ĵ�����1
		    printf("%-4d",n);                      //�����ǰ�ǵڼ����������������
            for (loop=1;loop<=3;loop++)            //�Ⱥ��������ֱ���
              {switch (loop)                       //loop��ֵ��1�䵽3
			     {case 1: pri=i;break;             //loop��ֵΪ1ʱ���ѵ�1�����ɫ����pri      
                  case 2: pri=j;break;             //loop��ֵΪ2ʱ���ѵ�2�����ɫ����pri     
                  case 3: pri=k;break;             //loop��ֵΪ3ʱ���ѵ�3�����ɫ����pri    
                  default:break;
				 }
               switch (pri)                        //���������ɫ�����Ӧ������
				 {case red:printf("%-10s","red"); break;            //pri��ֵ����ö�ٳ���redʱ�����red��
                  case yellow: printf("%-10s","yellow"); break;     //pri��ֵ����ö�ٳ���yellowdʱ�����yellow��
                  case blue: printf("%-10s","blue"); break;         //pri��ֵ����ö�ٳ���blueʱ�����blue�� 
                  case white: printf("%-10s","white"); break;       //pri��ֵ����ö�ٳ���whiteʱ�����white��
                  case black: printf("%-10s","black"); break;       //pri��ֵ����ö�ٳ���blackʱ�����black��
                  default :break;
               	}
			  }
            printf("\n");
		   }
		}
 printf("\ntotal:%5d\n",n);
 return 0;
}