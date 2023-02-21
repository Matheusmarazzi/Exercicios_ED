#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	int b, h, result;
	
	
	cout << "Digite o valor da base: ";
	cin >> b;
	
	cout << "Digite o valor da altura: ";
	cin >> h;
	
	result = (b*h)/2;
	
	cout << "A area do seu triangulo e: "<< result;
	
	
	
	return 0;
	
}
