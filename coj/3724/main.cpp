#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main()
{
    string str;
    char str1[10];
    cin>>str;
    size_t lentgh= str.copy(str1,8,0);
    str1[lentgh]='\0';
    if(str[8]=='P'){
        if(str1[1]=='2'&& str1[0]=='1'){}
        else
        {
            str1[0]+=1;
            str1[1]+=2;
        }
    }
    else{
        if(str1[1]=='2'&& str1[0]=='1'){str1[1]='0';str1[0]='0';}
    }

    cout << str1 << endl;
    return 0;
}
