#include<stdio.h>
int main()
  {FILE *fp1,*fp2;
   fp1=fopen("file1.dat","r");              // �������ļ�  
   fp2=fopen("file2.dat","w");              // ������ļ�  
   while(!feof(fp1)) putchar(getc(fp1));    // ��������ַ����������Ļ  
   putchar(10);                             // ���һ������ 
   rewind(fp1);                             // ʹ�ļ�λ��ָʾ�������ļ�ͷ  
   while(!feof(fp1)) putc(getc(fp1),fp2);   // ���ļ�ͷ����������ַ��������file2�ļ�  
   fclose(fp1);fclose(fp2);
   return 0;
  }

