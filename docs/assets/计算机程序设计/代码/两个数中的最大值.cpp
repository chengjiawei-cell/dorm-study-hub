#include <iostream>
int main()
{
    using namespace std;
    int num1,num2,tmp;
    cin>>num1>>num2;
    if(num1>num2)
    {
        tmp=num1;
        num1=num2;
        num2=tmp;
    }
    cout<<num1<<endl<<num2<<endl;
    return 0;
}