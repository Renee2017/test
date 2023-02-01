#include <stdio.h>
int main()
{
int grade;
int g;
g=grade;
printf("请输入成绩");
scanf("%d",&g);
printf("\n");
if(g>90)
 {
  printf("A\n");
 }	
 if(90>=g && g>=80)
  {
   printf("A-\n");	 
  } 
   if(80>g && g>=70) 
     {
     printf("B\n");	     
     }
else
  {
  printf("C\n");	  
  }	
return 0;
}


