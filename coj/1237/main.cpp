#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int a,b,n;
    scanf("%d %d",&a,&b);
    while(a!=0 && b!=0){
        if(a<b){
            n=a;
            a=b;
            b=n;
        }
        printf("%d\n",b-(a-b));
        scanf("%d %d",&a,&b);
    }
    return 0;
}
