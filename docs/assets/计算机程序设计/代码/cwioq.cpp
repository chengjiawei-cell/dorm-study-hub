
#include <iostream>
using namespace std;

long long factorial(int n)
{
    
    if(n<0)
       return -1;
    else if(n==0)
       return 1;
    else
    {   long long a=1;
        for(int i=1;i<n+1;i++)
        {a*=i;
        }return a;
    }
}




int main()
{
    int n;
    cin >> n;
    long long result = factorial(n);
    if (result == -1) {
        cout << "Invalid input! n must be non-negative." << endl;
    } else {
        cout << result << endl;
    }
    return 0;
}