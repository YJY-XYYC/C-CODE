#include <stdio.h>
int main()
{
    int input;
    printf("加入珠科\n");
    printf("你要好好学习吗？\n");
    printf("1Yes,0No(1/0)>:");//">:"为提示输入符号。
    scanf("%d",&input);
    if(input == 1)
       printf("好OFFER!\n");
    else
       printf("烤地瓜!\n");
   return 0;
}