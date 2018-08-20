#include <stdio.h>

using namespace std;

int main()
{
    int n,k,num,cont=0;
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++){
        scanf("%d",&num);
        (num==k)?cont++:0;
    }
    printf("%d\n",cont);
    return 0;
}
