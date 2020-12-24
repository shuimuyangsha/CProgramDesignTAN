#include<stdio.h>
#define PR printf
#define NL "\n"
#define Fs "%f"
#define F  "%6.2f"
#define F1 F NL
#define F2 F"\t" F NL
#define F3 F"\t" F "\t" F NL
int main()
{float a,b,c;
 PR("input three floating number a,b,c:\n");
 scanf(Fs,&a);
 scanf(Fs,&b);
 scanf(Fs,&c);
 PR(NL);
 PR("output one floating number each line:\n");
 PR(F1,a);
 PR(F1,b);
 PR(F1,c);
 PR(NL);
 PR("output two floating number:\n");
 PR(F2,a,b);
 PR(F1,c);
 PR(NL);
 PR("output three floating number:\n");
 PR(F3,a,b,c);
 return 0;
}


 