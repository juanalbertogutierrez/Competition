#include <iostream>
#include <stdio.h>
#define sc scanf
#define pf printf
#define fre freopen("input.txt","r",stdin)

using namespace std;

int main()
{
    int t,n,aux,i,j,cont;
    //fre;
    sc("%d",&t);
    while(t--)
    {
        sc("%d",&n);
        int arr[n+1];
        for(j=0;j<n;j++)
            sc("%d",&arr[j]);
        cont=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n-1;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    aux=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=aux;
                    cont++;
                }
            }
        }
        pf("Optimal train swapping takes %d swaps.\n",cont);
    }
    return 0;
}
