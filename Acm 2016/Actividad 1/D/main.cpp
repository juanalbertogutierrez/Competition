#include <iostream>

using namespace std;

int main()
{
    int t, n;
    cin >>t;
    while(t--)
    {
        cin >>n;
        char tablero[n][n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>tablero[i][j];
            }
        }
    }
    cout << "Hello world!" << endl;
    return 0;
}
