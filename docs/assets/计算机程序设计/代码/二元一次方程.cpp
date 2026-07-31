#include<iostream>
#include<cmath>
int main()
{
    float a,b,c,x1,x2,delta;
    std::cin>>a>>b>>c;
    delta=b*b-4*a*c;
    if (delta>=0)
    {
        x1=(-b+sqrt(delta))/2/a;
        x2=(-b-sqrt(delta))/2/a;
        std::cout<<"root1="<<x1<<",root2="<<x2;
    }
    else
        std::cout<<"no root";
    return 0;
} 

