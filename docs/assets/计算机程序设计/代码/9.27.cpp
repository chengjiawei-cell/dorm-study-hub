#include<iostream>
using namespace std;
int main ()
{
    int x=0;
    while(x<100)
    {
        
        if(x%2==0)
           cout<<x<<endl;
        else
           {
            continue;
           }
        x+=1;
      
    }
    return 0;
}
