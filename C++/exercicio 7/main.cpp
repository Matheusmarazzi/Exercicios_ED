#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int ano, result;
	
	
	
	cout << "digite um ano: ";
	cin >> ano;
	if(ano%4 == 0 && ano%100 !=0){
		cout<<" e um ano bissexto";
	}else{
		cout << "nao e um ano bissexto";
	}
	
	
	return 0;
}
