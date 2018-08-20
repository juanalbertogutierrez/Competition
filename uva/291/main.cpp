#include <stdio.h>
#include <string.h>
#define pf printf

int mat[5][5];
int arr[10];
void backtrack(int rut,int con)
{
    arr[con]=rut;
    if(con==8)
    {
        for(int i=0;i<9;i++)
            pf("%d",arr[i]+1);
        pf("\n");
        return;
    }
    for(int i=0;i<5;i++)
    {
        if(mat[rut][i])
        {
            mat[rut][i]=mat[i][rut]=0;
            backtrack(i,con+1);
            mat[rut][i]=mat[i][rut]=1;
        }
    }

}

int main ()
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            mat[i][j]=0;
        }
    }

    mat[0][1]=mat[0][2]=mat[0][4]= 1;
    mat[1][0]=mat[1][2]=mat[1][4]=1;
    mat[2][0]=mat[2][1]=mat[2][3]=mat[2][4]=1;
    mat[3][2]=mat[3][4]=1;
    mat[4][0]=mat[4][1]=mat[4][2]=mat[4][3]=1;

    backtrack(0,0);
    return 0;
}
