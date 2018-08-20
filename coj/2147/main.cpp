#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main()
{
    string str1,str2;
    int space,cases,len,len2,cont;
    scanf("%d",&cases);
    while(cases--){
        cont=0;
        str2="";
        cin>>str1;
        scanf("%d",&space);
        len=str1.length();
        len2=space%len;
        for(int i=len-len2;i<len;i++){
            str2+=str1[i];
        }
        for(int i=0;i<len-len2;i++){
            str2+=str1[i];
        }
        cout<<str2<<"\n";
    }
    return 0;
}
