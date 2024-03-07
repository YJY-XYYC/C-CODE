#include <stdio.h>
int count = 0;//用于计算闰年个数
int main()
{
    int year = 0;
    for(year=1000;year<=2000;year++)
    {
        if((year%4==0 && year%100!=0) || (year%400==0))
        {
            printf("%d ",year);
            count++;
        }
    }
    printf("\ncount = %d\n",count);
    return 0;
}