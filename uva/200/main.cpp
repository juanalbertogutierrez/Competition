#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    string palabra,antpalabra;
    int len,cont;
    freopen("input.txt","r",stdin);
    while(cin>>palabra)
    {
        int arr[26]={0},com,ant;
        cont=1;
        cout<<palabra[0]<<endl;
        while(palabra[0]!='#')
        {
            len=palabra.length();
            for(int i=0;i<len;i++)
            {
                if(arr[palabra[i]-'A']== 0)
                {
                    arr[palabra[i]-'A']=cont++;
                }
                else
                {
                    //cout<<palabra[i]<<" igual "<<antpalabra[i]<<endl;
                    if((arr[palabra[i]-'A'] != arr[antpalabra[i]-'A']) && (i==0))
                    {
                        ant=arr[antpalabra[i]-'A']+1;
                        //cout<<palabra[i]<<" dif "<<antpalabra[i]<<endl<<ant<<" ant "<<arr[palabra[i]-'A']<<endl;
                        arr[palabra[i]-'A']=ant;
                        int y=0;
                        //cout<<palabra[i]<<" dif "<<antpalabra[i]<<endl<<ant<<" ant "<<arr[palabra[i]-'A']<<endl;
                        while(ant!=cont)
                        {
                            //cout<<arr[y]<<" if "<<ant<<" para "<<y<<endl;
                            if(arr[y]==ant && arr[palabra[i]-'A']!= ant)
                            {
                                arr[y]=++ant;
                                y=0;
                            }
                            if(y==25)break;
                            y++;
                        }
                        //printf("este es diferente\n",palabra[i]);
                    }
                    else if((arr[palabra[i]-'A'] != arr[antpalabra[i]-'A'])&& (arr[palabra[i-1]-'A'] == arr[antpalabra[i-1]-'A']))
                    {
                        if(arr[palabra[i]-'A'] < arr[antpalabra[i]-'A'])
                        {

                        }
                    }
                }
                cout<<palabra[i]<<" a "<<arr[palabra[i]-'A']<<endl;
            }
            cout<<antpalabra<<endl;
            antpalabra=palabra;
            cin>>palabra;
        }
        com=1;
        int i=0;
        while(com!=cont)
        {
            if(arr[i]==com)
            {
                cout<<arr[i];
                printf(" %c\n",'A'+i);
                i=0;
                com++;
            }
            i++;
        }
    }

    cout << "Hello world!" << endl;
    return 0;
}
