#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	int lado1, lado2, result;
	
	
	cout << "Digite o valor do lado maior: ";
	cin >> lado1;
	
	cout << "Digite o valor do lado menor: ";
	cin >> lado2;
	
	result = lado1*lado2;
	
	cout << "A area do seu retangulo e: "<< result;
	
	
	
	return 0;
	
}
