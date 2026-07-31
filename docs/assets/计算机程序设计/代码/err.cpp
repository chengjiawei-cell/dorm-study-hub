#include<stdio.h>
int main()
{
    int age;
    printf("请输入年龄：")
    scanf("%d",&age);
    if(age>=18)
    {
        printf("你成年了，可以购买酒精饮料!\n");
    }
    else
    {
        PRINTF("你还未成年，不可以购买酒精饮料！、n");
    }
    return 0;
}