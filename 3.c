#include <stdio.h>
#include <limits.h>
/*
unsigned long sizeof(type)
{
	if(type == int)
		return 2;
}
*/

void main()
{
unsigned long size = sizeof(int);
printf("int size = %lu\n",size);
printf("存储大小 %lu\n",sizeof(int));
printf("存储大小 %lu\n",sizeof(char));
printf("float存储大小 %lu\n",sizeof(float));
printf("long存储大小 %lu\n",sizeof(long));

}
