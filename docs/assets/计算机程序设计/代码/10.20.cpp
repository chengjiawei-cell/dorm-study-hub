#include<iostream>
using namespace std;

int main()
{
    int a[5];
    int i, j;  // 将i,j定义在外部
    
    // 输入
    for(i=0; i<5; i++)  // 修正条件
        cin >> a[i];
    
    // 冒泡排序
    for(i=0; i<4; i++)  // 外层循环：n-1轮
    {
        for(j=0; j<4-i; j++)  // 内层循环：每轮比较次数递减
        {
            if(a[j] > a[j+1])  // 如果前面的元素大于后面的
            {
                int tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
        }
    }
    
    // 输出
    for(i=0; i<5; i++)
        cout << a[i] << " ";
    
    return 0;
}