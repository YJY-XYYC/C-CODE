#include <stdio.h>
int main()
{
    int m = 0;
    int n = 0;
    int r = 0;
    printf("请输入操作的数值>:");
    scanf("%d%d",&m,&n);
    while(m%n != 0)
    {
        r = m%n;
        m = n;
        n = r;
    }
    printf("公约数 = %d\n",n);
    return 0;
}