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
        printf("%.0f\n",pow(2,m-1));
    }
    return 0;
}
