#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main()
{
    char str[40];
    int i=0;
    do{
        gets(str);
        i++;
        cout<<str<<" "<<i;
        if(str[0] == '\n'){
            cout<<"es enter";
        }
    }while(str[0] != '*');
    cout << "Hello world!" << endl;
    return 0;
}
