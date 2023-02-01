#include <stdio.h>

int x=3;
int y=2;

extern int x;

int main()
{
//int x=3;
//extern int x;
//int y=2;
extern int y;
int result=x+y;
printf("result为 %d\n",result);
return 0;
}
