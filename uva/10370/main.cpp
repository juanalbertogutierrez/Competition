#include <iostream>
#include <stdio.h>
#include <algorithm>

using namespace std;

int main()
{
    float avg;
    int n,c;
    char s='%';
    freopen("input.txt","r",stdin);
    scanf("%d",&c);
    while(c--)
    {
        scanf("%d",&n);
        avg=0;
        int cal[n];
        float cont=0;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&cal[i]);
            avg+=cal[i];
        }
        avg/=n;
        //cout<<"avg "<<avg<<endl;
        for(int i=0;i<n;i++)
        {
            //cout<<cal[i]<<" a "<<avg<<endl;
            if(cal[i]>avg)
                cont++;
        }
        //cout<<cont<<" entre "<<n<<endl;
        float res=(cont/n)*100;
        printf("%.3f%c\n",res,s);
    }
    return 0;
}
