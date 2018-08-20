#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int num;
    while(true){
        scanf("%d",&num);
        if(num!=42)printf("%d\n",num);
        else break;
    }

    return 0;
}
