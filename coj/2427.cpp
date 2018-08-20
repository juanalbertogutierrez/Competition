#include <cstdio>
#include <vector>
#define tam 1000005
using namespace std;

int main(){
	int a,b;
	vector <int> cribe (tam,1);
	for(int i=2;i*i<tam;i++){
		if(cribe[i]==1){
			for(int j = i * i;j < tam;j += i){
				cribe[j]=0;
			}
		}
	}
	for(int i=2;i<tam;i++){
		cribe[i]+=cribe[i-1];
	}
	scanf("%d %d",&a,&b);
	while(a != 0 && b!=0){
		printf("%d\n",cribe[b] - cribe[a-1]);
		scanf("%d %d",&a,&b);
	}
	
	return 0;
}
