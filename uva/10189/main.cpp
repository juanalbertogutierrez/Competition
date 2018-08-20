#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n, m,cont=1;
    char c;
    freopen("input.txt","r",stdin);
    scanf("%d %d",&n,&m);
    while(n!=0 && m!=0)
    {
        char tab[n][m];
        string linea;
        for(int i=0;i<n;i++)
        {
            cin>>linea;
            for(int j=0;j<m;j++)
            {
                if(linea[j]=='.')
                {
                    tab[i][j]='0';
                }
                else
                {
                    tab[i][j]='*';
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(tab[i][j]=='*')
                {
                    if(i-1>=0)
                    {
                        if(tab[i-1][j]!='*')tab[i-1][j]++;
                        if(tab[i-1][j-1]!='*' && j-1>=0)tab[i-1][j-1]++;
                        if(tab[i-1][j+1]!='*'&& j+1<m)tab[i-1][j+1]++;
                    }
                    if(tab[i][j-1]!='*' && j-1>=0)tab[i][j-1]++;
                    if(tab[i][j+1]!='*' && j+1<m)tab[i][j+1]++;
                    if(i+1<n)
                    {
                        if(tab[i+1][j]!='*')tab[i+1][j]++;
                        if(tab[i+1][j-1]!='*' && j-1>=0)tab[i+1][j-1]++;
                        if(tab[i+1][j+1]!='*' && j+1<m)tab[i+1][j+1]++;
                    }

                }
            }
        }
        printf("Field #%d:\n",cont++);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                printf("%c",tab[i][j]);
            }
            printf("\n");
        }
        scanf("%d %d",&n,&m);
        if(n!=0 && m!=0)printf("\n");
    }
    return 0;
}
