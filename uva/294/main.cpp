#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cmath>

#define sc scanf
#define pf printf
#define ll long long
#define input freopen("input.txt","r",stdin)

using namespace std;
int main()
{
    ll low,upp,t,j,i,divisor,Max,num;
    sc("%lld",&t);
    while(t--)
    {
        sc("%lld %lld",&low,&upp);
        Max=0;
        if(low==1&&upp==0)
        {
            printf("Between 1 and 1, 0 has a maximum of 2 divisors.\n");
            continue;
        }
        for(i=low;i<=upp;i++)
        {
            divisor=0;
            int p=sqrt(i);
            for(j=1;j<=p;j++)
            {
                if(i%j==0)
                {
                    divisor++;
                    if(i/j!=j)
                    {
                        divisor++;
                    }
                }
                if(Max<divisor)
                {
                    Max=divisor;
                    num=i;
                }
            }
        }
        printf("Between %lld and %lld, %lld has a maximum of %lld divisors.\n",low,upp,num,Max);
    }
    return 0;
}
