#include <stdio.h>
#define NEWSIZE 1000
char newbuf[NEWSIZE];
char *newp=newbuf;                      

void free(char *p)                             //ÊÍ·Å´æÇøº¯Êý
  {if (p>=newbuf && p< newbuf + NEWSIZE)
     newp=p;
  }

