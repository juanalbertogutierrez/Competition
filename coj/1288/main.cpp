#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main()
{
    long long cont,cases,len;
    string num;
    scanf("%lld",&cases);
    while(cases--){
        cin>>num;
        cont=0;
        len=num.length();
        for(long long i=0;i<len;i++){
            cont+=num[i]-'0';
        }
        if(cont%3==0 && num[len-1]%2==0){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}
