#include <stdio.h>//在一到一百找出奇数。运用循环语句和分支语句。

int main()
{
    int num;
    while(num<=100)
    {
        if(num%2==1)
            printf("%d ",num);
        num++;
    }
    return 0;
}