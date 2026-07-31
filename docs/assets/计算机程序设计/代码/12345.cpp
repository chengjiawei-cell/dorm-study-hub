#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float a,b;
    int c;
    char d;
    cin>>a>>c>>d>>b;
    cout<<d<<' '<<c<<' '<<a<<' '<<fixed<<setprecision(2)<<b;
    return 0;
}