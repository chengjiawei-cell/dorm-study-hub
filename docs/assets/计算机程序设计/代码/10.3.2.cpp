#include<iostream>
using namespace std;
class Student
{
    char name[20];
    int age;
    int id;

    void speak()
    {
        cout<<"'今年我'"<<age; }
    void play()
    {
        speak();
        cout<<"'打篮球'";
    ;}
};
int main()
{
    return 0;
}