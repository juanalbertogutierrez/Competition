#include <iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;
int main()
{
    int t,m,ele,w,cont;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&m,&w);
        int arr[m+1];
        for(int i=0;i<m;i++)
        {
            scanf("%d",&arr[i]);
        }
        sort(arr,arr+m);
        cont=0;
        for(int i=0;i<m;i++)
        {
            if(w-arr[i]>=0)
            {
                w-=arr[i];
                cont++;
            }
            else
            {
                break;
            }
        }
        printf("%d\n",cont);
    }
    return 0;
}
