#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c; // 使用C++输入方式
    
    if((a+b)>c && (a+c)>b && (b+c)>a)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}