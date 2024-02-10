#include <stdio.h>
int Add(int x,int y)
{
    int z = x+y;
    return z;
}//自定义的加法函数
int main()
{
    int num1 = 10;
    int num2 = 20;
    int a = 100;
    int b = 200;
    int sum1 = 0;
    int sum2 = 0;
    sum1 = Add(num1,num2);
    sum2 = Add(a,b);
    printf("sum = %d\n",sum1);
    printf("sum = %d\n",sum2);
    return 0;                
}