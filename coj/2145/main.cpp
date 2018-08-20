#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int cases,minimo,maximo,num,cont,contcas=0;
    scanf("%d",&cases);
    while(cases--){
        minimo=101;
        maximo=0;
        cont=0;
        for(int i=0;i<10;i++){
            scanf("%d",&num);
            if(num<minimo){
                    minimo=num;
            }
            if(num>maximo){
                    maximo=num;
            }
            cont+=num;
        }
        printf("%d %d\n",++contcas,cont-minimo-maximo);
    }
    return 0;
}
