#include <iostream>
using namespace std;

int fib(int n)

{
    int arr[n];
    arr[0]=1;
    arr[1]=1;
    for(int i=2;i<n;i++)
       {
            arr[i]=arr[i-1]+arr[i-2];
       }
    return arr[n];
    
}





int main()
{
    int n;
    cin >> n;
    
    if (n < 0) {
        cout << "Invalid input! n must be non-negative." << endl;
    } else {
        cout << "Fibonacci(" << n << ") = " << fib(n) << endl;
    }
    
    return 0;
}