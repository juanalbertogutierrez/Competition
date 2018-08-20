#include <cstdio>

using namespace std;

int main(){
    int h1,h2,m1,m2,acum;
    scanf("%d %d %d %d",&h1,&m1,&h2,&m2);
    while(h1!=0 || h2!=0 || m1!=0 || m2!=0){
        acum=0;
        
        if(h1<h2){
            acum+=(h2-h1)*60;
        }
        else{
            acum+=((24-h1)+h2)*60;
        }
        if(h1==h2 && m1<m2)acum=0;
        acum-=m1;
        acum+=m2;
        printf("%d\n",acum);
        scanf("%d %d %d %d",&h1,&m1,&h2,&m2);
    }
    return 0;
}
