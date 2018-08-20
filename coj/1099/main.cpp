#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int a,b,c;
    bool pitagoras;
    scanf("%d",&a);
    while(a!=0){
        scanf("%d %d",&b,&c);
        a=a*a;
        b=b*b;
        c=c*c;
        (a==b+c)?pitagoras=false:(b==a+c)?pitagoras=false:(c==a+b)?pitagoras=false:pitagoras=true;
        (!pitagoras)?printf("right\n"):printf("wrong\n");
        scanf("%d",&a);
    }
    return 0;
}
