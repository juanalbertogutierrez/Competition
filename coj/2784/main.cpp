#include <iostream>
#include <cstdio>
#include <queue>
#define MAX 1001
using namespace std;

int main()
{
    int num,t,maxi;
    priority_queue<int> priority;
    scanf("%d",&t);
    scanf("%d",&maxi);
    for(int i=1;i<t;i++){
        scanf("%d",&num);
        if(num>maxi){
            priority.push(MAX-maxi);
            maxi=num;
        }
        else{
            priority.push(MAX-num);
        }
    }
    printf("%d",maxi);
    for(int i=1;i<t;i++){
        printf(" %d",MAX-priority.top());
        priority.pop();
    }
    return 0;
}
