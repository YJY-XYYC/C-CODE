#include <stdio.h>

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int k = 0;
    int i = 0;
    int sz = sizeof(arr)/sizeof(arr[0]);//相对于直接给sz赋值，这种做法对于多见的，如：多个元素的处理和查找更加方便和官方。
    scanf("%d",&k);
    for(i=0;i<sz;i++)
    {
        if(k == arr[i])
        {
            printf("找到了，下标是：%d\n",i);
            break;
        }
    }
    if(i == sz)
        printf("找不到！\n");
    return 0;
}