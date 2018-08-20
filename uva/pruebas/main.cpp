#include <iostream>

using namespace std;

int main()
{
    char tab[2][2]={{2,3},{4,5}},re[2][2];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<tab[i][j];
        }
        cout<<endl;
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<re[i][j];
        }
        cout<<endl;
    }
    cout << "Hello world!" << endl;
    return 0;
}
