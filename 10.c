#include <stdio.h>
int main()
{
        int grade;
	printf("请输入学生成绩\n");
	scanf("%d",&grade);
        	if(grade<=100 && grade>=90)
			printf("优秀\n");
		if(grade<=89 && grade>=80)
			printf("良好\n");
		if(grade<=79 && grade>=70)
			printf("中等\n");
		if(grade<=69 && grade>=60)
			printf("及格\n");
		else if(grade<60)
			printf("不及格\n");
	return 0;   

}
