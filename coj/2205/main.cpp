#include <cstdio>
#include <math.h>
using namespace std;

int main()
{
    int cont,inf,sup,t;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&inf,&sup);
        cont=0;
        for(int j=inf;j<=sup;j=++inf){
            while(j>0){
                 if(j&1==1)cont++;
                j=j>>1;
            }
        }
        printf("%d\n",cont);
    }
    return 0;
}
