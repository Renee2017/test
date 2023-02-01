#include <stdio.h>
int max(int a,int b,int c);
//可以直接把max函数调到上面
int main()
{
 int x,y,z;
 printf("请输入三个数字\n");
 scanf("%d%d%d",&x,&y,&z);
 int ret= max(x,y,z);
 printf("max value is %d",ret);
 return 0;
}	
int max(int a,int b,int c)
         {
         int result;
	 if(a>b)
           {
	   if(a>c)
	   result= a;
	   else
	   result= c;
	   }	
         else
	   {
            if(b>c)
            result= b;
            else
	    result= c;	    
	   }	 
	 return result;
}