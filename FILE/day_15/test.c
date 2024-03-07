#include <stdio.h>
int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    printf("请输入比较的数值>:");
    scanf("%d%d%d",&a,&b,&c);
    if(a < b)
    {
        int tmp = a;//“int”是局部变量，所以在两个if语句中使用不会出现错误。
        a = b;
        b = tmp;
    }
    if(a < c)
    {
        int tmp = a;
        a = c;
        c = tmp;
    }
    if(b < c)
    {
        int tmp = b;
        b = c;
        c = tmp;
    }
    printf("%d>%d>%d\n",a,b,c);
    return 0;
}