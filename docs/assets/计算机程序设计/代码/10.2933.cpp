#include<iostream>
#include<iomanip>
using namespace std;

struct Student
{
    int ID;
    char name[50];
    float score;
}; 

void inputStudents(struct Student s[],int n)
{
    for(int i=0;i<n;i++)
    cin>>s[i].ID>>s[i].name>>s[i].score;
}

void printStudents(Student s[], int n)
{
    for(int i=0;i<n;i++)
    cout << "ID: " << s[i].ID << ", " << "Name: " << s[i].name << ", " << "Score: " << fixed << setprecision(1) << s[i].score<<endl;
}

int main()
{
    struct Student s[3];
    inputStudents(s ,3);
    printStudents(s ,3);

    
    return 0;
}