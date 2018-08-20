#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int n,num,arr[6];
    scanf("%d",&n);
    while(n--){
        for(int i=0;i<6;i++){
            scanf("%d",&num);
            switch(i){
                case 0: arr[i]=1-num;break;
                case 1: arr[i]=1-num;break;
                case 2: arr[i]=2-num;break;
                case 3: arr[i]=2-num;break;
                case 4: arr[i]=2-num;break;
                case 5: arr[i]=8-num;break;
            }
        }
       for(int i=0;i<6;i++){
            printf("%d ",arr[i]);
       }
       printf("\n");
    }
    return 0;
}
