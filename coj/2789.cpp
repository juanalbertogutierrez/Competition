#include <cstdio>
#include <string>
#include <queue>
#include <iostream>
#define max 4

using namespace std;

int main(){
    string str;
    int len,dato;
    priority_queue<int> arr;
    cin>>str;
    len=str.length();
    for(int i=0;i<len;i+=2){
        dato=str[i]-'0';
        arr.push(4-dato);
    }
    cout<<4-arr.top();
    arr.pop();
    for(int i=2;i<len;i+=2){
            cout<<"+"<<4-arr.top();
            arr.pop();
    }
    cout<<endl;
    system("pause");    
    return 0;
}
