#include <stdio.h>

int main()
{
    int i = 0;
    do
    {
        if(5==i)
            break;
        printf("%d\n",i);
    }
    while(i<10);
    return 0;
}
