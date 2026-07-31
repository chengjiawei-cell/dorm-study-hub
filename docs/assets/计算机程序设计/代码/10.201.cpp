#include <iostream>
using namesapce std;
int main()
{
    int a, b, c;
    cin>>a>>b>>c; 
    
    if((a+b)>c && (a+c)>b && (b+c)>a)
    {
        cout<<"Yes";
    }
    else // 修正：移除分号
    {
        cout<<"No";
    }
    return 0;
}