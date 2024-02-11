#include <stdio.h>
int Max(int x,int y)
{
   if (x > y)
   return x;
   else
   return y;
}
int main()
{
    int num1 = 0;
    int num2 = 0;
    printf("输入进行比较的数值>:");
    scanf("%d%d",&num1,&num2);
    int max = Max(num1,num2);
    printf("较大值是：%d\n",max);
    return 0;
}