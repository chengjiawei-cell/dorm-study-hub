#include<iostream>
using namespace std;
int main()
{ 
    int a,b;
    cin>>a>>b;
    cout<<"Initial value: "<<a<<endl;
    int *p=&a;
    *p=b;
    cout<<"Value after pointer modification: "<<*p<<endl;
    cout<<"Final value: "<<a;
}