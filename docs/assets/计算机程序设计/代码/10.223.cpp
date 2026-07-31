#include<iostream>
#include<string>
using namespace std;
int main()
{
    string line;
    getline(cin,line);
    int le=0,sp=0,di=0,ot=0;
    for(char c:line)
    {
        if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
            le+=1;
        else if(c>='0'&&c<='9')
            di+=1;
        else if(c==' ')
            sp+=1;
        else
            ot+=1;
        
    }   
   cout << "Letters[字母个数]: " << le << endl;
    cout << "Spaces[空格个数]: " << sp << endl;
    cout << "Digits[数字个数]: " << di << endl;
    cout << "Others[其他字符个数]: " << ot << endl;
    return 0;
}