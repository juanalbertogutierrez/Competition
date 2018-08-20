#include <iostream>
#include<stdio.h>

using namespace std;

int main()
{
    long long n,m,s,t,cox,coy;
    long long arr[100000000],arr2[100000000];
    long long cont,cont2,i,j,y;
    bool giro=true;
    while(scanf("%lld %lld %lld %lld",&n,&m,&s,&t) != EOF)
    {
        bool conexiones[n][n]={false};
        giro=true;
        for(i=0; i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                conexiones[i][j]=false;
            }
        }
        for(i=0; i<m;i++)
        {
            scanf("%lld %lld",&cox,&coy);
            conexiones[cox][coy]=true;
            conexiones[coy][cox]=true;
        }
        cont=1;
        cont2=0;
        arr[0]=s;
        for(i=0;i<t;i++)
        {
            if(giro)
            {
               for(j=0; j<cont;j++)
                {
                    for(y=0;y<n;y++)
                    {
                        if(conexiones[arr[j]][y])
                        {
                            arr2[cont2++]=y;

                        }
                    }
                }
                cont=0;
                giro=false;
            }
            else
            {
                for(j=0; j<cont2;j++)
                {
                    for(y=0;y<n;y++)
                    {
                        if(conexiones[arr2[j]][y])
                        {
                            arr[cont++]=y;
                        }
                    }
                }
                cont2=0;
                giro=true;
            }
        }
        if(giro)
        {
            printf("%lld\n",cont);
        }
        else
        {
            printf("%lld\n",cont2);
        }
    }
    return 0;
}
