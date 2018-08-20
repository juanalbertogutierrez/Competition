#include <stdio.h>

using namespace std;

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    (a!=b)?((a<b)?printf("1 %d\n",b-a):printf("2 %d\n",a-b)):printf("Nivel Optimo\n");

    return 0;
}
