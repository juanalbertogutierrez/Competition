#include <iostream>
#include <cstdio>
#include <queue>

using namespace std;

int main()
{
    int num,dato;
    scanf("%d",&num);
    priority_queue<int> myqueue;
    for(int i=0;i<num;i++){
        scanf("%d",&dato);
        myqueue.push(1001-dato);
    }
    for(int i=0;i<num;i++){
        printf("%d\n",1001-myqueue.top());
        myqueue.pop();
    }
    return 0;
}
