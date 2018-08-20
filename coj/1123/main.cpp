#include <iostream>
#include <cstdio>
#define max 1505

using namespace std;

int main()
{
    long long ugly[max],n,num,pos=1;
    ugly[0]=1;
    for(long long i=2;pos<max;i++){
            num=i;
        for(int j=2;j<6;j++){
            //printf("%d\n",num);
            if(num%j==0){
                while(num%j==0){
                    num/=j;
                }
            }
            if(num==1){
                break;
            }
        }
        //printf("\n");
        if(num<2){
            ugly[pos++]=i;
            printf("ugly number %lld en pos %lld\n\n",ugly[pos-1],pos-1);
        }
    }
    cout << "Hello world!" << endl;
    return 0;
}
