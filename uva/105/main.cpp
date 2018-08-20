#include <iostream>
#include<stdio.h>

using namespace std;
typedef unsigned long long ll;

int main()
{
    ll L=1,H=1,R=1,varMax=0;
    ll arr[10005]={0};
    freopen("input.txt","r",stdin);
    while(scanf("%d %d %d",&L,&H,&R) != EOF)
    {
        if(varMax<R)varMax=R;
        for(int i=L;i<R;i++)
        {
            if(arr[i]<H)arr[i]=H;
        }
    }
    int comienzo=-1,nuevo;
    for(int i=1;i<varMax;i++)
    {
        nuevo=arr[i];
        if(comienzo!=nuevo)
        {
            comienzo=nuevo;
            printf("%d %d ",i,comienzo);
        }
    }
    printf("%d 0\n",varMax);
    return 0;
}
