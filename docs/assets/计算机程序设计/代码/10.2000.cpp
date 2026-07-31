#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int a;
    double b;
    cin>>a;
    b=static_cast<double>(a)*12/10000;
    cout<<b<<fixed<<setprecision(2);
    return 0;
}