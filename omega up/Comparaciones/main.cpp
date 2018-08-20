#include <stdio.h>

using namespace std;

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    (a<b)?printf("menor\n"):(a>b)?printf("mayor\n"):printf("iguales\n");
    return 0;
}
