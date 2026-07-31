#include<iostream>
#include<iomanip>
using namespace std;

struct Student
{
    int ID;
    char name[50];
    float score;
};

int main()
{
    struct Student s[3];
    cin>>s[0].ID>>s[0].name>>s[0].score;
    cin>>s[1].ID>>s[1].name>>s[1].score;
    cin>>s[2].ID>>s[2].name>>s[2].score;


    cout << "ID: " << s[0].ID << ", " << "Name: " << s[0].name << ", " << "Score: " << fixed << setprecision(1) << s[0].score;
    cout << "ID: " << s[1].ID << ", " << "Name: " << s[1].name << ", " << "Score: " << fixed << setprecision(1) << s[1].score;
    cout << "ID: " << s[2].ID << ", " << "Name: " << s[2].name << ", " << "Score: " << fixed << setprecision(1) << s[2].score;
    return 0;
}
