#include <iostream>
#include <cstdio>
#include <queue>

using namespace std;

int main()
{
    int t,a,b,r,d;
    priority_queue<int> priority;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&b,&a);
        while(a--){
            scanf("%d %d",&r,&d);
            priority.push(r);
        }
        int sum=0;
        while(b--){
            sum+=priority.top();
            priority.pop();
        }
        printf("%d\n",sum);
    }
    return 0;
}
