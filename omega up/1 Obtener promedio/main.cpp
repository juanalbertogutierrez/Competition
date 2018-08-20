#include <stdio.h>

using namespace std;

int main()
{
    int n;
    float sum=0,val;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%f",&val);
        sum+=val;
    }
    printf("%.2f",sum/n);
    return 0;
}
