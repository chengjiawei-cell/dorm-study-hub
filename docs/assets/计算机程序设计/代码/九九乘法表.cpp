#include<iostream>
int main()
{
    for(int a=1; a<10; a++)
    {
        for (int b=1;b<=a; b++)
        {
            printf("%d*%d=%-4d",a,b,a*b);
        }
    printf("\n");
    }
    return 0;
}