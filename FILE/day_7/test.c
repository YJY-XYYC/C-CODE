#include <stdio.h>//分支语句(if)

int main()
{
    int age;
    printf("请输入您的年龄>:");
    scanf("%d",&age);
    if(age<18)
        printf("乳臭未干的小屁孩~\n");
    else if(age>=18 && age<28)
            printf("后生靓仔！\n");
    else if(age>=28 && age<50)
            printf("壮年\n");
    else if(age>=50 && age<90)
            printf("老年人···\n");
    else if(age>=90 && age<100)
            printf("老登儿~\n");
    else
        printf("你真是千年不死啊！\n");
    
    return 0;
}