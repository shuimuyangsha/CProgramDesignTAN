#include <stdio.h>
int main()
 {
  char string[81];
  int i,num=0,word=0;
  char c;
  gets(string);                           // ����һ���ַ������ַ�����string
  for (i=0;(c=string[i])!='\0';i++)       // ֻҪ�ַ�����'\0'�ͼ���ִ��ѭ��
    if(c==' ') word=0;                    // ����ǿո��ַ���ʹword��0
    else if(word==0)                      // ������ǿո��ַ���wordԭֵΪ0
		{word=1;                          // ʹword��1
	     num++;                           // num�ۼ�1����ʾ����һ������
		}
  printf("There are %d words in this line.\n",num);  //������
  return 0;
}