#include <stdio.h>

int main()
{
    int i = 0;
    int n = 0;
    int ret = 1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)//先创建数值
    {
        ret = ret * i;//再将数值相乘
    }
    printf("ret = %d\n",ret);
    return 0;
}