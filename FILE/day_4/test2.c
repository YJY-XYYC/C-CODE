#include <stdio.h>
int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};//自定义一个存放10个整型数字的数组的函数。
    int i = 0;
    while(i<10)
    {
        printf("%d ",arr[i]);
        i++;
    }
    return 0;
}
