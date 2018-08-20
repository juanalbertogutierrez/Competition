#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
   int cases,par,impar,num,numeros;
   scanf("%d",&cases);
   while(cases--){
    scanf("%d",&numeros);
    par=0;
    impar=0;
    for(int i=0;i<numeros;i++){
        scanf("%d",&num);
        if(num%2==0)par++;
        else impar++;
    }
    printf("%d even and %d odd.\n",par,impar);
   }
    return 0;
}
