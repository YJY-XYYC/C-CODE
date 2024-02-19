#include <stdio.h>//相比text_2024_2_8\test4.c，此代码更加简洁方便。

int main()
{
    int i;
    int ret = 1;
    int sum;
    for(i=1;i<=10;i++)
    {
        ret = ret * i;//相比text_2024_2_8\test4.c，不用重置ret的数值，可以将累积的ret数值作为后面的累加使用。
        sum = sum + ret;
    }
    printf("sum = %d\n",sum);
    return 0;
}