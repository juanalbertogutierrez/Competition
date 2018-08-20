#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int elem,dato;
    freopen("input.txt","r",stdin);
    scanf("%d",&elem);
    int arr[elem],mat[elem+1][elem+1],arr2[elem];
    for(int i=0;i<elem;i++)
    {
        scanf("%d",&dato);
        arr[dato-1]=i;
    }
    while(scanf("%d",&dato) != EOF)
    {
        arr2[dato-1]=0;
        mat[0][0]=0;
        for(int i=1;i<elem;i++)
        {
            scanf("%d",&dato);
            arr2[dato-1]=i;
            mat[i][0]=0;
            mat[0][i]=0;
        }
        mat[elem][0]=0;
        mat[0][elem]=0;
        for(int i=1;i<=elem;i++)
        {
            for(int j=1;j<=elem;j++)
            {
                if(arr[i-1]==arr2[j-1])
                {
                    mat[i][j]=mat[i-1][j-1]+1;
                }
                else
                {
                    mat[i][j]=max(mat[i-1][j],mat[i][j-1]);
                }
            }
        }
        printf("%d\n",mat[elem][elem]);
    }
    return 0;
}
