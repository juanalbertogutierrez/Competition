#include <iostream>
#include<stdio.h>

#define K 101

using namespace std;

int main()
{
    int n, linea,diagonal;
    int aux;
    char Mat[K][K];
    freopen("output.txt","w",stdout);

    while(cin>>n){
        linea = 4*n + 1;
        diagonal = 3*n +1;
        for(int i = 0; i < linea; i++){
            for(int j = 0;j < linea; j++){
                Mat[i][j] = ' ';
            }
        }
        //dibujar lineas
        for(int i = 0; i < linea; i++){
            Mat[i][n] = '*';
            Mat[i][linea-1-n] = '*';
            Mat[n][i] = '*';
            Mat[linea-1-n][i] = '*';
        }

        //diagonales
        aux = n;
        for(int i = 0; i < diagonal; i++){
            Mat[i][aux] = '*';
            Mat[i][linea-1-aux] = '*';
            aux++;

        }

        //diagonales
        aux = 0;
        for(int i = n; i < linea; i++){
            Mat[i][aux] = '*';
            Mat[i][linea-1-aux] = '*';
            aux++;

        }
        //quitamos espacio
        for(int i = 0; i < linea; i++){
            if(i<n){
                Mat[i][linea-n]= '-';
                Mat[i+linea-n][linea-n]= '-';
            }
        }
        aux=linea-1;
        for(int i = n+1; i < linea-n*2; i++){
                Mat[i][aux]= '-';

                    aux--;


        }
        aux+=2;
        for(int i = n*2+1; i < linea-n; i++){
                Mat[i][aux]= '-';

                    aux++;


        }

        for(int i = 0; i < linea; i++){
            for(int j = 0;j < linea; j++){
                if(Mat[i][j]=='-')
                    break;
                cout<<Mat[i][j];
            }
            cout<<"\n";
            if(i<linea-1)
                cout<<"\n";
        }
    }
    return 0;
}
