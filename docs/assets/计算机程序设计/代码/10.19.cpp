#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int N;
    cin>>N;
    if(N<=1){
        cout<<"No"<<endl;
    return 0;}
    if(N=2){
        cout<<"Yes"<<endl;
    return 0;}
    if(N%2==0){
        cout<<"No"<<endl;
    return 0;}
    bool isPrime =true;
    int limit=sqrt(N);
    int i;
    for(i=3;i<limit;i+=2)
    {    if(N%i==0)
        isPrime=false;
        break;
    }
    if(isPrime)
    cout<<"Yes";
    else
    cout<<"No";
    return 0;
    
}