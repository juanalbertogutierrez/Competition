#include <iostream>
#include <string>
using namespace std;
int main()
{
    long long casos;
    string str;
    cin>>casos;
    while(casos--){
        cin>>str;
        long long len=str.length();
        for(long long i=1;i<=len;i++)
        {
            string subst="";
            string per=str.substr(0,i);
            long long lenper=per.length();
            for(long long j=0;j<len/lenper;j++)
                subst+=per;
            if(subst==str)
            {
                cout<<lenper<<"\n";
                break;
            }
        }

        if(casos)
            cout<<"\n";
    }
    return 0;
}
