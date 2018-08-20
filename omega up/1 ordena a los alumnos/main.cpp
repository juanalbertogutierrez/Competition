#include <iostream>
#include <queue>
#include <cstdio>

using namespace std;

int main()
{
    priority_queue <int> miqueue;
    int num,val;
    scanf("%d",&num);
    for(int i=0;i<num;i++){
        scanf("%d",&val);
        miqueue.push(val);
    }
    for(int i=0;i<num;i++){
        printf("%d ",miqueue.top());
        miqueue.pop();
    }
    return 0;
}
