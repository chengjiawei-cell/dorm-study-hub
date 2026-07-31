#include <iostream>
using namespace std;

void sort(int arr[], int len);


void sort(int arr[], int len)
{
    for(int i=0;i<len-1;i++)
        for(int j=0;j<len-i-1;j++)
            if(arr[j]<arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            
}
int search(int arr[], int len, int target)
{
    int a;
    if(len%2==0)
    {
        a=arr[len/2];
    }
    else
    {
        a=-1;
    }
    return a;
}

int search(int arr[], int len, int target);






int main()
{
    int n, target;
    
    // Enter array size: 
    cin >> n;
    
    // Enter  n elements:
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    sort(arr, n);
    
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    // Enter target to search: 
    cin >> target;
    
    int index = search(arr, n, target);
    
    if (index != -1) {
        cout << "Target found at index: " << index << endl;
    } else {
        cout << "Target not found in array" << endl;
    }
    
    return 0;
}