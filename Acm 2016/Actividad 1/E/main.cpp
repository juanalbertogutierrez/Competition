#include <iostream>

using namespace std;
int acumulador,acumtotal;
struct nodo{
    int ltr;
    int dis;
};

int main()
{
    int t,gas;
    cin >>t;
    while(t--)
    {
        cin>>gas;
        nodo nuevo[gas];
        int pos=0,arr[gas],ultimo=1;
        acumulador=0;
        acumtotal=0;
        for(int i=0;i<gas;i++)
        {
            cin >>nuevo[i].ltr >>nuevo[i].dis;
            acumulador+=nuevo[i].ltr - nuevo[i].dis;
            acumtotal+=nuevo[i].ltr - nuevo[i].dis;
            //cout<<i<<" acum "<<acumulador<<" total "<<acumtotal<<endl;
            if(acumulador < 0)
            {
                acumulador=0;
                pos=i+1;
                //cout<<"check\n"<<i<<" i "<<pos<<" pos"<<endl;
            }
            //cout<<i<<endl;
        }
        if(acumtotal >= 0)
            cout<<pos+1<<"\n";
        else
            cout<<"IMPOSSIBLE\n";
    }
    return 0;
}
