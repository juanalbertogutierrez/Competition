#include <iostream>
#include <cmath>
#include <iomanip>
# define N_PI	3.14159265358979323846

using namespace std;

long double calculaoAngulo(int radio, int altura){
	return 2 * (acos(1 - ((double)altura / (double)radio))* 180.0 / N_PI);//sacamos angulo y convertimos a grados
}

long double calculoArea(int radio,int altura){
	return (pow(radio,2) / 2) * ( ((N_PI * (2 * (acos(1 - ((long double)altura / (long double)radio))* 180.0 / N_PI))) / 180) - sin((2 * (acos(1 - ((double)altura / (double)radio))* 180.0 / N_PI))*N_PI/180) );//sacamos el area
}

int main(){
	int A,B,C;
	long double AreaA, AreaB, AreaC;
	long double angulo, areaSegmento, area;

	while(cin>>A>>B){
            if(A==0 && B==0)
            {
                cout<<"0\n";
            }
            else{
		C = A + B;//calculamos el radio del circulo grande
		AreaA = N_PI * pow(A,2);
		AreaB = N_PI * pow(B,2);
		AreaC = N_PI * pow(C,2);

		if(A >= B){
			//angulo = calculaoAngulo(C,B*2);//enviamos radio y la altura de B
			//calculo de area
			area = calculoArea(C,B*2) - (N_PI * pow(B,2));
			//hacemos la resta del area del segmento y del area del circulo
			//area = areaSegmento - AreaB;
		}
		if(B > A){
			//angulo = calculaoAngulo(C,A*2);//enviamos radio y la altura de A
			//calculo de area
			area = calculoArea(C,A*2) - (N_PI * pow(A,2));
			//hacemos la resta del area del segmento y del area del circulo
			//area = areaSegmento - AreaA;
		}


		cout<<roundf(area*1000)/1000<<endl;
            }
	}

	return 0;
}
