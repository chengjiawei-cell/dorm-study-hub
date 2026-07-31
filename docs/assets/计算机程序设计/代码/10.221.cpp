#include <iostream>
using namespace std;

void printArray(int arr[], int len)
{     for(int i=0;i<len;i++)
      { 
            cout<<arr[i];
               if( i<len-1)
               {   
                   cout<<" ";
               }
      }
    cout<<endl;   
}   


int sumArray(int arr[], int len)
{
    int sum=0;
    for(int i=0;i<len;i++)
    {
        sum+=arr[i];
    }
    return sum;
}





int main()
{
    int n;
    cin >> n;
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << "Array elements: ";
    printArray(arr, n);
    
    int sum = sumArray(arr, n);
    cout << "Sum of array elements: " << sum << endl;
    
    return 0;
}