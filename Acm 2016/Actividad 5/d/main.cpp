#include <iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

int main()
{
    int t,m;
    long long res;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&m);
        printf("%d\n",((m*(m-3))/2)+m);
    }
    return 0;
}
