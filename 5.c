#include <stdio.h>
int main()
{
#define PI 3.1415926
int r;
printf("请输入半径\n");
scanf("%d",&r);
int d=2*r;
float c=2*PI*r;
float s=PI*r*r;
printf("\n你输入的半径为 %d\n",r);
printf("计算出的直径为 %d\n",d);
printf("计算出的周长为 %f\n",c);
printf("计算出的面积为 %f\n",s);
return 0;

}

