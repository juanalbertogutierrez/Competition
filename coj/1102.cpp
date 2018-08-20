#include <cstdio>
#include <string>
#include <iostream>

using namespace std;

int main(){
	string num;
	int par,impar;
	cin>>num;
	while( num[0] != '0'){
		par=0;
		impar=0;
		for(int i=0;i<num.length();i++){
			
			if(i%2==0){
				par+=num[i]-'0';
			}
			else{
				impar+=num[i]-'0';
			}
		}
		if((par-impar) % 11==0)
			cout<<num<<" is a multiple of 11.\n";
		else
			cout<<num<<" is not a multiple of 11.\n";
			cin>>num;
	}
	
	return 0;
}
