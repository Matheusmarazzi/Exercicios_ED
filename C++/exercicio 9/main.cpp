#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int numero[5];
	int cont;
	float media;
	for(int i = 1; i <=4 ; i++){
		cout << "digite o valor valor "<<i <<": ";
		cin >> numero[i];	
	}
	for(int i = 1; i <=4 ; i++){
		if(numero[i] <= numero[1] && numero[i] <= numero[2] && numero[i] <= numero[3] && numero[i] <= numero[4]){
			cout <<"\n menor numero e: "<< numero[i];
		}
	}
	for(int i = 1; i <=4 ; i++){
		if(numero[i] >= numero[1] && numero[i] >= numero[2] && numero[i] >= numero[3] && numero[i] >= numero[4]){
			cout << "\n maior numero e: "<< numero[i];
		}
	}
	media = (numero[1]+numero[2]+numero[3]+numero[4])/4;
	cout <<"\n media:"<<media;
	
	return 0;
}
