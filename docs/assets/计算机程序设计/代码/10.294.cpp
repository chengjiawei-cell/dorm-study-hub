#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

struct Student
{
    int ID;
    string name;
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
    cout << "ID: " << s[i].ID << ", " << "Name: " << s[i].name << ", " << "Score: " << fixed << setprecision(1) << s[i].score <<endl;
}

void sortByScore(Student s[],int n)
{
    for(int i=0;i<n;i++)
        for(int j=0;j<n-i;j++)
            if(s[j].score<s[j+1].score)
            {
                struct Student temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
            }
}


int main()
{
    struct Student s[3];
    inputStudents(s ,3);
    cout<<"Student information:"<<endl;
    cout<<endl;
    printStudents(s ,3);
    sortByScore(s ,3);
    cout<<"After sorting:"<<endl;
    printStudents(s ,3);
    return 0;
}