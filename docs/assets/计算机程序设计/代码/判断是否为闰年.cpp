#include<iostream>
int main()
{
    int year=0;
    int leapFlag=0;
    std::cin>>year;
    leapFlag=(year%4==0&&year%100!=0||(year%400==0));
    if (leapFlag)
       std::cout<<"it is a leap tear"<<std::endl;
    else
       std::cout<<"it is not a leap year"<<std::endl;
    return 0;
}