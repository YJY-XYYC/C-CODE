#include <stdio.h>//分支语句(switch)

int main()
{
    int Day;
    printf("请输入数值>:");
    scanf("%d",&Day);
    switch(Day)
    {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            printf("工作日\n");
            break;
        case 6:
        case 7:
            printf("休息日\n");
            break;
        default:
            printf("输入错误,请输入1~7的数值!\n");
            break;
    }
    return 0;
}