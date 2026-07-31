#include<iostream>
using namespace std;
int main()
{
    int value = 123;  // Renamed the integer variable
    int *a = &value;  // Pointer 'a' now holds the address of 'value'
    cout << a << endl; // Dereference to print the value (123)
    return 0;
}