#include <stdio.h>//一到十的阶乘的和

int main()
{
    int i = 0;
    int n = 0;
    int ret = 1;
    int sum =0; 
    for(n=1;n<=10;n++)
    {
        ret = 1;//重置ret的值
        for(i=1;i<=n;i++)
        {
            ret = ret * i;
        }//每个阶乘分别的数值
        sum = sum + ret;
    }//每个阶乘分别的数值的总和
    printf("sum = %d\n",sum);
    return 0;
}