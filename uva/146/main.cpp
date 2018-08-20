#include <iostream>
#include <algorithm>
#include <string>
#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
    char str[55];
    //freopen("input.txt","r",stdin);
    while(1)
    {
        gets(str);
        if(str[0]=='#')
            break;
        if(!next_permutation(str,str+ strlen(str)))
        {
            puts("No Successor");
            continue;
        }
        puts(str);
    }
    return 0;
}
