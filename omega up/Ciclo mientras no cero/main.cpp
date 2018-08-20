#include <stdio.h>

using namespace std;

int main()
{
    int num,sum=0;
    do{
        scanf("%d",&num);
        sum+=num;
    }while(num!=0);
    printf("%d\n",sum);
    return 0;
}
