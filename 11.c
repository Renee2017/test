#include <stdio.h>
int main()
{
int bai,shi,ge;
int counter=0;
for(int bai=1;bai<=4;bai++)
{	
	for(int shi=1;shi<=4;shi++)
	{
		for(int ge=1;ge<=4;ge++)
	    {	
			counter++;
			//printf("counter=%d 该三位数为%d%d%d,counter,bai,shi,ge\n");
			printf("counter=%d 该三位数为%d%d%d\n",counter,bai,shi,ge);
        }
	}
}
return 0;
}
