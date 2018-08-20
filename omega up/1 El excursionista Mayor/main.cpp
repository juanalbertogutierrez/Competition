#include <stdio.h>
using namespace std;

int main()
{
    int n,mayor=0,nuevo;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&nuevo);
        if(nuevo>mayor)mayor=nuevo;
    }
    printf("%d\n",mayor);
    return 0;
}
