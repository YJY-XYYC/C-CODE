#include <stdio.h>//分支语句(switch)

int main()
{
    int Day;
    printf("请输入数值>:");
    scanf("%d",&Day);
    switch(Day)
    {
        case 1:
            printf("星期一\n");
            break;
        case 2:
            printf("星期二\n");
            break;
        case 3:
            printf("星期三\n");
            break;
        case 4:
            printf("星期四\n");
            break;
        case 5:
            printf("星期五\n");
            break;
        case 6:
            printf("星期六\n");
            break;
        case 7:
            printf("星期日\n");
            break;
        default:
            printf("输入错误,请输入1~7的数值!\n");
            break;
    }
    return 0;
}