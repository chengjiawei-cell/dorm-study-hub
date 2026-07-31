#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c); // 修正：添加正确的格式说明符和变量地址
    
    if((a+b)>c && (a+c)>b && (b+c)>a)
    {
        printf("Yes");
    }
    else // 修正：移除分号
    {
        printf("No");
    }
    return 0;
}