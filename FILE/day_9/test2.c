#include <stdio.h>//循环语句(while以及getchar,putchar)

int main()
{
    int ch;
    while((ch=getchar()) !=EOF)//按下Ctrl+Z结束。EOF:end of file:文件结束标志。
    {                             
        putchar(ch);
    }
    return 0;
}