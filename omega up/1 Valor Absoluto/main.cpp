#include <stdio.h>
using namespace std;

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d\n",(a+b>0)?a+b:(-1*(a+b)));
    return 0;
}