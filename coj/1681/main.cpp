#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(((b*b) - (4*a*c))<0)printf("NO\n");
    else printf("YES\n");
    return 0;
}
