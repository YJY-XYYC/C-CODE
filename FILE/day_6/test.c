#include <stdio.h> 
struct Book
{
    char name[20];
    short price;
};
int main()
{
    struct Book b1 = {"C语言程序设计",55};
    struct Book* pb = &b1;

    printf("书名:%s\n",(*pb).name);//运用*取值，需要有“struct Book* pb = &b1;”创立
    printf("价格:%d\n",(*pb).price);//运用*取值，需要有“struct Book* pb = &b1;”创立

    printf("书名:%s\n",pb->name);//运用->取值，需要有“struct Book* pb = &b1;”创立
    printf("价格:%d\n",pb->price);//运用->取值，需要有“struct Book* pb = &b1;”创立

    printf("书名:%s\n",b1.name);//不用“struct Book* pb = &b1;”创立，直接取值
    printf("价格:%d\n",b1.price);//不用“struct Book* pb = &b1;”创立，直接取值
    b1.price = 15;
    printf("修改后的价格:%d\n",b1.price);
    return 0;
}