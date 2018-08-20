#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int t;
    float a,b;
    scanf("%d",&t);
    while(t--){
        scanf("%f %f",&a,&b);
        printf("%.2f\n",a/b);
    }
    return 0;
}
