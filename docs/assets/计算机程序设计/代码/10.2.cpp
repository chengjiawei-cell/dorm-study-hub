#include <iostream>
using namespace std;
int main()
{
    int hp;
    cout<<"血量为:";
    cin>>hp;
    if(hp<0)
    {
        cout<<"游戏失败";
    }
    else 
    {
        if (hp<20)
        {
        cout<<"血量过低";
    ;    }
        else 
        {
            if (hp<60)
            {
                cout<<"血量不健康"<<endl;
            }
            else
            {
                cout<<"血量健康"<<endl;
            }
               
        }
    } 


    return 0;
}