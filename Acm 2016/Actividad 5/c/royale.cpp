#include <iostream>
#include<string>
#include<stdio.h>

using namespace std;

int main()
{
    string str;
    int num1,num2;
    while(cin>>str)
    {
        long tam=str.size();
        int matriz[27]={0};
        int pos=1;
        string str2="";
        for(long i=0;i<tam;i++)
        {
            if(str[i]>96 && str[i]<123)
            {
                if(matriz[str[i]-97] == 0)
                {
                    switch(pos)
                    {
                    case 2:
                        matriz[str[i]-97]=5;
                        break;
                    case 5:
                        matriz[str[i]-97]=2;
                        break;
                    case 6:
                        matriz[str[i]-97]=9;
                        break;
                    case 9:
                        matriz[str[i]-97]=6;
                        break;
                    case 12:
                        matriz[str[i]-97]=15;
                        break;
                    case 15:
                        matriz[str[i]-97]=12;
                        break;
                    case 16:
                        matriz[str[i]-97]=19;
                        break;
                    case 19:
                        matriz[str[i]-97]=16;
                        break;
                    case 22:
                        matriz[str[i]-97]=25;
                        break;
                    case 25:
                        matriz[str[i]-97]=22;
                        break;
                    case 26:
                        matriz[str[i]-97]=29;
                        break;
                    default:
                        matriz[str[i]-97]=pos;
                        break;
                    }
                pos++;
                }
                if(matriz[str[i]-97] < 10)
                {
                    str2+=(matriz[str[i]-97]+'0');

                }
                else
                {
                    num1=matriz[str[i]-97]/10;
                    if(num1==2)num1=5;
                    num2=matriz[str[i]-97]%10;
                    str2+=(num1+'0');
                    str2+=(num2+'0');
                }

            }
        }
        cout<<str2<<"\n";
    }
    return 0;
}
