#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    long long num;
    do{
        scanf("%lld",&num);
        if(num==0)break;
        if(num%11==0){
            printf("%lld is a multiple of 11.\n",num);
        }
        else{
            printf("%lld is not a multiple of 11.\n",num);
        }
    }while( true);
    return 0;
}
