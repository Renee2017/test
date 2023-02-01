#include <stdio.h>
int main()
{
int grade;	
printf("请输入你的成绩\n");
scanf("%d",&grade);
grade /= 10;
switch(grade)
{
	case 10:
	printf("满分\n");
        break;
	case 9:
	printf("90分\n");
        break;
	case 8:
	case 7:
	printf("良好\n");
        break;
        case 6:
        printf("差\n");
        break;
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
        printf("6\n");
        break;
	default:
	printf("无效的成绩\n");
}
return 0;
}
