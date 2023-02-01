#include <stdio.h>
int main()
{
int x;
int y;	
printf("请输入X的值\n");
scanf("%d",&x);
getchar();
if(x<1)
  {
  y=x;
  printf("y= %d\n",y);	  
  }	
  if(x>=1 && x<10)
    {
     y=2*x-1;
     printf("y= %d\n",y);
    }	
if(x>10)
  {
  y=3*x-9;
  printf("y= %d\n",y);	
  }	
return 0 ;
}
