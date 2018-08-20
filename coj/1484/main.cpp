#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main()
{
    string str;
    int a,b;
    cin>>str;
    if(str[0]== 's'){
        scanf("%d",&a);
        printf("%d\n",a*a);
    }
    else{
        scanf("%d %d",&a,&b);
        printf("%d\n",a*b);
    }
    return 0;
}
