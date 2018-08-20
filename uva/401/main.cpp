#include <iostream>
#include <stdio.h>
#include <algorithm>

using namespace std;

int main()
{
    string palabra,palim,espejol,espejor;
    bool pal,esp;
    int j,mitad;
    freopen("input.txt","r",stdin);
    while(cin>>palabra)
    {
        int len=palabra.length();
        espejol="";
        pal=true;
        esp=true;
        espejor="";
        palim="";
        j=0;
        mitad=len/2;
        for(int i=len-1;i>=0;i--)
        {
            palim+=palabra[i];
            if(palim[j]!= palabra[j])pal=false;
            if(i>mitad)
            {
                espejol+=palabra[i];
                espejor+=palabra[j];
            }
            j++;

        }
        if(len%2==0)
        {
            espejol+=palabra[mitad];
            espejor+=palabra[--mitad];
        }
        else
        {
            espejol+=palabra[mitad];
            espejor+=palabra[mitad];
        }
        for(int i=0;i<=mitad;i++)
        {
            //cout<<espejol[i]<<" a ";
            switch(espejol[i])
            {
                case 'E':espejol[i]='3';
                    break;
                case 'J':espejol[i]='L';
                    break;
                case 'L':espejol[i]='J';
                    break;
                case 'Z':espejol[i]='5';
                    break;
                case '2':espejol[i]='S';
                    break;
                case 'A':espejol[i]='A';
                    break;
                case 'H':espejol[i]='H';
                    break;
                case 'I':espejol[i]='I';
                    break;
                case 'M':espejol[i]='M';
                    break;
                case 'O':espejol[i]='O';
                    break;
                case 'T':espejol[i]='T';
                    break;
                case 'U':espejol[i]='U';
                    break;
                case 'V':espejol[i]='V';
                    break;
                case 'W':espejol[i]='W';
                    break;
                case 'X':espejol[i]='X';
                    break;
                case 'Y':espejol[i]='Y';
                    break;
                case '1':espejol[i]='1';
                    break;
                case '8':espejol[i]='8';
                    break;
                case '5':espejol[i]='Z';
                    break;
                case 'S':espejol[i]='2';
                    break;
                default: espejol[i]='-';break;
            }
            if(espejol[i] != espejor[i])esp=false;
            //cout<<espejol[i]<<endl;
        }
        if(!pal && !esp)cout<<palabra<<" -- is not a palindrome.\n";
        if(pal && !esp)cout<<palabra<<" -- is a regular palindrome.\n";
        if(!pal && esp)cout<<palabra<<" -- is a mirrored string.\n";
        if(pal && esp)cout<<palabra<<" -- is a mirrored palindrome.\n";
        printf("\n");
        //cout<<"Palindrome "<<palim<<endl<<"espejo l "<<espejol<<"."<<endl<<"espejo r "<<espejor<<"."<<endl;
    }
    return 0;
}
