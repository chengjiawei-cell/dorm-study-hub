#include <iostream>
int main()
{
    using namespace std;
    int score,level;
    cin>>score;
    level=score/10;
    switch(level)
    {
        case 10:
        case 9:
           cout<<"A\n";
           break;
        case 8:
           cout<<"B\n";
           break;
        case 7:
           cout<<"C\n";
           break;
        case 6:
           cout<<"D\n";
           break;
        default:
           cout<<"E\n";
           break;
    }
    return 0;
}