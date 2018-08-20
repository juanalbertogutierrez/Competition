#include <iostream>
#include<stdio.h>

using namespace std;
typedef long long ll;
int main()
{
    ll i,j;
    freopen("input.txt","r",stdin);
    while(scanf("%lld %lld",&i,&j)!=EOF)
    {
        printf("%lld %lld ",i,j);
        if(i>j)swap(i,j);
        ll ciclomax=0,cont,n;
        while(i!=j+1)
        {
            n=i;
            cont=1;
            while(n!=1)
            {
                if(n%2==0)
                {
                    n/=2;
                    cont++;
                }
                else
                {
                    n=n*3+1;
                    n/=2;
                    cont+=2;
                }
            }
            i++;
            if(ciclomax<cont)ciclomax=cont;
        }
        printf("%lld\n",ciclomax);
    }
    return 0;
}
