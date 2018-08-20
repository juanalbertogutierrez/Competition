#include <iostream>
#include <stdio.h>

using namespace std;
typedef long long ll;
int main()
{
    int t;
    ll a,b;
    freopen("input.txt","r",stdin);
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld %lld",&a,&b);
        if(a<b)
            printf("<\n");
        if(a>b)
            printf(">\n");
        if(a==b)
            printf("=\n");
    }
    return 0;
}
