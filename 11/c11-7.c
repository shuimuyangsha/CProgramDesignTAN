#include <stdio.h>
#define LETTER 1
int main()
{ char str [20]="C Language",c;
  int i=0;
  while((c=str[i])!='\0')        // ���ַ�����'\0'ʱ
    {
      #if  LETTER                // �������뿪ʼ�����LETTERΪ��(1)
        if(c>='a' && c<='z')     // ����ǰ�ַ�ΪСд��ĸ
          c=c-32;                // ��Ϊ��д��ĸ
      #else                      // ���LETTERΪ��(0)
        if(c>='A' && c<='Z')     // ����ǰ�ַ�Ϊ��д��ĸ
          c=c+32;                // ��ΪСд��ĸ   
      #endif                     // �����������
      printf("%c",c);            // ������ַ� 
      i++;                       // ָ����һ���ַ�
    }
  printf("\n");
}
