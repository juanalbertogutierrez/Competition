#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int t,a,b,c;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d %d",&a,&b,&c);
        if(a+b==c){printf("YES\n");continue;}
        if(a-b==c){printf("YES\n");continue;}
        if(a!=0 && b!=0 ){if(a/b==c){printf("YES\n");continue;}
        if(a%b==c){printf("YES\n");continue;}}
        if(a*b==c){printf("YES\n");continue;}
        printf("NO\n");
    }
    return 0;
}
