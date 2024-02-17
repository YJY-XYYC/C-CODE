#include <stdio.h>

int main()
{
    int ch;
    int ret;
    char password[20];
    printf("请输入密码>:");
    scanf("%s",password);
    printf("请确认密码(Y/N)>:");
    while((ch=getchar()) !='\n')
    {
        ;
    }//运用while把输入缓冲区的不相关“吃掉”。
    ret=getchar();
    if(ret=='Y')
        printf("确认成功!\n");
    else
        printf("放弃确认!\n");

    return 0;
}