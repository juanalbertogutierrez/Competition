#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    char tab[10][10],resTab[10][10],esp[10][10],resEsp[10][10],res[10][10];
    string lintab,linres;
    long long cont=0;
    int numtab,contgiro,x,giro,vert,tablero,espejo,siver,grados;
    bool prese;
    freopen("input.txt","r",stdin);
    while(scanf("%d",&numtab) != EOF)
    {
        prese=true;
        vert=10;
        espejo=10;
        tablero=1;
        siver=0;
        grados=10;
        cont++;
        for(int i=0;i<numtab;i++)
        {
            cin>>lintab>>linres;
            for(int j=0;j<numtab;j++)
            {
                tab[i][j]=lintab[j];
                res[i][j]=linres[j];
                if(tab[i][j] != res[i][j])prese=false;
            }
        }
        if(prese)
        {
            printf("Pattern %d was preserved.\n",cont);
            continue;
        }
        int w=numtab-1,k;
        for(int i=0;i<numtab;i++)
        {

            for(int j=0;j<numtab;j++)
            {
                esp[i][j]=tab[w][j];
                if(esp[i][j] != res[i][j])espejo=0;
            }
            w--;
        }
        contgiro=0;
        for(x=0;x<3;x++)
        {
            w=numtab-1;
            k=0;
            giro=10;
            vert=10;
            contgiro+=90;
            //printf("tablero %d\n",tablero);
            for(int i=0;i<numtab;i++)
            {
                for(int j=0;j<numtab;j++)
                {
                    if(tablero==1)
                    {
                        resTab[k][w]=tab[i][j];
                        if(resTab[k][w]!=res[k][w])giro=0;
                        resEsp[k][w]=esp[i][j];
                        if(resEsp[k][w]!=res[k][w])vert=0;
                        //printf("%c a %c vert %d giro %d %c a %c\n",resTab[k][w],res[k][w],vert,giro,resEsp[k][w],res[k][w]);
                    }
                    else
                    {
                        tab[k][w]=resTab[i][j];
                        if(tab[k][w]!=res[k][w])giro=0;
                        esp[k][w]=resEsp[i][j];
                        if(esp[k][w]!=res[k][w])vert=0;
                        //printf("%c a %c vert %d giro %d %c a %c\n",tab[k][w],res[k][w],vert,giro,esp[k][w],res[k][w]);
                    }
                    k++;
                }
                w--;
                k=0;
            }
            //printf("\n");

            if(tablero==1){tablero=2;}
            else{tablero=1;}
            if(giro== 10)
            {
                printf("Pattern %d was rotated ",cont);
                printf("%d degrees.\n",contgiro);
                break;
            }else if(vert==10)
            {
                grados=contgiro;
                siver=10;
            }
        }

        if(espejo==10 && giro==0 && vert==0 && x==3)
        {
            printf("Pattern %d was reflected vertically.\n",cont);
            continue;
        }
        if(espejo== 0 && siver==10)
        {
            printf("Pattern %d was reflected vertically and rotated ",cont);
            printf("%d degrees.\n",grados);
            continue;
        }
        if(giro==0 && vert==0 && x==3)
        {
            printf("Pattern %d was improperly transformed.\n",cont);
            continue;
        }

    }
    return 0;
}
