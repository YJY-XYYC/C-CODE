#include <stdio.h>
int main()
{
    int line = 0;
    printf("加入珠科\n");
    while(line<20000)
    {
        printf("学习!%d天\n",line);
        line++;//一直在运算结束时加上1，直到到达指定数字（如：20000）。
        if(line>=20000)
           printf("好OFFER!");
    }
    return 0;
}