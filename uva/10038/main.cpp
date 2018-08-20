#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int n,t,ant,i,pos;
    while(cin>>n)
    {
        if(n!=0)
        {cin>>ant;
        bool jolly[3001]={false};
        for(i=1;i<n;i++)
        {
            cin>>t;
            if(t<ant)
            {
                pos=abs(ant-t);
            }
            else
            {
                pos=abs(t-ant);
            }
            jolly[pos-1]=true;
            ant=t;
        }
        for(i=1;i<n;i++)
        {
            if(!jolly[i-1])break;
        }
        if(i==n)cout<<"Jolly\n";
        else cout<<"Not jolly\n";
        }
        else
        {
            cout<<"Jolly\n";
        }
    }
    return 0;
}
