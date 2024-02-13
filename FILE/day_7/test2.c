#include <stdio.h>//判断奇偶数

int main()
{
    int num;
    printf("请输入数值>:");
    scanf("%d",&num);
    if(num%2==1)
        printf("奇数\n");
    else
        printf("偶数\n");
    return 0;
}