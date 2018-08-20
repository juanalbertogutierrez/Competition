#include <iostream>
#include<stdio.h>
#define tam 1000001
using namespace std;

long odd[78499];
bool m[tam];

void criba(){
    m[0] = false;
    m[1] = false;
    for(int i = 2; i <= tam; ++i)
        m[i] = true;
    for(int i = 2; i*i <= tam; ++i) {
        if(m[i]) {
            for(int h = 2; i*h <= tam; ++h)
                m[i*h] = false;
        }
    }
    int j=0;
    for(int i = 0; i < tam; i++)
    {
        if(m[i])
        {
            odd[j++]=i;
        }

    }
}
int busca(int n)
{
    int mid;
    int low = 0;
    int high = 78498;
    while(low <= high){
        mid = low + ((high - low) / 2);
        if(n < odd[mid])//esta a la izq
            high = mid - 1;
        if(n  > odd[mid])
            low = mid + 1;
        if(n == odd[mid])
            return mid;
    }
    return low;
}

int main()
{
    int n,index,cont=0;
    criba();
    while(cin>>n)
    {
        cont=0;
        if(n==1)
        {
            cont++;
        }
        else
        {
            while(n!=0)
            {
                if(n>999983)
                {
                    index=78497;
                }
                else
                {
                    index=busca(n);
                }
                for(int i=index;i>=0;i--)
                {
                    if(n%odd[i]==0)
                    {
                        n=n-odd[i];
                        cont++;
                        break;
                    }
                }
            }
        }
        cout<<cont<<"\n";
    }
    return 0;
}
